#include <stdio.h>

//---- SECUENCIA FIBONACCI ---- ///////////////////////////////////////////////////////////////////////////////////////////////////////////
void calcFibonacci(){
    printf( "Calcular Termino de la Serie de Fibonacci\nENTER Para Continuar" );
    getchar();
}

//---- MAXIMO COMUN DIVISOR ---- //////////////////////////////////////////////////////////////////////////////////////////////////////////
void calcMCD(){
    printf( "Calcular Maximo Comun Divisor\nENTER Para Continuar" );
    getchar();
}
//---- SI SON NUMEROS PRIMOS ----//////////////////////////////////////////////////////////////////////////////////////////////////////////
void primeNumbers(){
	printf( "\n----CALCULO DE NUMEROS PRIMOS----\n\n" );
	int number;
	printf("DIGITA EL NUMERO\n");
	scanf("%i",&number);
    calculation(number);
    printf("\nENTER Para Continuar" );
    getchar();
    getchar();
}

int calculation (int num){
	int cont=0;
	if(num>1){	
	int i=1;
	for(i;i<=num;i++){
	if(num%i==0){
		cont++;
	}
	}
	if(cont>2){
	cont==0;
	}else{
	printf("El numero [%i] es primo \n",num);
	cont==0;
	}
	calculation(num-1);
	}
}
//---- SI SON NUMEROS AMIGOS ---- /////////////////////////////////////////////////////////////////////////////////////////////////////////
void friendsNumbers(){
	printf( "\n----CALCULO DE NUMEROS AMIGOS----\n\n" );
	int number1,number2;
	 printf("Digita el numero 1\n");
	 scanf("%i",&number1);
	 printf("Digita el numero 2\n");
	 scanf("%i",&number2);
     validate(number1,number2,(calculate(number1)),(calculate(number2)));
       printf("\nENTER Para Continuar" );
    getchar();
    getchar();
} 

int calculate (int number){
	 int count=0;
	 int  i;
	 for (i=1; i<number;i++){
	 if((number%i)==0){
	 	count=count+i;	
	    }
	 }
	return count;
}
int validate (int number1,int number2,int calculatenumber1,int calculatenumber2){
	if(number1 == calculatenumber2 && number2 == calculatenumber1){
		 printf("El numero [%i] y el numero [%i] SI son numeros amigos\n",number1,number2);
	}else{
	     printf("El numero [%i] y el numero [%i] NO son numeros amigos\n",number1,number2);
	}
}
//---- SI EL NUMERO ES CAPICUA ---- ///////////////////////////////////////////////////////////////////////////////////////////////////////
void numberCapicua(){
   
    getchar();
}
//---- SI LA PALABRA ES PALINDROMO ---- ///////////////////////////////////////////////////////////////////////////////////////////////////
void palindromo(){
    getchar();
}
//---- AÑO BISIESTO ---- /////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calBisiesto() {
    int year = 0;
  
        printf("\nDijite el año que desea saber si es bisiesto o no\n", year);
        scanf("%d", &year);
        if ((year % 4 == 0 && year % 100 != 0)||year%400==0) {
            printf("El año %d es bisiesto", year);
        } else {
            printf("El año %d no es bisiesto\n", year);
        }
      printf("\nENTER Para Continuar" );
    getchar();
    getchar();
}
//---- FIN ---- ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mainMenu(){
    char option;

    char *mainMenu = "\n<<<<MENU PRINCIPAL>>>>\n\n"
	"1. Serie de Fibonnaci\n"
    "2. Maximo Comun Divisor\n"
    "3. Numeros Primos\n"
    "4. Numeros Amigos\n"
    "5. Numero Capicua\n"
    "6. Palindromo\n"
    "7. Año bisiesto\n\n"
    "Digite Opcion ([s/S]-Salir).... ";
    do{
        printf( mainMenu );
        scanf("%c",&option);
        fflush(stdin);
        switch(option){
            case '1' : calcFibonacci();
            break;

            case '2' : calcMCD();
            break;
            
            case '3' : primeNumbers();
            break;
            
            case '4': friendsNumbers();
            break;
            
            case '5': numberCapicua;
            break;
            
            case '6': palindromo();
            break;
			
	        case '7': calBisiesto();
            break;
        }



    }while( toupper(option) != 'S' );
}

/*
 *
 */
int main(int argc, char** argv) {

    mainMenu();

    return 0;
}

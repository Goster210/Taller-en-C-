#include <stdio.h>

int calculateMCD( int less, int higher ){

}

void calcFibonacci(){
    printf( "Calcular Termino de la Serie de Fibonacci\nENTER Para Continuar" );
    getchar();
}

void calcMCD(){
    printf( "Calcular Maximo Comun Divisor\nENTER Para Continuar" );
    getchar();
}

void calBisiesto() {
    int year = 0;
    do  {
        printf("\nDijite el año que desea saber si es bisiesto o no ", year);
        scanf("%d", &year);
        if (year % 4 == 0 && year % 100 != 0) {
            printf("El año %d es bisiesto", year);
        } else if (year % 400 == 0) {
            printf("El año %d es bisiesto", year);
        } else {
            printf("El año %d no es bisiesto", year);
        }
    } while ((year > 0)) ;
}

void mainMenu(){
    char option;

    char *mainMenu = "<<<<MENU PRINCIPAL>>>>\n\n"
	"1. Serie de Fibonnaci\n"
    "2. Maximo Comun Divisor\n"
    "3. Numeros Primos\n\n"
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

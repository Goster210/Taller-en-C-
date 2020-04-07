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

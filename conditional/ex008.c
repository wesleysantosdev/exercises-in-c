#include <stdio.h>
#include <stdlib.h>


/*
Write a code that shows the user a menu with 4 options of basic arithmetic operation (the basic ones). 
The user choose one of the 4 and then your program have to ask 2 numbers and do the operation, 
showing the result on the screen and keep going until the stop condition.
*/

int main (){

int option;
float firstNumber, secondNumber;

do {
    printf ("\t\t>> Arithmetic Operations <<\n\n");
    printf ("\n\t\tDivided by (/)............. 1\n");
    printf ("\n\t\tTimes (x).................. 2\n");
    printf ("\n\t\tMinus (-).................. 3\n");
    printf ("\n\t\tPlus (+)................... 4\n");
    printf ("\n\t\tSair ...................... 5\n\n");
    printf ("\nSelect one of the options by typing its number: ");
    scanf ("%d", &option);

switch (option){
    case 1:
        printf ("\nType the first number: ");
        scanf ("%f", &firstNumber);
        printf ("\nType the second number ");
        scanf ("%f", &secondNumber);
        printf ("\n\t\t\tThe result of the division is: %.2f\n\n\n", firstNumber / secondNumber);
        
        break;

    case 2:
        printf ("\nType the first number: ");
        scanf ("%f", &firstNumber);
        printf ("\nType the second number ");
        scanf ("%f", &secondNumber);
        printf ("\n\t\t\tThe result of the multiplication is: %.2f \n\n\n", firstNumber * secondNumber);
        
        break;

    case 3:
        printf ("\nType the first number: ");
        scanf ("%f", &firstNumber);
        printf ("\nType the second number ");
        scanf ("%f", &secondNumber);
        printf ("\n\t\t\tThe result of the subtraction is: %.2f\n\n\n", firstNumber - secondNumber);
        
        break;

    case 4:
        printf ("\nType the first number: ");
        scanf ("%f", &firstNumber);
        printf ("\nType the second number: ");
        scanf ("%f", &secondNumber);
        printf ("\n\t\t\tThe result of the addition: %.2f\n\n\n", firstNumber + secondNumber);
        break;
        
    case 5:
        printf ("\n\nLeaving...\n\n");
        break;

    default:
        printf ("\n\nInvalid number, run the program again and type a valid one.\n\n");
        break;
}
}while (option < 5 && option > 0);

}

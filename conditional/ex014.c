#include <stdio.h>
#include <stdlib.h>

/* Write this option menu below. Receive the users' option and execute what the option says. 
show an error message if the number is invalid.
Choose the option:
1- Sum of 2 numbers.
2- Difference between numbers (biggest by smallest).
3- Product of 2 numbers (number times number).
4- Division of 2 numbers (the denominator can't be zero).
*/

int main (){

int option;
int numberOne, numberTwo; 
float floatNumberOne, floatNumberTwo;

printf ("\t\t1- Sum of 2 numbers\n");
printf ("\t\t2- Difference between 2 numbers\n");
printf ("\t\t3- Product of 2 numbers\n");
printf ("\t\t4- Division of 2 numbers\n");
printf ("\n\t\tType the number of the option:\n\n");
scanf ("%d", &option);

switch (option){
    case 1:
        printf ("\nType a number ");
        scanf ("%d", &numberOne);
        printf ("\nType another number: ");
        scanf ("%d", &numberTwo);

        printf ("\nThe sum of the numbers is: %d\n", numberOne + numberTwo);
        break;

    case 2:
        printf ("\nType a number ");
        scanf ("%d", &numberOne);
        printf ("\nType another number: ");
        scanf ("%d", &numberTwo);
        
        if (numberOne >= numberTwo){
            printf ("\nThe difference of the numbers is: %d\n", numberOne - numberTwo);
        }else {
            printf ("\nThe difference of the numbers is: %d\n", numberTwo - numberOne);
        }
        break;    

    case 3:
        printf ("\nType a number: ");
        scanf ("%d", &numberOne);
        printf ("\nType another number: ");
        scanf ("%d", &numberTwo);

        printf ("\nThe product of the numbers is: %d\n", numberOne * numberTwo);
        break;

    case 4:
        
        printf ("\nType a number: ");
        scanf ("%f", &floatNumberOne);
        printf ("\nType how much you want to divide the previous number by: ");
        scanf ("%f", &floatNumberTwo);
            //this line is to make sure that the denominator is greater than zero.
            while (floatNumberTwo <= 0)
            {
                printf ("\n\nThe denominator can't be less than >> 0 <<\n\nPlease type a new number greater than zero: ");
                scanf ("%f", &floatNumberTwo);
            }

        printf ("\nThe division of the numbers is: %.2f\n", floatNumberOne / floatNumberTwo);
    break;    
    
    default:
        printf ("\n\nInvalid number.\n\nLeaving...\n");
        break;
    }

}
#include <stdlib.h>
#include <stdio.h>

/*Using switch case, write a code that receives an integer number between 1 and 7 and shows the day
of the week corresponding to this number.
*/

int main (){

int number;

printf ("Type a number between 1 and 7:\n\n");
scanf ("%d", &number);

switch (number){
    case 1:
    printf ("\n\nSunday!!\n");
    break;

    case 2:
    printf ("\n\nMonday!!\n");
    break;

    case 3:
    printf ("\n\nTuesday!!\n");
    break;

    case 4:
    printf ("\n\nWednesday!!\n");
    break;

    case 5:
    printf ("\n\nThursday!!\n");
    break;

    case 6:
    printf ("\n\nFriday!!\n");
    break;

    case 7:
    printf ("\n\nSaturday!!\n");
    break;

    default:
    printf ("\n\nInvalid number!!\n");
}

}
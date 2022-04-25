#include <stdio.h>
#include <stdlib.h>

/* Write a code to check if a certain integer number is divisible for 3 or 5, but not simultaneously for both.
*/

int main (){

int number;

    printf ("Type an integer number: ");
    scanf ("%d", &number);

//the second parameter after "&&" is to makke sure that the number isn't simultaneously divisible for both.
if (number % 3 == 0 && number % 5 != 0){
    printf ("\nThe number %d is divisible for 3\n", number);

}
else if (number % 5 == 0 && number % 3 != 0){
    printf ("\nThe number %d is divisible for 5\n", number);
}

}


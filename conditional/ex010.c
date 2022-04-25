#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Receive an integer number. If the received number is negative, show the message "Invalid number". If the number is positive, calculate its 
logarithm.
*/

int main (){

int number; 

    printf ("Type an integer number: ");
    scanf ("%d", &number);

if (number < 0){
    printf ("Numero invalido");
}else{
    printf ("\nLogarithm: %.2f\n", log (number));
}

}
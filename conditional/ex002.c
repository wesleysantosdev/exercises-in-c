#include <stdio.h>
#include <stdlib.h>

/* Write a code that calculate and show the trapezoid area. It is known that:

A = (largerBase + smallerBase) * height  / 2
                           
the larger and smaller bases has to be numbers greater than zero (0).
*/

int main (){

float largerBase, smallerBase, height, area;

    printf ("\n\t\tTrapezoid's area calculation\n\n");

    printf ("Type the trapezoid's larger base: ");
    scanf ("%f", &largerBase);

//the "&" here refers to the adress in the memory.
checkBelowZero (&largerBase);

    printf ("\nType the trapezoid's smaller base: ");
    scanf ("%f", &smallerBase);

checkBelowZero (&smallerBase);

        while (smallerBase > largerBase){
            printf("\nThe smaller base can't be greater than the larger base\n\nPlease, type the smaller base number again: ");
            scanf("%f", &smallerBase);
            
            checkBelowZero (&smallerBase);

            printf("\nNow, type the larger base number again: ");
            scanf("%f", &largerBase);

            checkBelowZero (&largerBase);
        }


    printf ("\nType the trapezoid's height ");
    scanf ("%f", &height); 

//Same goes for height, it need to be greater than zero.
checkBelowZero (&height);

    area = (largerBase + smallerBase) * height / 2;

    printf ("\n\nThe trapezoid's area is: %.2f\n", area);

}


//This function will check if the number is greater than zero, just like the larger and smaller bases need to be. if it isn't greater than zero, the user will have to type it again until it is.

//I had to use pointers to pass the value by reference, so here the parameter is expecting a pointer to something.
void checkBelowZero (float *x){
// to read the parameters value, I have to call a pointer to it.

/* here, the "x" is actually just a number which is the memory location of the variable I passed. Calling a pointer to it reads what's at that address, in this case the value of my variables  "largerBase" and "smallerBase".    
*/
    while (*x <= 0){
    printf ("\nThe number has to be greater than zero (0).\n\nPlease, type it again: ");
    scanf ("%f", x);
/*Since "x" already contains the base address of the variable, I shouldn't call the base address of that, that's why i don't use "&" in this scanf.
*/
}

}
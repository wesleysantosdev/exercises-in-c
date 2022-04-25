#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Calculate the roots of the 2nd degree equation.

Remember that:
x = - b ± (plus and minus) √Δ (delta root) / 2a

where:
Δ(delta) = b² - 4ac
and ax2 + bx + c = 0 represents a 2nd degree equation.
**The variable A has to be different than zero (0). In case it's equal, show the message "This is not a 2nd degree equation"
> If delta < 0, there's no real root. Show the message "There's no real root"
> If delta = 0, there is a real root. Show the message "Unique root"
> If delta > 0, Show the two real roots.
*/

int main (){

float a, b, c, delta, x1, x2;

    printf ("\t\t2nd degree equation's roots calculation\n\n");
    printf ("Type the coefficient (a, b e c respectifully) of the 2nd degree equation:\n\n");
    scanf ("%f %f %f", &a, &b, &c);


//here I'll make sure that the coefficient 'a' isn't equal to zero, but if it is, I'll ask a new number to it.
    while (a == 0){    
        printf ("\n\nIf the coefficient 'a' is equal to zero (0), it's not a 2nd degree equation.\n\n");
        printf ("Please, type a new value to 'a':\n\n");
        scanf ("%f", &a);
    }

delta = b * b - 4 * a * c;

if (delta < 0){
    printf ("\n\nThere's no real root.\n\n\n");

}else if (delta == 0){
    printf ("\n\nUnique root, %.2f\n\n\n", -b / (2 * a));
    
}else if (delta > 0){
    x1 = (-b + sqrt (delta)) / (2 * a);
    x2 = (-b - sqrt (delta)) / (2 * a);

    printf ("\n\nx1 = %.2f\n", x1);
    printf ("x2 = %.2f\n\n\n", x2);
}

}
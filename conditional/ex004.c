#include <stdlib.h>
#include <stdio.h>

/* Given three values, A, B, C, check if they can be values of the sides of a triangle and, if so, whether it is a scalene, equilateral, or isosceles triangle, 
considering these concepts: The length of each side of a triangle is less than the sum of the other two sides.
- An equilateral triangle is a triangle that has three equal sides.
- A triangle that has two equal sides is called isosceles.
- The triangle that has three different sides is called scalene. */

int main (){

float A, B, C;

printf ("Type the size of the triangle's A side: ");
scanf ("%f", &A);
printf ("Type the size of the triangle's B side: ");
scanf ("%f", &B);
printf ("Type the size of the triangle's C side: ");
scanf ("%f", &C);

if (A == B && A == C){
    printf ("\n\nThe triangle is equilateral.\n\n");
}

if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)){
    printf ("\n\nThe triangle is isosceles.\n\n");
}

if (A != B && A != C){
    printf ("\n\nThe triangle is scalene.\n\n");
}

}


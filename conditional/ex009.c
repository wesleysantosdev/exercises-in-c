#include <stdio.h>
#include <stdlib.h>

/*Write a code that receives the height and gender of a person and calculate their ideal weight, using these following methods: (where h stands for height): 
• Men: (72.7 ∗ h) − 58.
• Women: (62, 1 ∗ h) − 44,7.
*/

int main() {

float height; 
int gender;

    printf ("Type your height: ");
    scanf ("%f", &height);
    printf ("Type 1 for male and 2 for female: ");
    scanf ("%d", &gender);

switch (gender){
    case 1:
    printf ("\nThe ideal weight for you is: %.2fkg\n", (72.7 * height) - 58);
    break;

    case 2:
    printf ("\nThe ideal weight for you is: %.2fkg\n", (62.1 * height) - 44.7);
    break;

    default:
    printf ("\n\nInvalid Number.\n");
}

}
   
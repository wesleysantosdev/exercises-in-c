#include <stdio.h>
#include <stdlib.h>

/* A company sells the same product to four different states. Each state has a different tax rate on the product (MG 7%; SP 12%; RJ 15%; MS 8%). 
Write a code in which the user enters the target value and state of the product and the program returns the final price of the product plus 
the state tax where it will be sold. If the state entered is not valid, it will show an error message. */

int main (){

float MG, SP, RJ, MS, value;
int state;

printf ("Type the product value: R$ ");
scanf ("%f", &value);

printf ("\n\n1 - Minas Gerais");
printf ("\n\n2 - Sao Paulo");
printf ("\n\n3 - Rio de Janeiro");
printf ("\n\n4 - Mato Grosso do Sul");
printf ("\n\nSelect the state: ");
scanf ("%d", &state);

switch (state){
    case 1:
        MG = (value / 100) * 7;
        printf ("\n\nThe final value of the product with taxes is: R$ %.2f.\n", value + MG);
        break;

    case 2:
        SP = (value / 100) * 12;
        printf ("\n\nO valor final do produto com impostos fica: R$ %.2f.\n", value + SP);
        break;

    case 3:
        RJ = (value / 100) * 15;
        printf ("\n\nO valor final do produto com impostos fica: R$ %.2f.\n", value + RJ);
        break;

    case 4:
        MS = (value / 100) * 8;
        printf ("\n\nO valor final do produto com impostos fica: R$ %.2f.\n", value + MS);
        break;

    default:
        printf ("\n\nInvalid state.\n");
        break;
}



}

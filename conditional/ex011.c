#include <stdio.h>
#include <stdlib.h>

/* Write a code that receives an integer number greater than zero (0) and show on the screen the sum of all its digits. For example, the number 251 would be 8 (2 + 5 + 1). 
If the number isn't greater than zero, finish the program with the message "Invalid number" */


int main(){

int number;

    printf("Type an integer number: ");
    scanf("%d", &number);

if (number > 0){
    sumDigits (number);
}else{
    printf("\nInvalid number\n");
}

}
//This function will sum all the digits of the number given to the parameter.
int sumDigits (int number){
    int sum = 0;
    //this logic will basically get the last digit of the integer number in the parameter and add it to "sum" variable and actually sum all the digits until the number is equal to zero.
    while (number > 0){
        //given the number 123 for example, the rest (%) of 123 / 10 is '3' (the float result is 12,3, but we will treat it as an int), so it'll add '3' to the "sum" variable. 
        sum = sum + number % 10;  //
        //now this line will divide 123 by 10 again, but this time, it'll keep only the integer result, '12'. The process will repeat, but this time the variable "number" will be 12 instead of 123, and this will repeat until the variable in the parameter "number" reachs zero (0).
        number = number / 10;
    }

    printf("\nThe sum of the digits is: %d\n",sum);
}



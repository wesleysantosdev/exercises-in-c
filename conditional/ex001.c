#include <stdio.h>
#include <stdlib.h>

/* Determine if a specific year is a leap year. A leap year is when the year is divisible for 400 or if the year is divisible for 4 but not for 100. For example: 1988, 1992, 1996 */


//function to check whether it is a leap year or not
int leapYear (const int y){

if (y % 400 == 0 || y % 4 == 0 && y % 100 > 0)
{
    return printf ("\nIt is a leap year.\n");
}else
{
    return printf ("\nIt isn't a leap year.\n");
}

}

int main (){

const int year; 
int result;

    printf ("Type any year: ");
    scanf ("%d", &year);

//calling the function
result = leapYear (year);

}


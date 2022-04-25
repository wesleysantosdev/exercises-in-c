#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Make a math test for kids that are learning to sum integer numbers less than 100. 
Choose random numbers between 1 and 100, and show on the screen the question: 
How much is a + b, where a and b are random numbers and you have to get the answer from them. 
Do it 5 times, and show them the correct answers along with the questions, and also how many times the student got the right answer.
*/

int main (){

int answer, hits = 0, a, b, sum;

srand (time(NULL));

    printf ("\t\t Math test\n\n");

for (int i = 0; i < 5; i++){
    //this function will generate the random numbers less than 100.
    a = rand () % 100;
    b = rand () % 100;
    
    sum = a + b;
    
        printf ("How much is %d + %d?\n\n", a, b);
        scanf ("%d", &answer);
        printf ("\n");

            if (answer != sum){
                printf ("Wrong answer!\n\nThe right answer is: %d\n\n\n", sum);
            }else {
                printf ("That's right!\n\n");
                hits++;
            }
}
   printf ("\n\nYou got %d hits and %d misses!\n", hits, 5 - hits);
}

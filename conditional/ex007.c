#include <stdio.h>
#include <stdlib.h>

/* Make an algorithm that calculates the weighted average of 3 test scores. The first and second tests have weight 1, and the third one has weight 2. 
At the end, show the student's weighted average and also show whether this student was approved or not. The approval score has to be equal or over 60 points.
*/

float weightedAverageCalculation (float one, float two, float three);

int main (){

float firstTestScore, secondTestScore, thirdTestScore, average;
    
    printf ("Type the test 1 score: ");
    scanf ("%f", &firstTestScore);
    printf ("Type the test 2 score: ");
    scanf ("%f", &secondTestScore);
    printf ("Type the test 3 score: ");
    scanf ("%f", &thirdTestScore);

average = weightedAverageCalculation (firstTestScore, secondTestScore, thirdTestScore);

    if (average >= 60){
        printf ("\nAverage: %.2f", average);
        printf ("\nStatus: Approved\n");
    }else {
        printf ("\nAverage: %.2f", average);
        printf ("\nStatus: Disapproved\n");
    }

}



float weightedAverageCalculation (float one, float two, float three){
    const int firstTestWeight = 1, secondTestWeight = 1, thirdTestWeight = 2;
    float weightedAverage;

weightedAverage = (one * firstTestWeight + two * secondTestWeight + three * thirdTestWeight) / (firstTestWeight + secondTestWeight + thirdTestWeight);

    return weightedAverage;
}

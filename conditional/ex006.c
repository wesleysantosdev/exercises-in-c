#include <stdlib.h>
#include <stdio.h>

/*Read the age and the service time of a worker and write whether he can or not retire. The conditions for retirement are:
> They have to be 65+ 
> or have worked for 30+ years.
> or have at least 60 and have worked for 25+ years.
*/

int main (){

int age, serviceTime;

    printf ("Type your age: ");
    scanf ("%d", &age);  
    printf ("Type your service time: ");
    scanf ("%d", &serviceTime);

checkValidTimeService(&serviceTime, &age);        
checkValidAge (age, serviceTime);  

    if (age >= 65 || serviceTime >= 30 || age >= 60 && serviceTime >= 25)
    {
        printf ("\n\nYou have the right for retirement.\n");
    }else
    {
        printf ("\n\nYou have no right for retirement yet\n");
    }

}
//this will check if the time service is valid, considering that the age has to be a value greater than the service time.
void checkValidTimeService(int *service, int *age){
    while (*service > *age){
        printf ("\nIt's impossible to have less age than time service, so you may have typed it wrong.\n\nPlease, do it again.\n\n");
        printf ("Type your age: ");
        scanf ("%d", age);
        printf ("Type your service time: ");
        scanf ("%d", service); 
    }
}
//this one will calculate if the values are valid, considering the fact that you can only start working over 14. If they are not valid, the program will end, avoiding calculating people with 20 years old and 15 years of service time (which is impossible), for example.
 void checkValidAge (int age, int service){
    if ((age - service) < 16){
        printf ("\nYou cannot work under 16 in Brazil, so the values you typed are invalid.\n\nPlease run the program again and type real and valid numbers this time.\n");
    
    exit(0);
    }

} 


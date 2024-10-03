/* write a program to input principle, rate, and time 
then calculate & print simple interest*/

# include<Stdio.h>

int main(){

    float principal, rate, time, interest;

     printf("Enter the principal amount: ");
    scanf("%f", &principal);

     printf("Enter the rate: ");
    scanf("%f", &rate);

     printf("Enter the time: ");
    scanf("%f", &time);

    interest = (principal * rate * time)/100;

    printf("The simple interest is: %.2f\n", interest);

    printf("Thank You");

    return 0;

}
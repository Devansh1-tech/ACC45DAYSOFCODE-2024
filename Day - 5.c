/* write a program to take input base and height of
 triangle and calculate area of triangle*/

 # include<stdio.h>

 int main(){

    float base, height, area;

    printf("Enter The Value Of Height :");
    scanf("%f", &height);

    printf("Enter The Value Of base :");
    scanf("%f", &base);
 
    area = (base * height)*0.5;

    printf("The Area Of Triangle Is :%.2f", area);

    printf("ThankYou");

    return 0;
 }
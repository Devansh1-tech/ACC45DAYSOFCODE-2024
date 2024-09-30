/*write a program to input five numbers (floating point)
 and find out their average */

 # include<stdio.h>

 int main(){

    float a, b, c, d, e;
    float sum, average;

    printf("Enter the Value of a: ");
    scanf("%f", &a);

    printf("Enter the Value of b: ");
    scanf("%f", &b);

    printf("Enter the Value of c: ");
    scanf("%f", &c);

    printf("Enter the Value of d: ");
    scanf("%f", &d);

    printf("Enter the Value of e: ");
    scanf("%f", &e);

    sum = a + b + c + d + e;

    average = sum/5;
    printf("The average of these number is : %.2f\n ", average);

    return 0;

 }
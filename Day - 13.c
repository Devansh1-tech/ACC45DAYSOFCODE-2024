/*write a program to input two numbers from the keyboard and calculate 
addition, subtraction, multiply and then print the result*/

# include<stdio.h>

int main(){

    int a, b;

    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);

   int addition = a + b;
    printf("%d", addition);
    return 0;

}
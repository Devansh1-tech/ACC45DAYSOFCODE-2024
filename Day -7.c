/*write a program to input temperature in farenheite degree and convert it into celcius degree*/

# include<stdio.h>

int main(){

    float f, c;
    printf("enter farenheite degree: ");
    scanf("%f", &f);

    c = (f - 32) * 5/9;

    printf("Temperature in celcius :%.2f", c);
    
    return 0;

}
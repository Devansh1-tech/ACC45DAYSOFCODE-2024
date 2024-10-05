/* Write a program to take input of distance and time and calculate speed*/

# include<stdio.h>


int main (){

    float speed, distance, time;

    printf("Enter distance in (KM) :");
    scanf("%f", &distance);

    printf("Enter The time :");
    scanf("%f", &time);

    speed = distance / time;
    printf("speed = %.2f", speed);

    return 0;



}
/*write a program to input a radius from the keyboard
 then calculate and print area of circle*/

 # include <stdio.h>

 int main(){

    float radius, area;

    printf("Enter the value of radius:");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("THe area of circle is %.2f", area);

    printf("THank You");

    return 0;

 }
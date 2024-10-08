/*Write a program to take input of a side of a square and calculate area of square*/

# include<Stdio.h>

int main (){

    int a, area;

    printf("Enter The Value Of a :");
    scanf("%d", &a);

    area = a * a;

    printf("The square of the number is :%d", area);

    return 0;
}

// write a program to input a nmber from the keyboard and find out cube

# include<stdio.h>

int main(){

    int a, area;

    printf("Enter the value of a ");
    scanf("%d",&a);

    area = a * a * a;

    printf("cube of the number is = %d", area);

    return 0;


}
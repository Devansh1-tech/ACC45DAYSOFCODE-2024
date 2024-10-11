// write a  progeram to check whether a number is divisible by 5 or 11 

#include<stdio.h>

int main(){

    int num;

    printf("enter the value of num:");
    scanf("%d", &num);

    if(num % 5 ==0 || num % 11 == 0){
        printf("yes it is divisible by 5 or 11");
    }
    else{
        printf("no it is not divisible by 5 or 11");
    }
}
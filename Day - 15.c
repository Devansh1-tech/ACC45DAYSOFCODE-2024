# include<stdio.h>.h>

int main(){
    int income, tax =0;
    printf("Enter income");
    scanf("%d", & income);

    if(income>=250000 && income<=500000){
        tax = 0.05 *( income - 250000);
    }
   else if(income>=500000 && income<=1000000){
        tax = 0.05 *( income - 250000) +0.2 * (income - 500000);
    }
    
    
}
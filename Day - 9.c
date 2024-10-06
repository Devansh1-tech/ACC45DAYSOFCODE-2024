/*write a program to input length and breadth of the 
rectangle and find out the area and perimeter of rectangle*/

# include<stdio.h>
int main() {
    int length, breadth, area, perimeter;

    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    printf("The area of the rectangle is:%d\n", area);
    printf("The perimeter of the rectangle is:%d \n", perimeter);

    return 0;
}
#include <stdio.h>

int main() {
    float mark1, mark2, average;
    
    printf("Enter the marks of first subject: ");
    scanf("%f", &mark1);
    
    printf("Enter the marks of second subject: ");
    scanf("%f", &mark2);
    
    average = (mark1 + mark2) / 2;
    
    printf("Average marks = %.2f", average);
    
    return 0;
}
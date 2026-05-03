/*This is a program to find the area of a square*/
#include <stdio.h>
int main() {
    int s, area;
    printf("AREA CALCULATOR\n");
    printf("enter the value of one side :  \n");
    scanf("%d", &s);
    
    area = s*s;
    
    printf("the area of the square : %d \n", area);
    return 0;
}
/*Write a C program that calculates the area of a triangle.  
Your program prompts the user to enter the height and base.
It accepts the user's input in decimal format.
It multiplies the product of the height and base by 0.5.
It stores the area in memory and outputs the area to 2 decimal places along with its address in memory in hexadecimal format*/

#include<stdio.h>
#define number 0.5
int main()
{
	float height,base,area;
	
	printf("Please enter height:");
	scanf("%f",&height);
	
	printf("Please enter base:");
	scanf("%f",&base);
	
	area = (height * base) / 2;
	printf("The area is: %.2f",area);
	
	return 0;
}

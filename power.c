/*Write a function that takes two integers: base, and power. Then, the function calculates the result of raising the base to the power. */
//Note that this program includes power.h

#include<stdio.h>
#include "power.h"


int main()
{
	int base,exponent;
	int power_result;
	
	printf("Please enter the base:");
	scanf("%d",&base); 
	
	printf("Please enter the exponent:");
	scanf("%d",&exponent); 
	//calling power and pass a value
	power_result= power(base,exponent);
	printf("The power result is:%d", power_result);
}

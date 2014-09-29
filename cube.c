/*Write a function to calculate the cube of a number.
*/

#include<stdio.h>
#include "cube.h"

int main()
{
	int number;
	int cube_result;
	printf("Please enter an integer:");
	scanf("%d",&number);
	
	//Calling cube and pass the value
	cube_result=cube(number);
	printf("The cube is:%d",cube_result);
}

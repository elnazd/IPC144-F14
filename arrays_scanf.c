/*Write a program to prompt 20 students to enter their grades. 
Save the grades in an array.
Display the grades.
*/


#include<stdio.h>
#define SIZE 20
int main()
{
	int grades[SIZE] ;
	int i;
	
	for(i=0;i<SIZE;i++)
	{
	
		printf("Please enter your grade:");
		scanf("%d", &grades[i]);
	
	}
	
	return 0;
	
	
}

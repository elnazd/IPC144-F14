/*Write a C program that prompts the user to enter the amount of cash in their pockets, accepts the user's input, and displays the amount in the format shown below. If the user has entered 4.52, your program displays*/

#include<stdio.h>
int main()
{

	float amount;
	printf("How much money do you have in your pocket?\n");
	
	scanf("%f",&amount);
	
	printf("The amount of money in your pocket is: $ %.2f",amount);


	return 0;
}

/*
There are 3 items in a store:
Item 1 costs $10.
Item 2 costs $7.
Item 3 costs $12.
Prompt the user to input an item, display the price for the item to the user.

*/
#include<stdio.h>
int main(void){
	int item;
	printf("Please enter an item number");
	scanf("%d",&item);
	switch (item) {
	case 1:
		printf("Item 1 costs $10");
		break;		
	case 2:
		printf("Item 2 costs $7");
		break;
		
	case 3:
		printf("Item 3 costs $12");
		break;
	default:
		printf("Invalid input! Please try again!");
	}	
	return 0;
}

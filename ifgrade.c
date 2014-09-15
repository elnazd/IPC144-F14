/*If student’s grade is greater than 90, 
	print “A”
else
	If student’s grade is greater than 80, 
		print “B”
	else
		If student’s grade is greater than 70, 
			print “C”
		else
			If student’s grade is greater than 60, 
				print “D”
			else
				print “F”*/
				
#include<stdio.h>
int main()
{
	int grade;
	printf("Please enter your grade:");
	scanf("%d",&grade);
		
	if(grade>90)
		printf("A\n");
	else
		if(grade>80)
			printf("B\n");
		else
			if(grade > 70)
				printf("C\n");
			else
				if(grade > 60)
					printf("D\n");
				else
					printf("F\n");	
	
	return 0;
}


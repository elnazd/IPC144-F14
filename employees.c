/*
This example can also be found here: 
https://scs.senecac.on.ca/~ipc144/pages/practice/string-6.html
Write a program that accepts a set of triples and displays the triples.  
Each triple consists of 
	an employee number
	an employee name 
	a salary. 
Assume there are 10 employees.
Assume that the employee names contain no more than 30 characters with no embedded whitespace.
Assume that the user shall input the data correctly.
*/

#include<stdio.h>
#define SIZE 10
void display(double number[],char names[][31],double salary[]);
int main()
{
	double employee_no[SIZE];
	char employee_name[SIZE][31];
	double employee_salary[SIZE];
	int i;
	
	for(i=0;i<SIZE;i++)
	{
		//prompt the employee to input their number
		printf("Please input your number:");
		scanf("%lf",&employee_no[i]);
		
		
		//prompt the employee to input their name
		printf("Please input your name:");
		scanf("%s",employee_name[i]);//filling the rows
	
		//prompt the employee to input their salary
		printf("Please input your salary:");
		scanf("%lf",&employee_salary[i]);
	}
	
	display(employee_no,employee_name,employee_salary);



}

void display(double number[],char names[][31],double salary[])
{
	int i;

	for(i=0;i<SIZE;i++)
	{
		printf("%05lf\t",number[i]);
		printf("%s\t",names[i]);
		printf("%.2lf\n",salary[i]);
		
		
	}
	
}

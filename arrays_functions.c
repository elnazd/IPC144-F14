/*Write a program to prompt 20 students to enter their grades. 
Save the grades in an array.
Display the grades.
*/

#include<stdio.h>
#define size 5

void display(const float a[]);
void average(const float g[]);
int main()
{


	//Defining an array of float:
	
	float grades[size];
	int i;
	
	//Prompting the students and save their grades:
	for(i=0;i<size;i++)
	{
		printf("Please enter your grades:");
		scanf("%f",&grades[i]);
	}
	
	//Display the grades
	//Call display and pass the address of the array
	//name of the array without brackets holds the address of the array
	printf("Here is the list of grades:\n");
	display(grades);
	
	//Call average and pass the address of the array
	average(grades);
	
}

void display(const float a[]){

	int i;
	for(i=0;i<size;i++)
	{
		printf("%.2f\n",a[i]);
		
	}
}

//Calculate average grade using function
void average(const float g[]){
	float sum=0;
	int i;
	
	for(i=0;i<size;i++)
	{
		sum = sum +g[i];
	}

	printf("The average grade of the students is %.2f", sum/size);

}

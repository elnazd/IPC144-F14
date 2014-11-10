/*There are 20 students in the class.
Each student has three courses. Each course is graded out of 40.
Define a Two-Dimensional Array of type float to represent students’ grades.
What is the size of the array? 
*/

#include<stdio.h>
#define ROW 20
#define COL 3

void display(float a[][COL]);
void display_one_row(float a[]);

int main()
{
	float grades_list[ROW][COL];
	
	//Prompt the students to enter their grades to fill the array.
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("Please enter one grade:");
			scanf("%f",&grades_list[i][j]);
		}
	}
	
	
	display(grades_list);
	display_one_row(grades_list[2]);
	

}

//Display one row of an array in an informative output.
void display_one_row(float a[])
{
	int i;
	for(i=0;i<COL;i++)
		printf("%f ",a[i]);

	printf("\n");

}
//Display the array in an informative output.
void display(float a[][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		printf("Student %d: ",i);
		for(j=0;j<COL;j++)
		{
			printf("%.2f ",a[i][j]);
			
		}
		printf("\n");
	}

}

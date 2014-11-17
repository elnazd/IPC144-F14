/*There are 20 students in the class.
•Each student has three courses. Each course is graded out of 40.
•Define a Two-Dimensional Array of type float to represent students’ grades.
•What is the size of the array?
•Prompt the students to enter their grades to fill the array.
•Display the array in an informative output.
2.
Write a function that receives the matrix of students’ grades and calculates the average grade of each students. Your function prints the average grade of each student in an informative format.*/

#include<stdio.h>
#define ROW 2
#define COL 3
void display(float a[][COL]);
int main()
{
	//Define a Two-Dimensional Array of type float to represent students’ grades.
	float student_marks[ROW][COL];
	int i,j;
	
	//Prompt the students to enter their grades to fill the array.
	for(i=0;i<ROW;i++){
		printf("\n Inputting the grades for student %d:\n\n",i);
		
		for(j=0;j<COL;j++){
			printf("Please input your grade number:");
			scanf("%f",&student_marks[i][j]);
		}
	}
	
	//Display the array in an informative output.
	display(student_marks);

}

void display(float a[][COL])
 {
    int i,j;

    for(i=0;i<ROW;i++){
		printf("\n Printing the grades for student %d:\n\n",i);
		for(j=0;j<COL;j++){
			printf("The grade for student %d is %.2f\n",i,a[i][j]);
		}
	}
        
 }

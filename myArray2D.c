/*Define a Two-Dimensional Array of type int with 3 rows and 4 columns. 
Initialize it with zero.
*/
#include<stdio.h>
#define ROW 3
#define COL 4

int main()
{

	int myArray[ROW][COL];
	int i,j;
	
	for(i=0;i < ROW;i++)
	{
		for(j=0;j<COL;j++)
			myArray[i][j]=0;
	}
	
	
	return 0;

}

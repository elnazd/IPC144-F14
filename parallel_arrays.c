/*Define an array of size four, call it price and initialize it with these values: {12.34, 7.89, 6.56, 9.32}
Print all the elements of the array. 
*/

#include<stdio.h>
#define SIZE 4

void calculate_total(const double a[],const double t[]);
void display(const double a[], const int b[]);
int main()
{

	double price[SIZE]={12.34, 7.89, 6.56, 9.32};
		int sku [SIZE]={ 2156, 4633, 3122, 5611};
	int tax[SIZE]= {0,1,1,0};
	char available[SIZE]={'A','A','A','A'};
	
	display(price,sku);
	calculate_total(price,tax);
	
}

/*A customer buys one of each product.
Calculate the total purchase price, including %13 HST.
*/
void calculate_total(const double a[], const double t[]){
	int i;
	double total=0;
	for(i=0;i<SIZE;i++)
	{
	
		if(t[i] == 0)
			total = total + a[i];
		else
			total = total + 1.13*a[i] ;
		
		//total = total + a[i] + tax[i] * a[i]* 0.13  ;
		
	}
	
	printf("The total amount is:%.2lf",total);

}


void display(const double a[], const int b[]){

	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Item %d is $%.2lf.\n",b[i],a[i]);
		
	}
}

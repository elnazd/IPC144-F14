/*https://scs.senecac.on.ca/~ipc144/pages/handouts/h11.html*/
#include <stdio.h>
#define SIZE 3
void displayList(double p[]);

 int main(void)
 {
    //double price1 = 10.60, price2 = 23.45, price3 = 5.89; 
	double price[SIZE]={10.60,23.45,5.89};
	
    //displayList(price1, price2, price3);
	displayList(price);
    return 0;
 }

 void displayList(double p[]) {

         printf(" Item     Price\n");
         printf("    1%10.2lf\n", p[0]);
         printf("    2%10.2lf\n", p[1]);
         printf("    3%10.2lf\n", p[2]);
         printf("Total%10.2lf\n", p[0]+p[1]+p[2]);
}

#include <stdio.h>

int main ()
{
   int  var = 20;   /* actual variable declaration */
   int  *ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   printf("Value of *ip variable: %d\n", *ip );
   
   *ip = *ip + 1;
   
   printf("Address of var variable: %x\n", &var  );

   printf("Value of var variable: %d\n", var );
  
   printf("Value of *ip variable: %d\n", *ip );
   
   (*ip)++;
   
    printf("Address of var variable: %x\n", &var  );

   printf("Value of var variable: %d\n", var );
  
   printf("Value of *ip variable: %d\n", *ip );
   

   return 0;
}

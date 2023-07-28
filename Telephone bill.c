//program to compute a telephone bill
//rates:
//Rental = 250
//1st 100 calls @Rs. 0.2
//Next 100 calls @ Rs. 0.3 Remaining calls @ Rs. 0.5

#include <stdio.h>

int main() {

  int calls;

  float bill; 

  printf("Enter the number of calls "); 

  scanf("%d",&calls); 

  if(calls==0) 

     printf("The telephone bill is 250 "); 

  else if(calls<=100)

  {

     bill=(250+ (calls*0.2)); 

     printf("The telephone bill is %f",bill);

  }

  else if((calls>100)&&(calls<=200))

  {

     bill=(250+(100*0.2)+((calls-100) *0.3)); 

     printf("The telephone bill is %f",bill);

  }

  else

  {    

     bill=(250+(100*0.2)+((calls-200)*0.5)+

            (100*0.3)); 

     printf("The telephone bill is %f",bill);

  }

  return 0;

}

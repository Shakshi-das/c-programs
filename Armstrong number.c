// program to check armstrong number

#include <stdio.h> 

int main() { 

int n,num,r,ans=0; 
printf("Enter a positive integer: "); 
scanf("%d", &num); 
n=num; 

do 

{ 

r=n%10; 
ans=ans+r*r*r; 
n=n/10; 

}while(n>0); 

if(ans==num) 

{ 
printf("%d is an Armstrong number.",num); 
} 

else 

{ 
printf("%d is not an Armstrong number.",num); 
} 

return 0; 

} 

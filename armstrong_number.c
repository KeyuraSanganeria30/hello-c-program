#include <stdio.h>
int main()
{
  int num,rem,sum = 0 , x;
printf("Enter a number :");
scanf("%d" , &x);
num = x;
while(num > 0)
{
rem = num % 10;
sum = sum + (rem*rem*rem);
num = num/10;
}
if(sum == x)
  printf("It is an armstrong num ");
else
  printf("It is not an armstrong num");
return 0 ;
}

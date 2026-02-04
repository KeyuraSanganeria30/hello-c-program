#include <stdio.h>
int main()
{
  int ch;
  float a,b,result;
  printf("---------MENU---------")
  printf("1. Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division");
  printf("Enter choice: ");
  scanf("%d",&ch);
  printf("Enter first number");
  scanf("%2f",&a);
  printf("Enter second number");
  scanf("%d",&b);
  switch(ch)
    {
      case 1:
      result=a+b;
      break;
      case 2:
      result=a-b;
      break;
      case 3:
      result=a*b;
      break;
      case 4:
      result=a/b;
      break;
      default:
      printf("Wrong input");
    }
  printf("Result is: ",result);
  return 0;
}

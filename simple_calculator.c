#include <stdio.h>
int main()
{
  int ch, x, y, i, fact = 1;
float a, b , p = 1;
printf("1: +  2: -  3: *  4: /  5: x^y  6: x!\n");
scanf("%d" , &ch);
switch (ch) {
case 1:
scanf("%f %f , &a, &b);
  printf("%.2f" , a + b);
break;
case 2:
scanf("%f %f , &a, &b);
  printf("%.2f" , a - b);
break;
case 3:
scanf("%f %f , &a, &b);
  printf("%.2f" , a * b);
break;
case 4:
scanf("%f %f , &a , &b);
  if(b != 0)
  printf("%.2f" , a /b);
else
printf("Error");
break;
case 5:
scanf("%d %d , &x, &y);
  for(i = 1; i <= y ; i++)
  p *= x;
  printf("%.0f" , p);
break;
case 6:
scanf("%d" , &x);
for (i = 1; i <= x; i++)
  fact *= i;
printf("%d" , fact);
break;
default:
printf("Invalid Choice");
}
return 0;
}

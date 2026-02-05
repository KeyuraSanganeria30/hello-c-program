#include <stdio.h>
int main() {
  int a = 10;
printf("Initial value of a = %d \n" ,a);
// Simple assignment
a = 20;
printf("After a = 20, a = %d \n",a);
// Add and assign
a += 5;
printf("After a += 5, a = %d \n",a);
// Subtract and assign
a -= 3;
printf("After a -= 3, a = %d \n",a);
// Multiply and assign
a *= 2;
printf("After a *= 2, a = %d \n",a);
// Divide and assign
a /= 4;
printf("After a /= 4, a = %d \n",a);
// Modulus and assign
a %= 3;
printf("After a %%= 3, a = %d \n" , a);
return 0;
}

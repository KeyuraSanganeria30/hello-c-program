#include <stdio.h>
int main() {
int a, b ;
printf("Enter value of a: ");
scanf("%d" , &a);
printf("Enter value of b: ");
scanf("%d" , &b);
// Logical AND (&&)
if (a > 0 && b > 0) {
printf("Both a and b are positive numbers\n");
}
else {
printf("At least one number is not positive\n");
}
// Logical OR (||)
if (a > 0 || b > 0) {
printf("At least one number is positive\n");
}
else {
printf("Both numbers are negative or zero\n");
}
// Logical NOT (!)
if (!(a > b)) {
printf("a is not greater than b\n");
}
else {
printf("a is greater than b\n");
}
return 0;
}

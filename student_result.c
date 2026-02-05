#include <stdio.h>
int main()
{
  int m1 , m2 , m3 , m4 , m5;
int total;
float aggregate;
// Input marks
printf("Enter marks of 5 subjects:\n");
scanf("%d %d %d %d %d" , &m1 , &m2 , &m3 , &m4 , &m5);
// Check pass or fail
if(m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
{
  printf("Result: Fail\n");
  }
  else
{
  // Calculate total and aggregate
  total = m1 + m2 + m3 + m4 + m5;
  aggregate = (total / 500.0) * 100;
  printf("Result : Pass\n");
  printf("Aggregate = %.2f%%\n", aggregate);
  // Grade calculation
  if(aggregate > 75)
  printf("Grade : Distinction\n");
  else if(aggregate >= 60)
  printf("Grade : First Division\n");
  else if(aggregate >= 50)
  printf("Grade : Second Division\n");
  else
  printf("Grade : Third Division\n");
  }
  Return 0;
  }

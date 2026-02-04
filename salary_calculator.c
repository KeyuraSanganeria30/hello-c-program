#include <stdio.h>
int main()
{
 float basic, hra, ta, gross_salary, professional_tax, net_salary;
printf("Enter Basic Salary: ");
scanf("%f" &basic);
hra = 0.10 * basic;
ta = 0.05 * basic;
gross_salary = basic + hra +ta;
professional_tax = 0.02 * gross_salary;
net_salary = gross_salary - professional_tax;
printf("\nSalary Details\n");
printf("Basic Salary = %.2f\n" , basic);
printf("HRA (10%%) = %.2f\n" , hra);
printf("TA (5%%) = %.2f\n" , ta);
printf("Gross Salary = %.2f\n" , gross_salary);
printf("Professional Tax = %.2f\n" , professional_tax);
printf("Net Salary Payable = %.2f\n" , net_salary);

return 0;
}

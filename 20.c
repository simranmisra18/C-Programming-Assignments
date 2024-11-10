//Using structures for printing payslip
#include<stdio.h>
struct payslip
{
	int idno;
	char name[50];
	char designation[50];
	char department[50];
	int salary;
}employee;
main()
{
	printf("Enter the employee id:");
	scanf("%d",&employee.idno);
	printf("Enter the name:");
	scanf("%s",&employee.name);
	printf("Enter the designation:");
	scanf("%s",&employee.designation);
	printf("Enter the department:");
	scanf("%s",&employee.department);
	printf("Enter the salary:");
	scanf("%d",&employee.salary);
	printf("Id no.: %d",employee.idno);
	printf("\nName: %s",employee.name);
	printf("\nDesignation: %s",employee.designation);
	printf("\nDepartment: %s",employee.department);
	printf("\nSalary: %d",employee.salary);
	
}

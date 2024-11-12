//
#include <stdio.h>
#include <string.h>
//structure to represent an employee
struct employee {
char name[25];//emplyee's name maximum 24 characters
 int id;//id number
 char department[20];//department maximum 19 characters
 float salary;//employee's salary 
   char email[50];};//email mmaximum 49 characters
int main() {//initiaizing given data
struct employee emp = {"John Doe", 12345, "Human Resources", 55000.50, "john.doe@company.com"};
printf("Name: %s\n", emp.name);
 printf("ID: %d\n", emp.id);
 printf("Department: %s\n", emp.department);
printf("Salary: %.2f\n", emp.salary);
  printf("Email: %s\n", emp.email);
 return 0;
}

/*
PURITY THUO
CT101/G/23800/24
*/

#include<stdio.h>
#include<string.h>

struct Employee {
	char name[25],depertment[20],email[50];
	int id;
	float salary;
};

int main(){
	struct Employee employee;
	strcpy(employee.name,"John Doe");
	strcpy(employee.depertment,"Human Resource");
	strcpy(employee.id,"12345");
	strcpy(employee.email,"john.doe@company.com");
	employee.salary= 55000.50;
	
	printf("name: %s\n",employee.name);
	printf("depertment: %s\n",employee.depertment);
		printf("id: %d\n",employee.id);
		printf("email: %s\n",employee.email);
			printf("salary: %f\n",employee.salary);	
	
	return 0;
}
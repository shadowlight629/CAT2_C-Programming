/*
PURITY THUO
CT101/G/23800/24
*/
#include<stdio.h>
int main(){
	float hours_worked, hourly_wage,gross_pay,net_pay;
	float regular_pay, overtime_hours, overtime_pay,taxes;
	
	printf("enter hours worked in a week");
	scanf("%f",&hours_worked);
	printf("enter hourly wage");
	scanf("%d",&hourly_wage);
	
	if(hours_worked<=40){
		gross_pay=hours_worked * hourly_wage;
	}
	else{
		
		 regular_pay=40*hourly_wage;
		 overtime_hours=hours_worked -40;
		 overtime_pay=overtime_hours*(hourly_wage*1.5);
		gross_pay=regular_pay + overtime_pay;
	}
	if(gross_pay<=600){
		taxes=gross_pay* 0.15;
	}
		else{taxes=(600*0.15)+((gross_pay-600)*0.2);
	}
	net_pay=gross_pay - taxes;
	
	printf("gross pay: $%f\n",gross_pay);
	printf("taxes: $%f\n",taxes);
	printf("net pay: $%f\n",net_pay);
	
	return 0;
}
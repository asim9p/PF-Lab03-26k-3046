#include<stdio.h>
int main(){
	int temperature, pressure;
	
	printf("Enter the machine temperature\n");
	scanf("%d", &temperature);
	printf("Enter the machine pressure\n");
	scanf("%d`", &pressure);
	
	if (temperature > 100 || pressure > 250)
	printf("Shuting Down the machine\n");
	else if (temperature >= 85 && temperature <100 && pressure > 200 && pressure < 250)
	printf("Warning Mode\n");
	else 
	printf("Safe To Go\n");
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

























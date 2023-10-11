// CONVERT CELSIUS TO FARENHEIT


#include <stdio.h>

float convertTemp(float celsius);

int main(){
	printf("Farenheit: %f", convertTemp(45));
	return 0;
}

float convertTemp(float celsius){
	int far = celsius*(9/5) + 32;
	return far;
}

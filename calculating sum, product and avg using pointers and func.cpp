// PRINTING SUM, PRODUCT AND AVERAGE OF TWO NUMBERS USING POINTERS AND FUNCTIONS. 

#include<stdio.h>
void DoWork(int a, int b, int *sum, int *prod, int *avg);
int main(){
	int a = 5;
	int b = 10;
	int sum, prod, avg;
	DoWork(a,b,&sum, &prod, &avg);
	printf("Avg: %d\n", avg);
	printf("Sum: %d\n", sum);
	printf("Prod: %d\n", prod);
}

void DoWork(int a, int b, int *sum, int *prod, int *avg){
	*sum = a+b;
	*prod = a*b;
	*avg = (a+b)/2;
}

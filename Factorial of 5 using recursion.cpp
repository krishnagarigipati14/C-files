// FACTORIAL OF N

#include<stdio.h>

int Factorial(int n);
int main(){
	printf("The factorial is: %d", Factorial(5));
	return 0;
}

int Factorial(int n){
	
	if (n==1){
		return 1; // VERY IMPORTANT IN ANY RECURSION
	}
	int Fm1 = Factorial(n-1);
	int factorial = n*Fm1;
	return factorial;
}

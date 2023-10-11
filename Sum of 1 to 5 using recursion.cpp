// PRINTING SUM OF 1 TO 5 USING RECURSION

#include<stdio.h>
int Sum(int n);
int main(){
	printf("The sum is: %d", Sum(5));
	return 0;
}

int Sum(int n){
	if(n==1){
		return 1;
	}
	int sumNm1 = Sum(n-1);
	int sumN = n+Sum(n-1);
	return sumN;
}

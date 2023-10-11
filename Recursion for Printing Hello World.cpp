// USING RECURSION TO PRINT HELLO WORLD

#include<stdio.h>
void PrintHW(int count);
int main(){
	PrintHW(5);
	return 0;
}

void PrintHW(int count){
	if(count==0){
		return; // THIS IS CALLED THE BASE CASE.
	}
	printf("Hello World\n");
	PrintHW(count-1);
}

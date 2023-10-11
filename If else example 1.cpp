// IF ELSE STATEMENTS EXAMPLE 1

#include<stdio.h>

int main(){
	printf("Enter your age: ");
	int a;
	scanf("%d", &a);
	
	if(a>18){
		printf("You are an adult");
		
	}
	
	else if(a<18 && a>13){
		printf("You are a teenager");
	}
	
	else{
		printf("You are not an adult");
	}
	
	return 0;
}

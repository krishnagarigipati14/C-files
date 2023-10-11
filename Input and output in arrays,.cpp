// INPUT AND OUTPUT OF ARRAYS, EG: ENTERING MARKS IN ARRAYS

#include<stdio.h>

int main(){
	
	int marks[2];
	
	printf("Enter phy marks: ");
	scanf("%d", &marks[0]);
	
	printf("Enter chem marks: ");
	scanf("%d", &marks[1]);
	
	printf("Phy marks: %d, Chem Marks: %d", marks[0], marks[1]);
	
	return 0;
}

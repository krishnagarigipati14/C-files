// USING POINTER ARTHEMETIC IN ARRAYS

#include<iostream>

int main(){
	int age = 22; 
	int*ptr = &age;
	printf("%u\n", ptr);
	ptr++;
	printf("%u\n", ptr);
	
	return 0;
}

#include <stdio.h>

void PrintNumbers();
void HelloWorld();
int main() {
    PrintNumbers();
    HelloWorld();
    return 0;
    
}

void PrintNumbers() {
    int numbers[] = {93, 94, 95, 96};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    for (int i = 0; i < size; i++) {
        printf("Number %d = %d\n", i + 1, numbers[i]);
    }
}

void HelloWorld(){
	printf("Hello World\n");

}


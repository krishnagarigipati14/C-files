#include <stdio.h>

int main() {
    int marks[] = {95, 96, 97, 98, 99, 100};
    int *ptr = &marks[0];

    for (int i = 0; i < 6; i++) { // Corrected the loop limit from 6 to 5 (since there are 6 elements in the array, but the index runs from 0 to 5).
        printf("%d ", *ptr); // Added * before ptr to print the value at the memory location pointed by ptr.
        ptr++; // Move the pointer to the next element in the array.
    }

    return 0;
}


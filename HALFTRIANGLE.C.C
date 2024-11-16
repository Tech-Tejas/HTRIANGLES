#include <stdio.h>

void printHalfTriangle(int n) {
    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Loop for printing asterisks in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // After each row, move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    
    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Call the function to print the half triangle
    printHalfTriangle(n);

    return 0;
}

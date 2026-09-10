#include <stdio.h>

int main() {
    int a[5];
    int i; // Declared the loop variable

    // Loop to take 5 integers from the user
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]); // Added missing semicolon
    }

    // Loop to print the 5 integers
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]); // Added space for readability
    }

    return 0;
}


#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

void timePass(int a, int b) {
    add(a, b); // Call Add function
    sub(a, b); // Call Sub function
}

int main() {
    int result1 = add(3, 5); // Example usage of Add function
    printf("Add result: %d\n", result1);

    int result2 = sub(7, 2); // Example usage of Sub function
    printf("Sub result: %d\n", result2);

    timePass(10, 3); // Example usage of TimePass function

    return 0;
}

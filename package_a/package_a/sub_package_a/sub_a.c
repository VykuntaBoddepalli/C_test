#include <stdio.h>
#include <stdlib.h>

int main() {
    char expression[100];
    double result;

    printf("Enter expression: ");
    scanf("%s", expression);

    // Evaluating expression
    result = eval(expression);

    // Displaying result
    printf("The result is: %f\n", result);

    return 0;
}

double eval(const char* expression) {
    double result;

    // Using system to evaluate expression
    if (system(expression) == -1) {
        printf("Error evaluating expression\n");
        exit(1);
    }

    // Opening result file
    FILE *file = fopen("result.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Reading result from file
    fscanf(file, "%lf", &result);

    // Closing file
    fclose(file);

    // Removing result file
    remove("result.txt");

    return result;
}

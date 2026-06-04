#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() { 
    char input[100]; 
    double num1, num2; 
    char operator; 
    printf("Simple C Interpreter (type 'exit' to quit)\n"); 
    while (1) { 
        printf(">> "); 
        fgets(input, sizeof(input), stdin);  // Read input 
        // Exit condition 
        if (strncmp(input, "exit", 4) == 0) { 
            break; 
        } 
        // Parse input: e.g., 5 + 3 
        if (sscanf(input, "%lf %c %lf", &num1, &operator, &num2) == 3) { 
            switch (operator) { 
                case '+': 
                    printf("= %.2lf\n", num1 + num2); 
                    break; 
                case '-': 
                    printf("= %.2lf\n", num1 - num2); 
                    break; 
                case '*': 
                    printf("= %.2lf\n", num1 * num2); 
                    break; 
                case '/': 
                    if (num2 != 0) 
                        printf("= %.2lf\n", num1 / num2); 
                    else 
                        printf("Error: Division by zero!\n"); 
                    break; 
                default: 
                    printf("Invalid operator. Use +, -, *, /\n"); 
            } 
        } else { 
            printf("Invalid input. Format: number operator number (e.g., 4 * 5)\n"); 
        } 
    } 
    printf("Interpreter exited.\n"); 
    return 0; 
}
/*
Welcome to the Basic Calculator Developer Preview

Date of Birth:
	14 May 2023 11.10 AM IST

Story of Creation:
	Here you can edit the code as you want || you can correct my mistakes and improve this code on GitHub
	<<<<<<<<<<<<<<<<<<<<<<<< This complete code is made by Sombit Pramanik && maintained by the GitHub Programmers || Contributors >>>>>>>>>>>>>>>>>>>>>>>>>>>
	Thanks for contributing and improving this program.
	Happy Contribution :)

About:
	This is not the best calculator, but this calculator is made for showing the power and the beauty of modular programming approach.
	In this program, the user can easily give two floating-point numbers and what type of calculation he/she wants to do.
	We use a while loop for continuous operation && simple if-else statements for conditional operation and also to keep it beginner-friendly.
	For more info read the code :)
Re-Compilation :
	write on your ternminal (cc*) calculator.c -o calculator.out -lm [(*for other compiler see the compiler refarence)]
*/
#include <stdio.h>
#include <math.h>

// Declaration of all user-defined functions
void add(float, float);
void subtract(float, float);
void multiply(float, float);
void divide(float, float);
void power(float, float);
void square_root(float);

// Main body of the program
int main(){

    char op;
    float a, b;
    int continue_calculating = 1;

    while (continue_calculating == 1) {
        printf("Welcome to the Calculator made in C by Sombit Pramanik\nEnter A : ");
        scanf("%f", &a);
        printf("Enter B : ");
        scanf("%f", &b);
        printf("Calculator supports the following operations: (+, -, *, /, ^, For Square root use : s)\nType 'q' to quit the program\nWhat operation do you want to perform : ");
        scanf(" %c", &op);

        if (op == 'q' || op == 'Q') {
            printf("Exiting program...\n");
            break;
        }
        else if (op == '+') {
            add(a, b);
        }
        else if (op == '-') {
            subtract(a, b);
        }
        else if (op == '*') {
            multiply(a, b);
        }
        else if (op == '/') {
            divide(a, b);
        }
        else if (op == '^') {
            power(a, b);
        }
        else if (op == 's' || op == 'S') {
            square_root(a);
	    square_root(b);
        }
        else {
            printf("Invalid input: '%c'. Please enter a valid operator.\n", op);
        }

        // Ask if the user wants to calculate more
        char choice;
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y') {
            continue_calculating = 1;
        }
        else {
            continue_calculating = 0;
            printf("Exiting program...\n");
        }
    }

    return 0;
}

// Definition of all user-defined functions
void add(float a, float b) {
    float result = a + b;
    printf("The sum of %.2f and %.2f is: %.2f\n", a, b, result);
}

void subtract(float a, float b) {
    float result = a - b;
    printf("The difference between %.2f and %.2f is: %.2f\n", a, b, result);
}

void multiply(float a, float b) {
    float result = a * b;
    printf("The product of %.2f and %.2f is: %.2f\n", a, b, result);
}

void divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
    } else {
        float result = a / b;
        printf("The quotient of %.2f divided by %.2f is: %.2f\n", a, b, result);
    }
}

void power(float a, float b) {
    float result = pow(a, b);
    printf("%.2f raised to the power of %.2f is: %.2f\n", a, b, result);
}

void square_root(float a) {
    if (a < 0) {
        printf("Error: Square root of a negative number.\n");
    } else {
        float result = sqrt(a);
        printf("The square root of %.2f is: %.2f\n", a, result);
    }
}
// End of the program

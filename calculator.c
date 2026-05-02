#include <stdio.h>

double addCalc(double a, double b) {
    return a+b;
}

double subCalc(double a, double b) {
    return a - b;
}

double mulCalc(double a, double b) {
    return a * b;
}

double divCalc(double a, double b) {
    return a / b;
}

int main() {
    int pilihan;
    double number1, number2;
    double result;
    
    printf("=== KALKULATOR ===\n");
    printf("1. Addition (a+b)\n");
    printf("2. Subtraction (a-b)\n");
    printf("3. Multiplication (axb)\n");
    printf("4. Division (a/b)\n");
    printf("Choose which function to use: ");
    scanf("%d", &pilihan);

    printf("Choose the first number: ");
    scanf("%lf", &number1);
    printf("Choose the second number: ");
    scanf("%lf", &number2);

    printf("\n");
    switch (pilihan) {
        case 1: 
            result = addCalc(number1, number2);
            break;
        case 2:
            result = subCalc(number1, number2);
            break;
        case 3:
            result = mulCalc(number1, number2);
            break;
        case 4:
            result = divCalc(number1, number2);
            break;
        default:
            printf("Please insert a valid choice!\n");
            return 0;
    }

 	printf("Result : %.2lf", result);
    return 0;
}

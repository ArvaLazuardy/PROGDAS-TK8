#include <stdio.h>

double addCalc() {

}

double subCalc() {

}

double mulCalc() {

}

double divCalc() {

}

int main() {
    int pilihan;
    double number1, number2;
    
    printf("=== KALKULATOR ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose which function to use: ");
    scanf("%d", &pilihan);

    printf("Choose the first number: ");
    scanf("%lf", &number1);
    printf("Choose the second number: ");
    scanf("%lf", &number2);

    printf("\n");
    switch (pilihan) {
        case 1: 
        
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:

            break;
        default:
            printf("Please insert a valid choice!\n");
            break;
    }

    return 0;
}

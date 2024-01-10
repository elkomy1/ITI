

#include "include/multiply.h"
#include "include/substract.h"
#include "include/division.h"
#include "include/add.h"
#include <stdio.h>



int main(){
int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", sub(num1, num2));
    printf("Product: %d\n", mult(num1, num2));

    if (num2 != 0) {
        printf("Quotient: %d\n", divide(num1, num2));
    } else {
        printf("Quotient: Undefined (division by zero).\n");
    }

    return 0;
}


#include <stdio.h>

int isEqual(int a, int b) {
    return (a ^ b) == 0;
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (isEqual(num1, num2)) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}

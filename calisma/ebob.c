#include <stdio.h>

int findGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    printf("ebob=%d",num1);
}

int main() {
    int num1, num2;

    printf("Iki sayi girin: ");
    scanf("%d %d", &num1, &num2);

    findGCD(num1, num2);

    return 0;
}

#include <stdio.h>

int findMax(int num1, int num2) {
    int max;

    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    return max;
}


int main() {
    int a = 10;
    int b = 20;
    int result = findMax(a, b);
    printf("The maximum number is: %d\n", result);

    return 0;
}

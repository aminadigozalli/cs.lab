#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the length of the first stick: ");
    scanf("%lf", &a);

    printf("Enter the length of the second stick: ");
    scanf("%lf", &b);

    printf("Enter the length of the third stick: ");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Yes, the sticks can form a triangle.\n");
    } else {
        printf("No, the sticks cannot form a triangle.\n");
    }

    return 0;
}

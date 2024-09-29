#include <stdio.h>


int main() {
    int num, digit1, digit2, digit3;
    int largest, smallest;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    num = abs(num);

    digit1 = num / 100;         
    digit2 = (num / 10) % 10;   
    digit3 = num % 10;          

    largest = smallest = digit1;

    if (digit2 > largest) {
        largest = digit2;
    }
    if (digit3 > largest) {
        largest = digit3;
    }


    if (digit2 < smallest) {
        smallest = digit2;
    }
    if (digit3 < smallest) {
        smallest = digit3;
    }

    printf("Largest digit: %d\n", largest);
    printf("Smallest digit: %d\n", smallest);

    return 0;
}

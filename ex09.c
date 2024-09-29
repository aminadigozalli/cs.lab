#include <stdio.h>

int main() {
    
    int number, digit1, digit2, digit3;
    int product1, product2, product3, product4, max_product;

    
    printf("Enter a three-digit integer: ");
    scanf("%d", &number);

    
    number = abs(number);

    
    digit1 = number / 100;         
    digit2 = (number / 10) % 10;   
    digit3 = number % 10;          

    
    product1 = digit1 * digit2 * digit3;  
    product2 = digit1 * digit2;           
    product3 = digit2 * digit3;           
    product4 = digit1 * digit3;           
   
    max_product = product1;              
    if (product2 > max_product) max_product = product2;
    if (product3 > max_product) max_product = product3;
    if (product4 > max_product) max_product = product4;

    printf("The maximum product is: %d\n", max_product);

    return 0;
}

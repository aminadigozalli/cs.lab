#include <stdio.h>

int main() {
   
    double width, length, height, radius;

    
    printf("Enter the width of the box: ");
    scanf("%lf", &width);
    
    printf("Enter the length of the box: ");
    scanf("%lf", &length);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &height);
    
    
    printf("Enter the radius of the basketball: ");
    scanf("%lf", &radius);
    
    
    double diameter = 2 * radius;

   
    if (diameter <= width && diameter <= length && diameter <= height) {
        printf("The basketball fits in the box.\n");
    } else {
        printf("The basketball does not fit in the box.\n");
    }

    return 0;
}

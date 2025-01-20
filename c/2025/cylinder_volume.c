#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main(void)
{
    float radius , height ;

    printf("Radius of the cylinder: ") ;
    scanf("%f" , &radius) ;
    printf("Height of the cylinder: ") ;
    scanf("%f" , &height) ;

    // calculations
    float area = PI * pow(radius , 2) ;
    float volume = area * height ;

    printf("The cylinder with a height of %.2f and radius of %.2f\n" , height , radius) ;
    printf("has a base area of %.2f and a volume of %.2f\n" , area , volume) ;

    return 0 ;
}

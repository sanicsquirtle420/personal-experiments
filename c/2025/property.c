#include <stdio.h>

float calcAsmt(float prop_val) ;
float calcTax(float act_val) ;

int main(void)
{
    float actual_value ;
    printf("Enter the actual value of your property: $") ;
    // not using "%.2f" would turn an int into a float so it can 
    // be used and not just return 0
    scanf("%f" , &actual_value) ;
    
    float assess_value = calcAsmt(actual_value) ;
    float tax = calcTax(assess_value) ;

    printf("\nAssessment value of the property: $%.2f\n" , assess_value) ;
    printf("Property Tax: $%.2f\n" , tax) ;
}

float calcAsmt(float prop_val)
{
    return prop_val * 0.6 ;
}

float calcTax(float act_val)
{
    return 0.72 * (act_val / 100) ;
}

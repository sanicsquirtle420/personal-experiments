#include <stdio.h>

int main(void)
{
    int target ;
    int nums[] = {20 , 500 , 10 , 5 , 100 , 1 , 50} ;

    printf("What number are you looking for? ") ;
    scanf("%d" , &target) ;

    /** Linear Search: O(n) */
    for(int i = 0 ; i < 7 ; i++)
    {
        if(nums[i] == target)
        {
            printf("Found at index %d\n" , i) ;
            return 0 ;
        }
    }
    printf("Not found in the array.\n") ;
    return 1 ;
}
#include "T112_HW02_0.h"

int main()
{
    int num;
    int result;

    printf("Please input an integer: ");
    scanf("%d", &num);
    
    result = most_frequent_digit(num);
    printf("The most frequent digit is: %d\n", result);
    
 
    return 0;
}


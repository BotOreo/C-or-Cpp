#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("1 opr 2 ");
    // Two integers entered by user is stored using scanf() function
    scanf("%d %d", &firstNumber, &secondNumber);
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    // Displays sum      
    printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);
    return 0;
}

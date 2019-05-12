#include <stdio.h>
#include<math.h>
void countDigit(double number)
{
    int beforeDecimal = 0, afterDecimal = 0;

    // if we cast the double number into an integer then, we will get the integer portion
    // 12314 = (int)12314.343
    int copyNumber = number;

    // keep checking if the last digit is 0,
    // if zero then the loop will not execute
    while(copyNumber)
    {
        beforeDecimal++;
        copyNumber /= 10;
    }
    double x = number;
    while(x != ceil(x)){
        x *=10;
        afterDecimal++;
    }

    printf("Before Decimal: %d\n", beforeDecimal);
    printf("After Decimal: %d\n", afterDecimal);
}

int main()
{
    double number;

    scanf("%lf", &number);

    countDigit(number);

    return 0;
}
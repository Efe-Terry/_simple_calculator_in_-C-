#include <stdio.h>
/**/
#define operations 4

/*
* Documentation Coming Soon...
*
*/

/*Operations functions..*/
float addition(float number1, float number2)
{
    return(number1 + number2);
}

float subtraction(float number1, float number2)
{
    return(number1 - number2);
}

float multiplication(float number1, float number2)
{
    return(number1 * number2);
}

float division(float number1, float number2)
{
    return(number1 / number2);
}

int main(void)
{
    /**/
    float (*ptr_function[operations]) (float, float) = {addition, subtraction, multiplication, division};
    /**/
    int user_input;
    /**/
    float user_input1, user_input2;

    /**/
    printf(">>>>>>>>>>WELCOME<<<<<<<<<<\n");
    printf("Enter what arithmetic operation you want to perform: \n 0 addition: \n 1 subtraction: \n 2 multiplication: \n 3 division:\n");
    /**/
    scanf("%d", &user_input);

    /*Check if user enters anything else or random*/
    /*if (user_input )*/

    /**/
    printf("Enter your values: \n");
    scanf("%f %f", &user_input1, &user_input2);

    /**/
    printf("Answer: %.2f", ptr_function[user_input](user_input1, user_input2));

    return 0;
}

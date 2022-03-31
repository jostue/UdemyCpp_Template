#include <iostream>

double add(double num1, double num2);

int main()
{
    double number1 = 10.0;
    double number2 = 2.0;
    double result;

    result = number1 * number2;
    std::cout << "Number1 * Number2 = " << result << std::endl;

    result = add(number1, number2);
    std::cout << "number1 + number2 = " << result << std::endl;

    return 0;
}

double mult(double num1, double num2)
{
    return num1 * num2;
}

double div(double num1, double num2)
{
    return num1 / num2;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double sub(double num1, double num2)
{
    return num1 - num2;
}

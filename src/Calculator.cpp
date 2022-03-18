#include <iostream>

int getUserInput() 
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

char getOperation() 
{
    std::cout << "Enter an operator: ";
    char operation{};
    std::cin >> operation;

    return operation;
}

int calculateResult(int leftInput, char operation, int rightInput)
{
    int result{ 0 };
    switch (operation) {
        case '+':
            result = leftInput + rightInput;
            break;
        case '-':
            result = leftInput - rightInput;
            break;
        case '*':
            result = leftInput * rightInput;
            break;
        case '/':
            result = leftInput / rightInput;
            break;
    }

    return result;
}

void printResult(int result)
{
    std::cout << "Result: " << result;
}

int main()
{
    int leftInput = getUserInput();

    char operation = getOperation();

    int rightInput = getUserInput();

    int result = calculateResult(leftInput, operation, rightInput);

    printResult(result);

    return 0;
}

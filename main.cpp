#include <iostream>
#include <cmath>

using namespace std;


void calculator (float number1, float number2, char operation);

int main()
{
    system("chcp 65001");
    float number1 = 0;
    float number2 = 0;
    char operation = 'b';
    char answer='a';
    while (answer != 'n')
        {
        cout << "введите первое число: ";
        cin >> number1;
        cout << "введите операцию(+,-,*,/): ";
        cin >> operation;
        cout << "введите второе число: ";
        cin >> number2;
        calculator(number1, number2, operation);
        cout << "Продолжить?(y/n)  ";
        cin >> answer;
    }
        return 0;
}


void calculator(float number1, float number2, char operation)
{
        switch (operation)
        {
            case '+':
                cout << "сумма равна: " << number1 + number2 << endl;
                break;
            case '-':
                cout << "разность равна: " << number1 - number2 << endl;
                break;
            case '*':
                cout << "произведение равно: " << number1 * number2 << endl;
                break;
            case '/':
                cout << "частное равно: " << number1 / number2 << endl;
                break;
            default:
                cout << "неверное действие, повторите попытку...\n";
        }
}


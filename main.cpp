#include <iostream>
#include <cmath>
#include <windows.h>
#include <locale>
#include <string>
#include <iomanip>


using namespace std;

void calculator(float number1, float number2, char operation)
{
    cout << number1 << setw(2) <<  operation << setw(2) << number2 << endl;
    if (operation == '+')
    {
        cout << number1 + number2;
    } else if (operation == '-')
    {
        cout << number1 - number2;
    } else if (operation == '*')
    {
        cout << number1 * number2;
    } else if (operation == '/')
    {
        cout << number1 / number2;
    }


}


int main() {
    system("chcp 65001");
    calculator(1, 2, '+');
//    float gallons;
//    float feet;
//    cout << "введите число галлонов: ";
//    cin >> gallons;
//    cout << "Количество кубических футов равно: " << feet << endl;



    return 0;
}





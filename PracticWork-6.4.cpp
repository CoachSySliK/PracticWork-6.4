#include <iostream>

using namespace std;

//тут я вижу два способа. для того, что бы посчитать левую тройку чисел. 
//можно изначальное число развернуть 1234567 -> 7654321 и от него отщипывать последние 3 цифры для суммы
//можно от изначального числа отщипывать последние 3 цифры
//сделаю оба варианта.

int main()
{
    int number1; //eсли номер билета больше 2 млрд то надо увеличить размер переменной до __int64
    number:
    cout << "Введите номер билета: ";
    cin >> number1;
    if (number1 < 0) {
        cout << "Введите НЕ отрицательное значение!";
        goto number;
    }

    int number2 = number1;
    
    int sum1 = 0;
    int sum2 = 0;

    int i = 0;

    while (number1 != 0) {
        if (i < 3) {
            sum1 += number1 % 10;
        }
        number1 /= 10;
        i++;
    }

    //cout << sum1 << endl;
    //cout << i << endl;


    while (number2 != 0) {
        if (i < 4) {
            sum2 += number2 % 10;
        }
        number2 /= 10;
        i--;
    }

    //cout << sum2 << endl;
    //cout << i << endl;

    if (sum1 == sum2) {
        cout << "Счастливый билетик!\n";
    }
    else {
        cout << "Повезёт в другой раз!\n";
    }

    cout << endl << "Попробуем ещё раз?" << endl;

    number1 = 0;
    cout << "Введите номер билета: ";
    cin >> number1;
    number2 = 0;

    sum1 = 0;
    sum2 = 0;

    i = 0;

    while (number1 != 0) {
        if (i < 3) {
            sum1 += number1 % 10;
        }
        number2 = number2 * 10 + number1 % 10;
        number1 /= 10;
        i++;
    }

    //cout << sum1 << endl;
    //cout << number2 << endl;
    i = 0;

    while (number2 != 0) {
        if (i < 3) {
            sum2 += number2 % 10;
        }        
        number2 /= 10;
        i++;
    }

    //cout << sum2 << endl;
    //cout << i << endl;

    if (sum1 == sum2) {
        cout << "Счастливый билетик!\n";
    }
    else {
        cout << "Повезёт в другой раз!\n";
    }

    return 0;
}

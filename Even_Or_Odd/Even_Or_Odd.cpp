#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    int num;

    cout << "Введите число: ";
    cin >> num;

    string number = (num % 2 == 0) ? "Ваше число четное." : "Ваше число нечетное.";
    cout << number << "\n";
}
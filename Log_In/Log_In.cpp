#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    string login;
    string password;

    cout << "Введите логин: ";
    cin >> login;

    cout << "Введите пароль: ";
    cin >> password;

    if (login == "Admin" && password == "admin") {
        system("cls");
        system("color 2F");
        cout << "Welcome!\n";
    }
}
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int sec, min, hours;
    cout << "Введите секунды: \n";
    cin >> sec;

    min = sec / 60;
    sec = sec % 60;
    hours = min / 60;
    min = min % 60;

    cout << hours << ":" << min << ":" << sec;

    return 0;
}


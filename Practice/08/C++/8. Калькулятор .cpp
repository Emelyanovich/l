#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    double A, B;
    char act;

    cout << "������� �������������� �������� ����� ������ : ";
    cin >> A >> act >> B;

    if (act == '+')
        cout << A + B;
    else if (act == '-')
        cout << A - B;
    else if (act == '*')
        cout << A * B;
    else if (act == '/')
        cout << A / B;
    else
        cout << "�������������� ��������" << endl;
    return 0;
}
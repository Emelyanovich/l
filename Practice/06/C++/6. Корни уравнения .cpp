#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    double a, b, c, d;
    cout << "������� ����� a: ";
    cin >> a;
    cout << "������� ����� b: ";
    cin >> b;
    cout << "������� ����� c: ";
    cin >> c;

    d = b * b - 4 * a * c;

    if (a == 0)
        cout << "���� ������: " << -c / b << endl;
    else if (d > 0) {
        cout << "������ ������: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "������ ������: " << (-b - sqrt(d)) / (2 * a) << endl;
    }
    else if (d == 0)
        cout << "���� ������: " << -b / (2 * a) << endl;
    else
        cout << "��������� �� ����� ������" << endl;

    return 0;
}
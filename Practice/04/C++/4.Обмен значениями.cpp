#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A, B, temp;
    cout << "������� ������ ����� (�): ";
    cin >> A;
    cout << "������� ������ ����� (B): ";
    cin >> B;

    temp = A;
    A = B;
    B = temp;
    cout << "������ ����� � �������������� ���������� (A, B): " << A << " " << B << endl;

    A ^= B ^= A ^= B;
    cout << "������ ����� ��� �������������� ���������� (A, B): " << A << " " << B << endl;

    return 0;
}
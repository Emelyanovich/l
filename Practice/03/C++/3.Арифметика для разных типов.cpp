#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

    int A1, B1;
    double A2, B2;

    cout << "������� ������ ����� ���� int (�): ";
    cin >> A1;
    cout << "������� ������ ����� ���� int (B): ";
    cin >> B1;
    cout << "��������� ��������� A+B :" << A1 + B1 << endl;
    cout << "��������� ��������� A-B :" << A1 - B1 << endl;
    cout << "��������� ��������� A*B :" << A1 * B1 << endl;
    if (B1 != 0)
        cout << "��������� ��������� A/B :" << A1 / B1 << endl;
    else
        cout << "������: ������� ������� �� ����" << endl;
    cout << endl;

    cout << "������� ������ ����� ���� double (�): ";
    cin >> A2;
    cout << "������� ������ ����� ���� double (B): ";
    cin >> B2;
    cout << "��������� ��������� A+B :" << A2 + B2 << endl;
    cout << "��������� ��������� A-B :" << A2 - B2 << endl;
    cout << "��������� ��������� A*B :" << A2 * B2 << endl;
    if (B2 != 0)
        cout << "��������� ��������� A/B :" << A2 / B2 << endl;
    else
        cout << "������: ������� ������� �� ����" << endl;
    cout << endl;

    cout << "������� ������ ����� ���� int (�): ";
    cin >> A1;
    cout << "������� ������ ����� ���� double (B): ";
    cin >> B2;
    cout << "��������� ��������� A+B :" << A1 + B2 << endl;
    cout << "��������� ��������� A-B :" << A1 - B2 << endl;
    cout << "��������� ��������� A*B :" << A1 * B2 << endl;
    if (B2 != 0)
        cout << "��������� ��������� A/B :" << A1 / B2 << endl;
    else
        cout << "������: ������� ������� �� ����" << endl;
    cout << endl;

    cout << "������� ������ ����� ���� double (�): ";
    cin >> A2;
    cout << "������� ������ ����� ���� int (B): ";
    cin >> B1;
    cout << "��������� ��������� A+B :" << A2 + B1 << endl;
    cout << "��������� ��������� A-B :" << A2 - B1 << endl;
    cout << "��������� ��������� A*B :" << A2 * B1 << endl;
    if (B1 != 0)
        cout << "��������� ��������� A/B :" << A2 / B1 << endl;
    else
        cout << "������: ������� ������� �� ����" << endl;
    return 0;
}
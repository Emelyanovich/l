#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    double a, b, c, AB, BC, AC, xA, yA, xB, yB, xC, yC, P, S;
    int form;

    cout << "�������� ������ ����� ���������� ������������:" << endl;
    cout << "1. ����� ������" << endl;
    cout << "2. ���������� ������" << endl;

    
    cin >> form;
    if (form == 1) {
        cout << "������� ������� a: "; cin >> a;
        cout << "������� ������� b: "; cin >> b;
        cout << "������� ������� c: "; cin >> c;
        if (a > b + c || b > a + c || c > a + b)
            cout << "������������ � ������� ������� ������ �� ����������" << endl;
        else {
            P = (a + b + c) / 2;
            S = sqrt(P * (P - a) * (P - b) * (P - c));
            cout << "S = " << S;
        }

    }
        if (form == 2) {
        cout << "������� ������� A ����� ������: "; cin >> xA >> yA;
        cout << "������� ������� B ����� ������: "; cin >> xB >> yB;
        cout << "������� ������� C ����� ������: "; cin >> xC >> yC;
        AB = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
        BC = sqrt(pow((xC - xA), 2) + pow((yC - yA), 2));
        AC = sqrt(pow((xB - xC), 2) + pow((yB - yC), 2));
        if (AB > BC + AC || BC > AB + AC || AC > AB + BC)
            cout << "������������ � ������� ������� ������ �� ����������" << endl;
        else {
            P = (AB + BC + AC)/2;
            S = sqrt(P * (P - AB) * (P - BC) * (P - AC));
            cout << "S = " << S;
        }
        
        }
}
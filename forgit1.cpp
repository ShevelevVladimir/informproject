#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    setlocale(0, "");
    double a, b;
    cout << "���������� ����� � �������:)" << endl;
    cout << "������: 5^2" << endl;
    cout << "������� �����: " << endl;
    cin >> a;
    cout << "������� �������: " << endl;
    cin >> b;
    cout << "��� ����� = " << pow(a,b) << endl;
 
    return 0;
}


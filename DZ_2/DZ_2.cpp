#include <iostream>
using namespace std;

int main()
{
    //1
    double first, second, third;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Enter third number: ";
    cin >> third;
    double result1 = (first+second+third) / 3;
    cout << "Result = " << result1 << "\n\n";

    //2
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    double x = -1 * b / a;
    cout << "x = " << x << "\n\n";

    //3
    int num, power;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> power;
    int res = pow(num, power);
    cout << "Result = " << res << "\n\n";
    
    //4
    const double pi = 3.14;
    double r, s, c;
    cout << "Enter R: ";
    cin >> r;
    s = pow(r, 2) * pi;
    c = 2 * pi * r;
    cout << "S = " << s << "\n" << "C = " << c << "\n\n";
    
    //5
    double grn, dollar, euro, bitcoin;
    cout << "Emter grn: ";
    cin >> grn;
    dollar = grn * 0.027;
    euro = grn * 0.025;
    bitcoin = grn * 0.000001;
    cout << "Dollar = " << dollar << "\n";
    cout << "Euro = " << euro << "\n";
    cout << "Bitcoin = " << bitcoin << "\n\n";
    
    //6
    double km, mil, smil;
    cout << "Enter km: ";
    cin >> km;
    mil = km * 0.621271;
    smil = km * 0.539957;
    cout << "miles = " << mil << "\n" << "nautival miles = " << smil << "\n\n";
    
    //7
    double p;
    cout << "Enter percent: ";
    cin >> p;
    double n, res_n;
    cout << "Enter number: ";
    cin >> n;
    res_n = n * (p / 100);
    cout << "Result = " << res_n << "\n\n";
    
    //8
    double cel, f, k, rum, d;
    cout << "Enter C: ";
    cin >> cel;
    f = (cel * (9 / 5)) + 32;
    k = cel + 273.15;
    rum = cel * 0.8;
    d = 150 - 1.5 * cel;
    cout << "F = " << f << "\n";
    cout << "K = " << k << "\n";
    cout << "R = " << rum << "\n";
    cout << "D = " << d << "\n\n";
    
    //9
    int a1, b1;
    cout << "Enter a: ";
    cin >> a1;
    cout << "Enter b: ";
    cin >> b1;
    int c1 = a1;
    a1 = b1;
    b1 = c1;
    cout << "New a = " << a1 << "\n";
    cout << "New b = " << b1 << "\n";
    swap(a1, b1);
    cout << "a = " << a1 << "\n";
    cout << "b = " << b1 << "\n\n";

}


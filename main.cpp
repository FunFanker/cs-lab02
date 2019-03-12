#include <iostream>

using namespace std;

int main()
{float minim;
    cout << "Enter A and B: ";
double a, b;
float maxim;
cin >> a >> b;

maxim=a;

minim=a;

cout << "A - B = " << a - b << '\n';
cout << "A + B = " << a + b << '\n';
cout << "A * B = " << a * b << '\n';
cout << "A / B = " << a / b << '\n';

if (maxim<b)
maxim=b;
cout <<"Maximym = "<< maxim;
if (minim>b)
    minim=b;
cout << "Minimym = "<<minim;
}

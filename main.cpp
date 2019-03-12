#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b;
float maxim;
cin >> a >> b;
maxim=a;
cout << "A - B = " << a - b << '\n';
cout << "A + B = " << a + b << '\n';
cout << "A * B = " << a * b << '\n';
cout << "A / B = " << a / b << '\n';
if (maxim<b)
maxim=b;
cout <<"Maximym = "<< maxim;
}

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    signed int casos;
    float x;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> x;
        x *= 0.01;
        if (x < 1){cout << "1\n";}
        else {cout << setprecision(1) << x << endl;}
    }
}
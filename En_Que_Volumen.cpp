#include <iostream>
#include <iomanip>
#include <math.h>

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
        x = floor(x);
        cout << x << '\n';
    }
}
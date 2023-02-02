#include <iostream>

int max_km;
int fuel;
int num;

using namespace std;

int main()
{
    cin >> max_km;
    fuel = max_km;
    
    while (1)
    {
        cin >> num;
        
        if (num == 0)
        {
            break;
        }

        if (fuel - num < 0)
        {
            cout << "1";
            fuel = max_km;
        }
        else
        {
            cout << "0";
            fuel = fuel -num;
        }
    }
    
    return 0;
}
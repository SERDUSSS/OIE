#include <iostream>

using namespace std;
int main()
{
    int chicos;
    int chicas;
    int pares;
    cin >> chicos;
    cin >> chicas;
    cin >> pares;
    int total_pares, a, b;
    for (int i = 0; i < pares; i++)
    {
        cin >> a;
        cin >> b;
        if (a == chicos or b == chicas) total_pares++;

    }
    cout << total_pares << '\n' << ;
    return 0;
}
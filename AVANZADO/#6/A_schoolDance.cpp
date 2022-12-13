#include <iostream>
#include <string>

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
    string output;
    for (int i = 0; i < pares; i++)
    {
        cin >> a;
        cin >> b;
        if (a == chicos or b == chicas) {total_pares++; output += to_string(a) + ' ' + to_string(b) + '\n';}

    }
    cout << total_pares << '\n' << output;
    return 0;
}
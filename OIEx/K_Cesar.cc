#include <iostream>
#include <string>

using namespace std;

string letras_mayuscula = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string letras = "abcdefghijklmnopqrstuvwxyz";
int casos_num;
int clave;
string problema;

int main()
{
    cin >> casos_num;

    for (int i = 0; i < casos_num; i++)
    {
        cin >> clave;
        cin >> problema;

        for (int e = 0; e < problema.length(); e++)
        {
            if (isupper(problema[e]))
            {
                problema[e] = 0;
            }
        }
    }

    return 0;
}
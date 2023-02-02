#include <iostream>
#include <string>

using namespace std;
int main()
{
    int letras;
    string entrada;
    string s = " ";
    cin >> letras;
    cin >> entrada;
    std::string token = entrada.substr(0, entrada.find(s));
    entrada.erase(0, entrada.find(s) + s.length());
    cout << token << endl << entrada;
}
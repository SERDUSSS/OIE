#include <cstring>
#include <iostream>

using namespace std;
int main()
{
    string input;
    string output = "";
    for (int i = 0; i < 2; i++)
    {
        cin >> input;
        output = "";
        for (int i = 0; i < input.length(); i++) 
        {
            if (input[i] != '.')
            {
                if (input[i+1] == '.' and input[i+2] == '.')
                {
                    output += input[i];
                }
            }
        }
        cout << output << '\n';
    }
    return 0;
}
#include <iostream>
#include <string>

std::string output;

int input;

using namespace std;

std::string MultiplyString(int32_t n, string Str)
{
    std::string res = "";
    for (int i = 0; i < n; ++i)
    {
        res += Str;
    }
    return res;
}

int main()
{
    cin >> input;

    if (input == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    for (int e = 0; e < input; e++)
    {

        output += MultiplyString(e, " ");

        for (int i = 1+e; i < input+1; i++)
        {
            output += to_string(i);
        }

        for (int i = input; i > e; i--)
        {
            if (i == input){continue;}
            output += to_string(i);
        }
        if (e != input-1){output += "\n";}
        if (e == input-1){continue;}
    }

    for (int e = input; e > 0; e--)
    {
        
        if (e != input-1){output += MultiplyString(e, " ");}

        for (int i = 1+e; i < input+1; i++)
        {
            if (i == input && e == input-1){continue;}
            output += to_string(i);
        }

        for (int i = input; i > e; i--)
        {
            if (i == input){continue;}
            output += to_string(i);
        }


        if (e == input-1){continue;}
        output += "\n";

    }

    for (int i = 1; i < input+1; i++)
    {
        output += to_string(i);
    }

    for (int i = input; i > 0; i--)
    {
        if (i == input){continue;}
        output += to_string(i);
    }

    cout << output << "\n";
    return 0;
}
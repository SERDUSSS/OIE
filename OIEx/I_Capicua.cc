#include <iostream>
#include <string>

std::string output;
int n;

using namespace std;

bool Is_Capicua(int num)
{
    int reverse=0, rem;
    int copy_num = *&num;
    while(num!=0)
    {    
        rem=num%10;
        reverse=reverse*10+rem;
        num/=10;
    }
    if (copy_num == reverse){return true;}
    return false;
}

int main()
{
    while (1)
    {
        cin >> n;
        if (n == 0){break;}
        if (Is_Capicua(n)){output += "S\n"; continue;}
        output += "N\n";
    }


    cout << output;
    return 0;
}
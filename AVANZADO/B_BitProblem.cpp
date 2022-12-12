#include <iostream>

using namespace std;
int main()
{
    int iteraciones;
    cin >> iteraciones;
    int case1;
    int case2;
    int case3;
    int arr[iteraciones];
    int num;
    for (int i = 0; i < iteraciones; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < iteraciones; i++) // por cada numero
    {
        num = 0;
        case1 = 0;
        case2 = 0;
        case3 = 0;
        for (int e = 0; e < iteraciones; e++) // por cada numero 2
        {
            num = arr[e];
            if ((arr[i] | num) == arr[i]){case1++;}
            if ((arr[i] & num) == arr[i]){case2++;}
            if ((arr[i] & num) != 0){case3++;}
        }
        cout << case1 << " " << case2 << " " << case3 << "\n";
    }
}
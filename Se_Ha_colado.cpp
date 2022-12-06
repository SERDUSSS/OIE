#include <iostream>

int iteraciones;
int clientes;
int x;
int y;
int clientes_exp = 0;

int main()
{
    std::cin >> iteraciones;

    for (int i = 0; i < iteraciones; i++)
    {
        x = 0;
        std::cin >> clientes;
        int clientes_exp = 0;

        for (int i = 0; i < clientes; i++)
        {
            y = x;
            std::cin >> x;
            if (x > y){continue;}
            clientes_exp++;
        }
        std::cout << clientes_exp << '\n';
    }
}
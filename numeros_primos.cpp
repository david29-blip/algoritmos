#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la cantidad de numeros primos: ";
    cin >> n;

    int contador = 0;
    int numero = 2;
    bool primo;

    while (contador < n)
    {
        primo = true;

        for (int i = 2; i * i <= numero; i++)
        {
            if (numero % i == 0)
            {
                primo = false;
                break;
            }
        }

        if (primo)
        {
            cout << numero << " ";
            contador++;
        }

        numero++;
    }

    return 0;
}

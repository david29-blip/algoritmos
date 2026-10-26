#include <iostream>
using namespace std;

int main() {
    int a, b, xd;
    int contador;
    int aux, dig, dig2, dx, contador2;
    
    long candidatos = 0; 

    do {
        cout << "Ingrese la cantidad de valores: ";
        cin >> a;
    } while (a < 1);

    cout << "Ingrese el valor 1: ";
    cin >> b;

    xd = (b < 0) ? -b : b; 
    if (b == 0) candidatos = 1; 
    
    while (xd > 0) {
        dig = xd % 10;
        int temp = candidatos;
        bool ya_esta = false;
        while(temp > 0) {
            if(temp % 10 == dig) ya_esta = true;
            temp /= 10;
        }
        if(!ya_esta) {
            candidatos = candidatos * 10 + dig;
        }
        xd /= 10;
    }

    for (int i = 1; i < a; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> b;
        
        long nuevos_candidatos = 0;
        int temp_candidatos = candidatos;

        while (temp_candidatos > 0 or (temp_candidatos == 0 and candidatos == 1)) {
            dig = temp_candidatos % 10;
            
            aux = (b < 0) ? -b : b;
            bool encontrado = false;
            if (aux == 0 and dig == 0) encontrado = true;
            while (aux > 0) {
                if (aux % 10 == dig) {
                    encontrado = true;
                    break;
                }
                aux /= 10;
            }

            if (encontrado) {
                nuevos_candidatos = nuevos_candidatos * 10 + dig;
            }

            if (temp_candidatos == 0) break; 
            temp_candidatos /= 10;
        }
        candidatos = nuevos_candidatos;
    }

    cout << "Digitos comunes: ";
    if (candidatos == 0 and a > 0) {
    }
    
    while(candidatos > 0) {
        cout << candidatos % 10 << " ";
        candidatos /= 10;
    }
    cout << endl;

    return 0;
}

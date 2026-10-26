#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
char op;

double funcion(double x){
    switch(op){
        case '1':
            return pow(x,2) - 10;
        case '2':
            return cos(x) - x;
        case '3':
            return pow(x,3) - 6*pow(x,2) + 11*x - 6;
        case '4':
            return pow(x - 2, 2);
        case '5':
            return exp(-x) - x;
        case '6':
            return log(x + 1) - 0.5*x;
        default:
            return 0;
    }
}

double derivada(double x){
    double h = 0.0001;
    return (funcion(x + h) - funcion(x)) / h;
}

void intervalo(double &x1, double &x2){
    double a,paso;

    a = 0;
    paso = 0.5;

    do{
        x1 = a;
        x2 = a + paso;
        a = a + paso;
    }while(funcion(x1) * funcion(x2) > 0);
}

double newton(){
    double sol,sol2;
    int inter;
    inter = 0;
    sol2 = 0;

    do{

        sol = sol2;

        sol2 = sol - (funcion(sol)/derivada(sol));

        inter++;

    }while(sol != sol2);

    cout << "Iteraciones: " << inter << endl;
    cout << "La respuesta de x por el metodo de Newton-Raphson es: ";

    return sol2;
}

double biseccion(){
    double x1,x2,xm,error,errorp;
    int inter;
    inter = 0;
    errorp = 0.000001;

    intervalo(x1, x2);

    do{
        xm = (x1 + x2) / 2;

        if(funcion(x1) * funcion(xm) > 0){
            x1 = xm;
        }else{
            x2 = xm;
        }

        error = fabs(x2 - x1);

        inter++;

    }while(error > errorp);

    cout << "Iteraciones: " << inter << endl;
    cout << "La respuesta de x por el metodo de biseccion es: ";

    return xm;
}

double secante(){

    double x0,x1,x2,errorp,error;
    int inter;
    inter = 0;
    errorp = 0.000001;

    intervalo(x0,x1);

    do{
        x2 = x1 - (funcion(x1)*(x1 - x0)) / (funcion(x1) - funcion(x0));

        error = fabs(x2 - x1);

        x0 = x1;
        x1 = x2;

        inter++;

    }while(error > errorp);

    cout << "Iteraciones: " << inter << endl;
    cout << "La respuesta de x por el metodo de la secante es: ";

    return x2;
}

void medirTiempo(double (*metodo)()){
    auto inicio = chrono::high_resolution_clock::now();

    double resultado = metodo();

    auto fin = chrono::high_resolution_clock::now();

    chrono::duration<double> t = fin - inicio;
    cout << resultado << endl;
    cout << "Tiempo: " << t.count() << " s" << endl;
}


int main(){

    char opcion;

    cout << "===== SELECCIONE ECUACION =====" << endl;
    cout << "1. x^2 - 10" << endl;
    cout << "2. cos(x) - x" << endl;
    cout << "3. x^3 - 6x^2 + 11x - 6" << endl;
    cout << "4. (x - 2)^2" << endl;
    cout << "5. e^{-x} - x" << endl;
    cout << "6. ln(x+1) - 0.5x" << endl;
    cout << "Seleccione: ";
    cin >> op;
    while(op < '1' or op > '6'){
        cout << "Seleccione ecuacion (1-6): ";
        cin >> op;

        if(op < '1' or op > '6'){
            cout << "Valor no valido, intente otra vez.\n";
        }
    }


    do{

        cout << endl << "===== MENU =====" << endl;
        cout << "1. Metodo de Newton-Raphson" << endl;
        cout << "2. Metodo de Biseccion" << endl;
        cout << "3. Metodo de la Secante" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion){
        case '1':
            medirTiempo(newton);
            break;
        case '2':
            medirTiempo(biseccion);
            break;
        case '3':
            medirTiempo(secante);
            break;
        case '4':
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida";
        }

    }while(opcion != '4');

}




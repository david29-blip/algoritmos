#include <iostream>
#include <cmath>
using namespace std;

    
    double xd(double x){
        return pow(x,2) -10;
    }
    
    double deri(double x){
        double h = 0.0001;
        return (xd(x + h) - xd(x)) / h;
    }
    
int main(){
    double x,sol,sol2;
    
    x = 3.1623;
    
    sol = xd(x);
    sol2 = deri(x);

    cout << sol << endl;
    cout << sol2;

}



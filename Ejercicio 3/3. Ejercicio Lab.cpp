#include <iostream>
using namespace std;

int main(){
    int Sf,Comision, venta_Auto, Bono, sueldoT;
    Sf = 5000;
    Comision = 700;
    cout<<"Por favor ingrese la cantidad de Autos vendidos: ";
    cin>>venta_Auto;
    Bono = venta_Auto*Comision;
    sueldoT = Sf+Bono;
    cout<<"Su Sueldo Total el: "<<sueldoT;

 return 0;
}

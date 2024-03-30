#include <iostream>
using namespace std;

int main(){
    int totalA, aCompra, p_Ocupados, rul3, P_libre;
    cout<< "ingrese la cantidad Total de asientos: ";
    cin>>totalA;
    cout<<"Ingrese la cantidad de asientos comprados: ";
    cin>>aCompra;
    p_Ocupados = (aCompra*100)/totalA;
    rul3 = totalA-aCompra;
    P_libre = (rul3*100)/totalA;
    cout<< "el porcentaje de asientos ocupados es: "<<p_Ocupados<<"%"<<endl;
    cout<< "el porcentaje de asientos libres es: "<<P_libre<<"%";


 return 0;
}

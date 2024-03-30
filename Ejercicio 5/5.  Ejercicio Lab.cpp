#include <iostream>
using namespace std;

int main(){
    float A,F,J,total;
    float Ag, Fa, Jo;
    cout<<"ingrese el numero de ventas de A: ";
    cin>>A;
    cout<<"ingrese el numero de ventas de F: ";
    cin>>F;
    cout<<"ingrese el numero de ventas de J: ";
    cin>>J;
    total = A+F+J;
    Ag = (A*100)/total;
    Fa = (F*100)/total;
    Jo = (J*100)/total;

    cout<<"El Valor de ventas de Aguila es: "<<Ag<<"%"<<endl;

    cout<<"El Valor de ventas de Fantoche es: "<<Fa<<"%"<<endl;

    cout<<"El Valor de ventas de Jorgito es: "<<Jo<<"%"<<endl;



 return 0;
}

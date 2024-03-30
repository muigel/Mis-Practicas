#include <iostream>
using namespace std;

int main(){
    float Amount, Discount, tDisc, pTotal;
    cout<<"Por favor ingrese el importe: " ;
    cin>>Amount;
    cout<<"Por favor ingrese el descuento a aplicar(sin el porcentaje): ";
    cin>>Discount;
    tDisc = (Discount/100)*Amount;
    pTotal = Amount-tDisc;
    cout<<"El Pago total con descuento aplicado es: "<< pTotal<<"$";


 return 0;
}
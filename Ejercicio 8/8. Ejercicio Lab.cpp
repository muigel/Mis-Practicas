#include <iostream>
using namespace std;

int main(){

float t_Amount, d_Amount, Discount, DT;
cout<<"Por favor ingrese el Importe total: ";
cin>>t_Amount;
cout<<"Por favor ingrese el Importe con Descuento: ";
cin>>d_Amount;
Discount = t_Amount-d_Amount;
DT = (Discount*100)/t_Amount;
cout<<"El descuento total es de un: "<<DT<<"%";


    return 0;
}
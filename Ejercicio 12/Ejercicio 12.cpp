#include <iostream>
using namespace std;

main(){
    
    int t_Eggs, all, extra;
    int PagoC, PagoE, PagoT;

    cout<<"Por favor ingrese la cantidad de Huevos Comprados: ";
    cin>>t_Eggs;
    extra = t_Eggs%12;
    all = (t_Eggs-extra)/12;
    cout<<"Su compra es de: "<<all<<" Cajas de Huevo y "<<extra<<" Huevos sueltos"<<endl;

    PagoC = all*1000;
    PagoE = extra*120;
    PagoT = PagoC+PagoE;

    cout<<"El Importe total a pagar sera de: "<<PagoT<<"$";
     






    return 0;
}
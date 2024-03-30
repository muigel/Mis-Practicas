#include <iostream>
using namespace std;

main(){

int Hours, Rest, Dt;

cout<<"Por Favor, Ingrese la cantidad de Horas que a convertir: ";
cin>>Hours;
Rest = Hours%24;
Dt = (Hours-Rest)/24;

cout<<"Sus Horas equivales a: "<<Dt<<" Dias y "<<Rest<<" Horas";

    return 0;
}
#include <iostream>
using namespace std;

int main(){

int Minuts, Hours, Rest;

cout<<"Por favor, Ingrese la cantidad de minutos a convertir: ";
cin>>Minuts;

Rest = Minuts%60;
Hours = (Minuts-Rest)/60;

cout<<"Sus minutos equivalen a: "<<Hours<<" Horas y "<< Rest<<" Minutos";


    return 0;
}
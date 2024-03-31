#include <iostream>
using namespace std;

int main(){

int t_Minut, Rest, t_hour, d_Rest, Days;

cout<< "Por favor, ingrese la cantidad de Minutos a convertir: ";
cin>>t_Minut;
Rest = t_Minut%60;
t_hour = (t_Minut-Rest)/60;
d_Rest = t_hour%24;
Days = (t_hour-d_Rest)/24;

cout<<"Sus minutos equivalen a: "<<Days<<" Dia(s) "<< d_Rest<<" Hora(s) y "<<Rest<<" Minuto(s)";

    return 0;
}
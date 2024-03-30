#include <iostream>
using namespace std;

int main(){
    float sem1, sem2, sem3,sem4,total;
    float promed, p1, p2, p3, p4;

    cout<< "ingrese lo recuadado para la semana 1:";
    cin>>sem1;
    cout<< "ingrese lo recuadado para la semana 2:";
    cin>>sem2;
    cout<< "ingrese lo recuadado para la semana 3:";
    cin>>sem3;
    cout<< "ingrese lo recuadado para la semana 4:";
    cin>>sem4;

    total = sem1+sem2+sem3+sem4;
    promed = total/4;
    p1 = (sem1*100)/total;
    p2 = (sem2*100)/total;
    p3 = (sem3*100)/total;
    p4 = (sem4*100)/total;

    cout<<"El Promedio semanal es de: "<<promed<<endl;
    cout<<"El Porcentaje de la semana 1 es del: "<<p1<<"%"<<endl;
    cout<<"El Porcentaje de la semana 2 es del: "<<p2<<"%"<<endl;
    cout<<"El Porcentaje de la semana 3 es del: "<<p3<<"%"<<endl;
    cout<<"El Porcentaje de la semana 4 es del: "<<p4<<"%"<<endl;
 return 0;
}

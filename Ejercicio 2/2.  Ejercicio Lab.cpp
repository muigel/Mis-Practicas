#include <iostream>
using namespace std;

int main(){
    int A, B, X;
    cout<<"ingrese valor A: ";
    cin>>A;
    cout<<"ingrese valor B: ";
    cin>>B;
    X = A;
    A = B;
    B = X;
    cout<<"El Valor de A es: "<<A<<endl;
    cout<<"El Valor de B es: "<<B;

 return 0;
}

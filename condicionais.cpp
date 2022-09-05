#include <iostream>
#include <string>
using namespace std;
    
int main(){
    int x= 10;

    cout<< "O valor é igual a 10: "<<(x==10)<<endl;
    cout<< "O valor é maior que 10: "<<(x>10)<<endl;
    cout<< "O valor é menor que 10: "<<(x<10)<<endl;
    cout<< "O valor é maior ou igual a 10: "<<(x>=10)<<endl;
    cout<< "O valor é menor ou igual a 10: "<<(x<=10)<<endl;
    cout<< "O valor é diferente de 10: "<<(x!=10)<<endl;

    bool boole1 = (x>10) ? true:false;
    bool boole2 = (x<10) ? true:false;
    bool boole3 = (x==10) ? true:false;
    bool boole4 = (x!=10) ? true:false;
    cout << boole1<< endl;
    cout << boole2<< endl;
    cout << boole3<< endl;
    cout << boole4<< endl;

    string resultado1 = (x>10) ? "Verdadeiro":"Falso";
    string resultado2 = (x<10) ? "Verdadeiro":"Falso";
    string resultado3 = (x==10) ? "Verdadeiro":"Falso";
    string resultado4 = (x!=10) ? "Verdadeiro":"Falso";

    cout << resultado1<< endl;
    cout << resultado2<< endl;
    cout << resultado3<< endl;
    cout << resultado4<< endl;

    return 0;
    }
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 10;

    cout << "O valor é igual a 10: " << (x == 10) << endl;
    cout << "O valor é maior que 10: " << (x > 10) << endl;
    cout << "O valor é menor que 10: " << (x < 10) << endl;
    cout << "O valor é maior ou igual a 10: " << (x >= 10) << endl;
    cout << "O valor é menor ou igual a 10: " << (x <= 10) << endl;
    cout << "O valor é diferente de 10: " << (x != 10) << endl;

    bool boole1 = (x > 10) ? true : false;
    bool boole2 = (x < 10) ? true : false;
    bool boole3 = (x == 10) ? true : false;
    bool boole4 = (x != 10) ? true : false;
    bool boole5 = (x >= 10) ? true : false;
    bool boole6 = (x <= 10) ? true : false;

    cout << boole1 << endl;
    cout << boole2 << endl;
    cout << boole3 << endl;
    cout << boole4 << endl;
    cout << boole5 << endl;
    cout << boole6 << endl;

    string resultado1 = (x > 10) ? "banana" : "jaca";
    string resultado2 = (x < 10) ? "banana" : "jaca";
    string resultado3 = (x == 10) ? "banana" : "jaca";
    string resultado4 = (x != 10) ? "banana" : "jaca";
    string resultado5 = (x >= 10) ? "banana" : "jaca";
    string resultado6 = (x <= 10) ? "banana" : "jaca";
    string resultado7 = (x <= 10) ? ((x == 10) ? "Japeri" : "Niteroi") : "jaca";

    cout << resultado1 << endl;
    cout << resultado2 << endl;
    cout << resultado3 << endl;
    cout << resultado4 << endl;
    cout << resultado5 << endl;
    cout << resultado6 << endl;
    cout << resultado7 << endl;

    cout << "V e V: " << (true && true) << endl;
    cout << "V e F: " << (true && false) << endl;
    cout << "F e V: " << (false && true) << endl;
    cout << "F e F: " << (false && false) << endl;

    cout << "V ou V: " << (true || true) << endl;
    cout << "V ou F: " << (true || false) << endl;
    cout << "F ou V: " << (false || true) << endl;
    cout << "F ou F: " << (false || false) << endl;

    cout << "não V: " << (!true) << endl;
    cout << "não F: " << (!false) << endl;

    cout << "não V ou V: " << !(true || true) << endl;
    cout << "não V ou F: " << !(true || false) << endl;
    cout << "não F ou V: " << !(false || true) << endl;
    cout << "não F ou F: " << !(false || false) << endl;

    cout << "x é menor que 11 e menor que 30? " << ((x < 11) && (x < 30)) << endl;
    cout << "x é menor que 11 ou menor que 30? " << (x < 11 || x < 30) << endl;
    cout << "x é maior que 11 e menor que 30? " << (x > 11 && x < 30) << endl;
    cout << "x é maior que 11 ou menor que 30? " << (x > 11 || x < 30) << endl;

    if (x > 10)
    {
        cout << "Executou";
    }
    else if (x == 10)
    {
        cout << "Executou o Else if" << endl;
    }
    else
    {
        cout << "Executou o Else";
    };
    if (x == 10)
        cout << "uma linha";
    return 0;
}
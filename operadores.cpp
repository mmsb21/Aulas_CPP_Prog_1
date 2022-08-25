#include <iostream>
#include <math.h>  // biblioteca com funções matemáticas. Utilizada para o pow()
#include <iomanip> //biblioteca para estabelecer a precisão

using namespace std;

int main()
{

    cout << setprecision(5); // função da biblioteca iomanip. Tudo que estiver abaixo terá precisão definida aqui.
    // a função setprecision determina a quantidade de digitos. Neste caso, com a precisão em 5,
    // o número 12345.11 seria somente 12345 (5 digitos no total). Já o número 123456.11 seria posto em notação
    // científica 1.2346e+006, matendo os 5 digitos.
    cout << "Sem o fixed: " << 123456.11 << endl;
    cout << fixed << setprecision(5); // c//A palavra-chave fixed faz com que o setprecision somente leve em consideração
    // o tamanho dos números após o ponto. De fata, ele fixa o ponto flutuante ignorando o tamanho dos número inteiros.
    // Assim, o número 123456.11 será 123456.11000 (sendo 5 dígitos apos o ponto fixo.)
    cout << "Com o fixed: " << 123456.11 << endl;

    int x, y;
    x = 4;
    y = 8;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x / y << endl;             // operador mod. Representa o resta de uma divisão.
    cout << "x elevado a y = " << pow(x, y) << endl; // C++ não tem um operador para potenciação. Para isto,
    // utilizamos a biblioteca math.h declarada acima. A função pow recebe dois parâmetro. O primeiro sendo
    // a base (neste caso o x), e o segundo argumento o expoente (neste caso o y);
    cout << "Raíz quadrada de x: " << sqrt(x) << endl; // Função de math.h para raíz quadrada.
    cout << "Raíz cúbica de y: " << cbrt(y) << endl;   // Função de math.h para raíz cúbica.
    // Outras formas de  tirar a raiz é elevando a uma número racional (com divisão).
    //É necessário que o número do expoente seja um float/double.
    cout << "Raíz quadrada de 4:" << pow(4, (1.0 / 2.0)) << endl;
    cout << "Raíz cúbica de 8: " << pow(8, (1.0 / 3.0)) << endl;
    cout << "Raíz quarta de 16:" << pow(16, (1.0 / 4.0)) << endl;

    float z, w;
    z = 2;
    w = 3;
    cout << "z + w = " << z + w << endl;
    cout << "z - w = " << z - w << endl;
    cout << "z * w = " << z * w << endl;
    cout << "z / w = " << z / w << endl;
    /* cout << "z % w = "<<z%w<< endl; gera um erro */
    cout << "z elevado a w = " << pow(z, w) << endl;

    double h, g;
    h = 2;
    g = 3;
    cout << "h + g = " << h + g << endl;
    cout << "h - g = " << h - g << endl;
    cout << "h * g = " << h * g << endl;
    cout << "h / g = " << h / g << endl;
    /*cout << "h % g = "<<h%g<< endl; gera um erro */
    cout << "h elevado a w = " << pow(h, g) << endl;

    return 0;
}

/*Variáveis em c++ são identificadores de um espaço criado na memória ram.
C++ é uma linguagem de tipagem estática, desta forma é necessário definir o
seu tipo no momento da declaração da variável, de modo que um espaço com o
tamanho necessário possa ser criado. Variáveis podem ter seu valor modificado
ao longo do código.
Constantes são outro tipo de identificadores iguais as variáveis mas que só podem ter
o seu valor atribuido no momento da declaração. Elas são "read only", ou seja, somente
para leitura.
*/

#include <iostream>
#include <typeinfo>
#define PI 3.1415 // diretiva do pre-processador define uma constante
// no escopo global. Como padrão utilizamos sempre letras maiúsculas.
// como o nome diz, ela não poderá ser modificada posteriormente.
#define PALAVRA_CONSTANTE "Esta string é constante!"

using namespace std;

int main()
{
    // Para declarar uma variável basta colocar o tipo na frente do nome
    // que deseja para a variável.
    int numero;           // int = interger('inteiro')
    char caracter;        // char = character('caracter')
    float decimal;        // float('ponto flutuante') com precisão simples.
    double decimalDouble; // double('ponto flutuante') com precisão dupla. Duas vezes maior que float.
    bool booleano;        // True ou False ('Verdadeiro ou Falso'). Também representado por 1 como
    // True e 0 como False.

    // Variáveis do mesmo tipo podem ser declaradas sequencialmente.
    int num1, num2, num3;

    // Para atribuir um valor a uma variável utilizamos o operar =
    //  Se a variável já foi declarada, ela não precisa ser declarada outra vez
    // Isto produziria um erro.
    int varAtribuida = 10;
    float PontoFlutuante = 1.2; // em C++ o ponto separa as casas decimais
    char Letra = 'A';           // caracteres devem ter aspas simples.
    num1 = 5;                   // A variável num1 já foi declarada anteriormente. Não precisa mais
    // determinar seu tipo.
    num1 = 10; // Variáveis podem ter seus valores modificados ao longo do código e da
    // execução do programa.

    // IMPORTANTE: Atribuir um tipo de valor diferente do declarado pode produzir resultados
    // inesperados e erro. Portanto é necessário atenção na determinação do tipo da variável
    // e no que ela irá receber.
    Letra = 65; // Ao atribuir um valor inteiro a uma variável char o resultado será um caracter
    // da tabela ASCII.
    cout << Letra;

    num1 = 1.2; // Ao atribuir um float a uma variável do tipo inteiro, ela irá arredondar para o
    // número inteiro. Neste caso o valor de num1 será 1.

    const int X = 10; // Outra maneira de criar uma constante é utilizando o identificar const antes da
    // declaração da variável. Constante só podem ter declarados se atribuirmos um valor a ela no mesmo
    // momento. E assim como as constantes gerados no #define, elas não podem mais ser modificadas.

    // Uma outra forma de declarar variáveis é utilizando a palavra-chave auto. Ela deixa a cargo do
    // compilador a tarefa de determinar qual é o tipo da variável. Assim como as constantes, é necessário
    // atribuir o valor no momento da declaração.
    // IMPORTANTE: a palavra-chave auto não cria uma variável dinâmica, após a atribuição do valor a variável
    // assume aquele tipo ao longo de todo o código e não muda seu tipo.
    auto valorAleatorio1 = 10;
    auto valorAleatorio2 = 'A';
    auto valorAleatorio2 = 1.22222;

    return 0;
}

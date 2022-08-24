#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
// using namespace std; // Espaço padrão de nomes da linguagem.

// O uso do using namespace std;determinaria que todos as funções, tipos etc.
// como cout e endl terão o mesmo "sobrenome". O uso do padrão "namespace::identificador",
// como no exemplo do std::cout, permite determinar individualmente o nampesace de cada um.

//É possível criar o próprio namespace como abaixo:
namespace meu_name_space
{
    int idade;
    std::string nome = "Marcio";
    double altura = 1.70;
    int funcao()
    {
        return 1 + 1;
    };

};
namespace outro_space
{
    int idade = 30;
    std::string nome;
    double altura = 1.69;
};

int main()
{
    // idade = 10; Esta linha dará um erro pois o namespace não foi definido;

    // Da mesma forma que podemos utilizar o std::cout, podemos utilizar nas nossas
    // variáveis, funções etc, o padrão criado por nós como no exemplo abaixo que utiliza
    //   meu_name_space::idade e outro_space::nome.
    cout << "Todas as variáveis de meu_name_space estão em meu_name_space::<variavel>. " << endl;
    meu_name_space::idade = 34;

    cout << meu_name_space::idade << endl;
    cout << meu_name_space::nome << endl;
    cout << meu_name_space::altura << endl;
    cout << meu_name_space::funcao() << endl;

    cout << "Todas as variáveis de outro_space estão em outro_space::<variavel>. " << endl;
    outro_space::nome = "José";
    cout << outro_space::idade << endl;
    cout << outro_space::nome << endl;
    cout << outro_space::altura << endl;

    cout << "Variáveis criadas no escopo da função main podem ter o mesmo nome sem ambiguidade." << endl;
    int idade = 20;
    string nome = "Arthur";
    double altura = 2.20;

    return 0;
}
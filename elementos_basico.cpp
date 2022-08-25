#include <iostream> // iostream =  input/output stream ('fonte de entrada e saída'). A palavra-chave
//#include é uma diretiva que diz ao pré-processador para incluir o conteúdo de um arquivo específico.
// Neste caso ele está incluindo o cabeçalho(header file) da biblioteca padrão iostream que contem elementos
// de entrada e saída como o cin/cout. Desta forma, durante o processo de compilação, o linker pode pegar os códigos
// prontos desta biblioteca e incluir no executável gerado.

using namespace std; // namespace é literalmente um "espaço de nomes" que o c++ possui para desambiguar os
// nome de funções, variáveis,classes, etc. Desta forma, definimos um "sobrenome" para os nomes que utilizamos.
// Neste caso estamos defindo que utilizamos os nomes da biblioteca padrão.

// IMPORTANTE: todo comando em c++ deve ser terminado por ponto e vírgular.

// Toda a execução do programa ocorre dentro da função main. Função é um framento de código que é "chamado" e assim,
// seu código é executado. Neste caso, a função principal é chamada quando o arquivo .exe é iniciado.
int main()
{

    // cout é um objeto da classe ostream que imprime um valor no console. Como ela faz parte da biblioteca padrão
    //  (iostream) e nós incluímos ela no cabeçalho nós podemos invocar ele com o operador << e passarmos uma string
    //  (sequência de caracteres) para que ele imprima na tela o que está entre aspas. Obs: sempre fechando com ponto
    // vírgula.
    cout << "Hello World";

    // Uma função pode retornar ou não valores. Neste caso declaramos que a função retorna um inteiro (int) e esse
    // retorno por padrão é zero. Isso significa que a função main executou sem problemas
    return 0;
}; // As chaves {} são muito importantes pois elas definem o escopo de funções, condicionais e loops.

/* Exemplo0002 -v0.0. - 21/02/2024
Author: 1484339_Luiz_Felipe_Alves_da_Silva
Para compilar em terminal (janela de comandos):
Linux  : gcc -o exemplo0002   exemplo0002.c
Windows: gcc -o exemplo0002   exemplo0002.c

Para executar em terminal (janela de comandos):
Linux  : ./exemplo0002
Windows:   exemplo0002
*/

// dependencias

#include <stdio.h> // biblioteca de entradas e saidas

/* Funcao principal
@return codigo de encerramento
@param argc - quantidade de parametos na linha de comandos
@param argv - arranjo com o grupo de paramentos na linha de comandos
*/

int main (int argc, char* argv[])
{
// definir dados /  resultados
   int opcao = 0;
// identificar

   printf("%s\n", "Exemplo0002 - Programa = v0.0");
   printf("%s\n", "Autor: Luiz Felipe Alves da Silva");
   printf("\n");    // mudar de linha

// acoes
// ler opcao do teclado
   printf ("\n%s", " Opcao = ");
   scanf  ("%d", &opcao );
   getchar();   //para limpar a entrada de dados

// para mostrar a opcao lida
   printf("\n%s%d", " Opcao = ", opcao);
// encerrar

   printf("\n\nApertar ENTER para terminar.");
   getchar();         //aguardar por ENTER
   return ( 0 );      // voltar ao SO (sem erros)
} // end main()

/*
---------------------------------- documentação complementar

---------------------------------- notas / observacoes/ comentario

---------------------------------- previsao de testes

a.) 5
b.)-5
c.) 123456789

---------------------------------- historico

Versao         Data           Modificacao
0.0            21/02            esboco

---------------------------------- testes

Versao     Teste
0.0        01.(ok)           indentificacao do programa
                            leitura e exibicao de inteiro
*/

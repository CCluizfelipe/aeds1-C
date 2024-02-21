/* Exemplo0003 -v0.0. - 21/02/2024
Author: 1484339_Luiz_Felipe_Alves_da_Silva
Para compilar em terminal (janela de comandos):
Linux  : gcc -o exemplo0003   exemplo0003.c
Windows: gcc -o exemplo0003   exemplo0003.c

Para executar em terminal (janela de comandos):
Linux  : ./exemplo0003
Windows:   exemplo0003
*/

// dependencias

#include <stdio.h>  // biblioteca de entradas e saidas
#include <stdlib.h> // biblioteca para funcoes gerais

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

   printf("%s\n", "Exemplo0003 - Programa = v0.0");
   printf("%s\n", "Autor: Luiz Felipe Alves da Silva");
   printf("\n");    // mudar de linha

// acoes

// para mostrar opcpoes
   printf("\n%s\n", "Opcoes:" );
   printf("\n%s"  , "0 - Terminar");

// ler opcao do teclado
   printf ("\n%s", " Opcao = ");
   scanf  ("%d", &opcao );
   getchar();   //para limpar a entrada de dados

// para mostrar a opcao lida
   printf("\n%s%d", " Opcao = ", opcao);

// escolher acao dependente da opcao
   switch (opcao)
   {
    case 0: //nao fazer mada
              break;
    default://comportamento padrao
              printf("\nERRO:Opcao invalida.\n");
              break;
   } //end switch

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
0.2            21/02            esboco
0.3            21/02          mudanca de versao

---------------------------------- testes

Versao     Teste
0.0        01.(OK)          indentificacao do programa
0.1        01.(OK)          indentificacao do programa
0.2        01.(OK)          indentificacao do programa
                            leitura e exibicação de um inteiro
0.3        01.(OK)          indentificacao do programa
                            leitura e exibicação mediante escolha
*/

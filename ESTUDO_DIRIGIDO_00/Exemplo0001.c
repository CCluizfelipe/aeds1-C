/* Exemplo0001 -v0.0. - 21/02/2024
Author: 1484339_Luiz_Felipe_Alves_da_Silva
Para compilar em terminal (janela de comandos):
Linux  : gcc -o exemplo0001   exemplo0001.c
Windows: gcc -o exemplo0001   exemplo0001.c

Para executar em terminal (janela de comandos):
Linux  : ./exemplo0001
Windows:   exemplo0001
*/

// dependencias

#include <stdio.h>  // biblioteca de entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
/* Funcao principal
@return codigo de encerramento
@param argc - quantidade de parametos na linha de comandos
@param argv - arranjo com o grupo de paramentos na linha de comandos
*/

int main (int argc, char* argv[])
{
// definir dados /  resultados

// identificar

   printf("%s\n", "Exemplo0001 - Programa = v0.0");
   printf("%s\n", "Autor: Luiz Felipe Alves da Silva");
   printf("\n");    // mudar de linha

// acoes

// encerrar

   printf("\n\nApertar ENTER para terminar.");
   getchar();         //aguardar por ENTE
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
0.1            21/02          mudanca de versao

---------------------------------- testes

Versao     Teste
0.0        01.(OK)          indentificacao do programa
0.1        01.(OK)          indentificacao do programa
*/

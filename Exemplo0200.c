/*
 Exemplo0200 - v0.0. - 04 / 03 / 2024
 Author: Luiz Felipe Alves da Silva
 Lista de exercicios ed_02

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0200 exemplo0200.c
 Windows: gcc -o exemplo0200 exemplo0200.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0200
 Windows: exemplo0200
*/
#include "io.h"

void method_01 ( void )
{
 int x = 0;

 x = IO_readint ("\nEntrar com um valor inteiro:");

 if ( x == 0 )
 {
     IO_printf("%s(%d)\n", "\nValor igual a zero", x);
 }

 if ( x != 0)
 {
     IO_printf("%s(%d)\n", "\nValor difeente de zero", x);
 }

 IO_id ( "Method_01 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}


void method_02 (void)
{
 int x = 0;

 IO_id("Method_02 - Programa - v0.0");

 x = IO_readint ( "\nEntrar com um valor inteiro: " );

 if (x == 0)
 {
     IO_printf("%s(%d)\n", "\nValor igual a zero",x);
 }
 else
 {
     IO_printf("%s(%d)\n", "\nValor diferente de zero", x);
 }

 IO_pause("Apertar ENTER para continuar");

}


 void method_03 (void)
  {
   int x = 0;

   IO_id("\nMethod_03 - Programa v0.0");

   x = IO_readint("\nEntrar com um valor inteiro:");

   if ( x == 0)
   {
       IO_printf("%s(%d)\n","Valor igual a zero", x);
   }
   else
   {
       IO_printf("%s(%d)\n","Valor diferente de zero", x);

    if (x > 0)
    {
        IO_printf("%s(%d)\n","Valor maior que zero", x);

    }
    else
    {
        IO_printf("%s(%d)\n","Valor menor que zero", x);
    }
    }

     IO_pause("\nApertar ENTER para continuar");
  }


 void method_04 ( void )
{
     double x = 0.0;

     IO_id ("EXEMPLO204 - Proframa - v0.0");

     x = IO_readdouble("Entrar com um valor real : ");

     if ( 1.0 <= x && x <= 10.0)
     {
         IO_printf("%s(%lf)\n", "Valor dentro do intervalo[1:10]", x);

     }
     else
     {
         IO_printf("%s(%lf)\n", "Valor fora do intervalo [1:10]",x);
     }
        if ( x < 1.0)
       {
           IO_printf("%s(%lf)\n", "Valor abaixo do intervalo [1:10]",x);
       }
        else
       {
           IO_printf("%s(%lf)\n", "Valor acima do intervalo [1:10]",x);
       }

       IO_pause ("Apertar ENTER para continuar");
}

void method_05 ( void )
{

 char x = '_';
 IO_id ( "Method_05 - Programa - v0.0" );
 x = IO_readchar ( "Entrar com um caractere: " );

  if ( ('a' <= x) && (x <= 'z') )
 {
   IO_printf ( "%s (%c)\n", "Letra minuscula", x );
 }
  else
 {
   IO_printf ( "%s (%c)\n", "Valor diferente de minuscula", x );

   if ( ('A' <= x) && (x <= 'Z') )
 {
   IO_printf ( "%s (%c)\n", "Letra maiuscula", x );
 }
  else
 {
   if ( ('0' <= x) && (x <= '9') )
 {
   IO_printf ( "%s (%c)\n", "Algarismo", x );
 }
  else
 {
  IO_printf ( "%s (%c)\n", "Valor diferente de algarismo", x );
 }
 }
 }
   IO_pause ( "Apertar ENTER para continuar" );
}

void method_06 ( void )
{
 char x = '_';

 IO_id ( "Method_06 - Programa - v0.0" );

 x = IO_readchar ( "Entrar com um caractere: " );

 if ( ( 'a' <= x && x <= 'z' ) ||  ( 'A' <= x && x <= 'Z' ) )
 {
 IO_printf ( "%s (%c)\n", "Letra", x );
 }
 else
 {
 IO_printf ( "%s (%c)\n", "Valor diferente de letra", x );
 }
 IO_pause ( "Apertar ENTER para continuar" );
}

void method_07 ( void )
{
 char x = '_';
 IO_id ( "Method_07 - Programa - v0.0" );

 x = IO_readchar ( "Entrar com um caractere: " );

 if ( ! ( ( 'a' <= x && x <= 'z' ) || ( 'A' <= x && x <= 'Z' ) ) )
 {
 IO_printf ( "%s (%c)\n", "Valor diferente de letra", x );
 }
 else
 {
 IO_printf ( "%s (%c)\n", "Letra", x );
 }
 IO_pause ( "Apertar ENTER para continuar" );
}

void method_08 ( void )
{
 char x = '_';
 IO_id ( "Method_08 - Programa - v0.0" );

 x = IO_readchar ( "Entrar com um caractere ['0','A','a']: " );

 switch ( x )
 {
 case '0':
 IO_printf ( "%s (%c=%d)\n", "Valor igual do simbolo zero", x, x );
 break;
 case 'A':
 IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra A", x, x );
 break;
 case 'a':
 IO_printf ( "%s (%c=%d)\n", "Valor igual 'a letra a", x, x );
 break;
 default:
 IO_printf ( "%s (%c=%d)\n", "Valor diferente das opcoes ['0','A','a']", x, x );
 }

 IO_pause ( "Apertar ENTER para continuar" );
}

void method_09 ( void )
{

 int x = 0;
 IO_id ( "Method_09 - Programa - v0.0" );
 x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );

 switch ( x )
 {
 case 0:
 IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
 break;
 case 1:
 IO_printf ( "%s (%d)\n", "Valor igual a um ", x );
 break;
 case 2:
 IO_printf ( "%s (%d)\n", "Valor igual a dois", x );
 break;
 case 3:
 IO_printf ( "%s (%d)\n", "Valor igual a tres", x );
 break;
 default:
 IO_printf ( "%s (%d)\n", "Valor diferente das opcoes [0,1,2,3]", x );
 }

 IO_pause ( "Apertar ENTER para continuar" );
}

void method_10 ( void )

{
 int x = 0;
 IO_id ( "Method_09 - Programa - v0.0" );

 x = IO_readint ( "Entrar com um inteiro [0,1,2,3]: " );

 switch ( x )
 {
 case 0:
 IO_println ( IO_concat ( "Valor igual a zero (",
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
 break;
 case 1:
 IO_println ( IO_concat ( "Valor igual a um (",
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
 break;
 case 2:
 IO_println ( IO_concat ( "Valor igual a dois (",
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
 break;
 case 3:
 IO_println ( IO_concat ( "Valor igual a três (",
 IO_concat ( IO_toString_d ( x ), ")\n" ) ) );
 break;
 default:
 IO_println ( IO_concat ( "Valor diferente das opcoes [0,1,2,3] (",
 IO_concat ( IO_toString_d ( x ), ")" ) ) );
 }
 IO_pause ( "Apertar ENTER para continuar" );
}

void method_211 (void)
{
 int inteiro;
  IO_id ( "\nMethod_211 - Programa - v0.0" );
  printf("%s\n","\nDigite um inteiro :");
  scanf("%d", &inteiro);
  getchar();

  inteiro = inteiro % 2;

  if ( inteiro == 0)
{
    printf("%s(%d)\n","O numero e par", inteiro);
}
  else
{
    printf("%s(%d)\n","O numero e impar", inteiro);
}
  IO_id ( "\nMethod_211 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}


void method_212 (void)
{
 int inteiro, resto;
 IO_id ( "\nMethod_212 - Programa - v0.0" );
 printf("%s\n", "\nDigite um inteiro : ");
 scanf("%d", &inteiro);
 getchar();

 resto = inteiro;
 inteiro = inteiro % 2;

  if ( inteiro == 0)
{
    printf("%s(%d)\n", "O numero e par", resto);

     if ( resto > 25){
       printf("%s\n","O numero e maior que 25");
}
}
   else
{
     printf("%s(%d)\n", "O numero e impar", resto);

    if ( resto < -25 )
     {
     printf("%s\n","O numero e menor que -25");

     }
}
 IO_id ( "\nMethod_212 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}


void method_213 (void)
{
 int inteiro = 0;
  IO_id ( "\nMethod_213 - Programa - v0.0" );
  printf("%s\n","\nDigite um numero inteiro : ");
  scanf("%d", &inteiro);
  getchar();

   if ( inteiro >= 35 && inteiro <= 65)
   {
       printf("%s(%d)\n","O numero esta no intervalo [35:65]", inteiro);
   }
   else
   {
       printf("%s(%d)\n","O numero esta fora do intervalo [35:65]", inteiro);
   }
 IO_id ( "\nMethod_213 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}


void method_214 (void)
{
 int inteiro = 0;
  IO_id ( "\nMethod_214 - Programa - v0.0" );
  printf("%s\n","\nDigite um numero inteiro : ");
  scanf("%d", &inteiro);
  getchar();

   if ( inteiro >= 15 && inteiro <= 60)
   {
       printf("%s(%d)\n","O numero esta no intervalo [15:60]", inteiro);
   }
   else
   {
       printf("%s(%d)\n","O numero esta fora do intervalo [15:60]", inteiro);
   }

 IO_id ( "\nMethod_214 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}


void method_215 (void)
{
   int x = 0;
   IO_id ( "\nMethod_215 - Programa - v0.0" );
   x = IO_readint("\nEntrar com um inteiro : ");

   if ( x >= 25 && x <=30 )
{
    IO_printf("%s(%d)\n", "Numero esta em intersecao dos conjuntos  [10:30] e [25:50]", x);
}
  else if ( x >= 10 && x <= 30 )
{
    IO_printf("%s(%d)\n", "Numero esta apenas no intervalo  [10:30]", x);

}
  else if ( x >=25 && x <= 50 )
{
     IO_printf("%s(%d)\n", "Numero esta apenas no intervalo  [25:50]", x);
}
 else if (x < 10 || x > 50 )
 {
     IO_printf("%s(%d)\n", "Numero esta fora dos intervalos  [10:30] e [25:50]", x);

}
 IO_id ( "\nMethod_215 - Programa - v0.0" );
 IO_pause ( "\nApertar ENTER para continuar.\n" );
}

void method_216 (void)
{
  int x = 0, y = 0;
  int auxiliar1, auxiliar2;
  IO_id("\nMethod_216 - Programa - v0.0");
  x = IO_readint("\nEntrar com um inteiro : ");
  y = IO_readint("\nEntrar com um inteiro : ");

 auxiliar1 = x;
 auxiliar2 = y;
 x = x % 2;
 y = y % 2;

   if ( x != 0 && y == 0)
{
    IO_printf("%s(%d %d)\n","O primeiro valor e impar e o segundo valor e par ", auxiliar1, auxiliar2);
}
   else if ( x == 0 && y != 0)
 {
    IO_printf("%s(%d %d)\n","O primeiro valor e par e o segundo valor e impar ",auxiliar1, auxiliar2);

 }
   else if ( x == 0 && y == 0)
 {
    IO_printf("%s(%d %d)\n","O primeiro valor e par e o segundo valor e par ", auxiliar1, auxiliar2);

 }
  else if ( x != 0 && y != 0)
 {
    IO_printf("%s(%d %d)\n","O primeiro valor e impar e o segundo valor e impar ", auxiliar1, auxiliar2);

 }
  IO_id ( "\nMethod_216 - Programa - v0.0" );
  IO_pause ( "\nApertar ENTER para continuar.\n" );
}

void method_217 (void)
{
  int x = 0, y = 0;
  int auxiliar1, auxiliar2;
  IO_id("\nMethod_217 - Programa - v0.0");
  x = IO_readint("\nEntrar com um inteiro : ");
  y = IO_readint("\nEntrar com um inteiro : ");

  auxiliar1 = x;
  auxiliar2 = y;
  x = x % 2;
  y = y % 2;

 if (x == 0 && auxiliar1 < 0 && y != 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e par e negativo, e o segundo valor e impar e positivo", x, auxiliar1, y, auxiliar2);
}
 else if (x != 0 && auxiliar1 < 0 && y == 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e negativo, e o segundo valor e par e positivo", x, auxiliar1, y, auxiliar2);
}
 else if (x == 0 && auxiliar1 > 0 && y == 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e par e positivo, e o segundo valor e par e positivo", x, auxiliar1, y, auxiliar2);
}
 else if (x == 0 && auxiliar1 < 0 && y == 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e par e negativo, e o segundo valor e par e positivo", x, auxiliar1, y, auxiliar2);
}
 else if (x == 0 && auxiliar1 > 0 && y == 0 && auxiliar2 < 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e par e positivo, e o segundo valor e par e negativo", x, auxiliar1, y, auxiliar2);
}
 else if (x == 0 && auxiliar1 < 0 && y == 0 && auxiliar2 < 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e par e negativo, e o segundo valor e par e negativo", x, auxiliar1, y, auxiliar2);
}
 else if (x != 0 && auxiliar1 < 0 && y != 0 && auxiliar2 < 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e negativo, e o segundo valor e impar e negativo", x, auxiliar1, y, auxiliar2);
}
else if (x != 0 && auxiliar1 > 0 && y != 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e positivo, e o segundo valor e impar e postivo", x, auxiliar1, y, auxiliar2);
}
else if (x != 0 && auxiliar1 > 0 && y != 0 && auxiliar2 < 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e positivo, e o segundo valor e impar e negativo", x, auxiliar1, y, auxiliar2);
}
else if (x != 0 && auxiliar1 < 0 && y != 0 && auxiliar2 > 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e negativo, e o segundo valor e impar e postivo", x, auxiliar1, y, auxiliar2);
}
else if (x != 0 && auxiliar1 < 0 && y == 0 && auxiliar2 < 0)
{
     IO_printf("%s(%d %d %d %d)\n","O primeiro valor e impar e negativo, e o segundo valor e par e negativo", x, auxiliar1, y, auxiliar2);
}
  IO_id ( "\nMethod_217 - Programa - v0.0" );
  IO_pause ( "\nApertar ENTER para continuar.\n" );
}
void method_218 (void)
{
  double x, y, z;

  IO_id("\nMethod_218 - Programa - v0.0");
  x = IO_readdouble("\nEntrar com um real : ");
  y = IO_readdouble("\nEntrar com um real : ");
  x = x / 3 ;

  if ( y > x )
{
    IO_printf("%s(%lf %lf)\n", "O segundo numero e maior a 1/3 do primeiro", y,x);
}
  else if ( y < x)
{
    IO_printf("%s(%lf %lf)\n", "O segundo numero e menor a 1/3 do primeiro", y,x);
}
  else if ( y == x )
{
    IO_printf("%s(%lf %lf)\n", "O segundo numero e igual a 1/3 do primeiro", y,x);
}
  IO_id ( "\nMethod_218 - Programa - v0.0" );
  IO_pause ( "\nApertar ENTER para continuar.\n" );
}

void method_219 (void)
{
   double x, y, z;

  IO_id("\nMethod_219 - Programa - v0.0");
  x = IO_readdouble("\nEntrar com um real : ");
  y = IO_readdouble("\nEntrar com um real : ");
  z = IO_readdouble("\nEntrar com um real : ");

   if ( x > y && x < z  && y != z ||  x > z && x < y && y != z)
{
    IO_printf("%s(%lf %lf %lf)\n", "O primeiro numero esta entre os dois ultimos digitados", x, y, z);
}

  else
{
    IO_printf("%s(%lf %lf %lf)\n", "O primeiro numero nao esta entre os dois ultimos digitados", x, y, z);
}
  IO_id ( "\nMethod_219 - Programa - v0.0" );
  IO_pause ( "\nApertar ENTER para continuar.\n" );
}

void method_220 (void)
{

 double x, y, z;

 IO_id("\nMethod_220 - Programa - v0.0");

 x = IO_readdouble("\nEntrar com um real : ");
 y = IO_readdouble("\nEntrar com um real : ");
 z = IO_readdouble("\nEntrar com um real : ");

  if (  x == y || x == z || y == z )
{
   IO_printf("%s(%lf %lf %lf)\n", "Alguma entrada digitada e igual", x, y, z);
}
  else if (  x > y && x < z && x != y && x != z && y != z ||  x > z && x < y && x != y && x != z && y != z )
{
   IO_printf("%s(%lf %lf %lf)\n", "O primeiro numero esta entre os dois ultimos digitados e todos sao difentes", x, y, z);
}
  else
{
   IO_printf("%s(%lf %lf %lf)\n", "O primeiro numero nao esta entre os dois ultimos digitados e todos sao diferentes", x, y, z);
}
  IO_id ( "\nMethod_220 - Programa - v0.0" );
  IO_pause ( "\nApertar ENTER para continuar.\n" );
}

void method_221 (void)
{
 char x = '_';
 char y = '_';
 char z = '_';

 IO_id ( "Method_0221 - Programa - v0.0" );

 x = IO_readchar ( "Entrar com um caractere : " );
 y = IO_readchar ( "Entrar com um caractere : " );
 z = IO_readchar ( "Entrar com um caractere : " );

  if ( x > y && x <  z && x != y && x != z && y != z || x <  y && x >  z && x != y && x != z && y != z )
 {
   IO_printf("%s(%c %c %c)\n", "\nO primeiro caractere digitado esta entre os outros dois ", x, y, z);
 }
  else if (x == y)
{
   IO_printf("%s(%c %c )\n", "\nO primeiro caractere digitado e igual ao segundo caractera digitado ", x, y);
}
  else if (x == z )
{
  IO_printf("%s(%c %c )\n", "\nO primeiro caractere digitado e igual ao terceiro caractera digitado ", x, z);
}

}

void method_222 (void)
{
 char x = '_';
 char y = '_';
 char z = '_';

 IO_id ( "Method_0221 - Programa - v0.0" );

 x = IO_readchar ( "Entrar com um caractere : " );
 y = IO_readchar ( "Entrar com um caractere : " );
 z = IO_readchar ( "Entrar com um caractere : " );

 if ( x != z & x != y && z != y )
 {
       if ( x > y && x <  z  || x <  y && x >  z )
       {
         IO_printf("%s(%c %c %c)\n", "\nO primeiro caractere digitado esta entre os outros dois ", x, y, z);
       }
       else
       {
         IO_printf("%s(%c %c %c)\n", "\nO primeiro caractere digitado nao esta entre os outros dois ", x, y, z);

       }

 }
 else {
     IO_printf("%s(%c %c %c)\n","\nAlgum caractere digitado e igual", x,y,z);
 }

}
int main ( void )
{
 int opcao = 0;
 printf ( "%s\n", "Exemplo0200 - Programa = v0.0" );
 printf ( "%s\n", "Autor: Luiz Felipe Alves da Silva" );
 printf ( "\n" );


 do
 {
 printf ( "\n%s\n"   , "Opcoes:"   );
 printf ( "\n%s" ,  "0 - Terminar"  );
 printf ( "\n%s" ,  "1 - Method_01" );
 printf ( "\n%s" ,  "2 - Method_02" );
 printf ( "\n%s" ,  "3 - Method_03" );
 printf ( "\n%s" ,  "4 - Method_04" );
 printf ( "\n%s" ,  "5 - Method_05" );
 printf ( "\n%s" ,  "6 - Method_06" );
 printf ( "\n%s" ,  "7 - Method_07" );
 printf ( "\n%s" ,  "8 - Method_08" );
 printf ( "\n%s" ,  "9 - Method_09" );
 printf ( "\n%s" , "10 - Method_10" );
 printf ( "\n%s" , "211 - Method_211" );
 printf ( "\n%s" , "212 - Method_212" );
 printf ( "\n%s" , "213 - Method_213" );
 printf ( "\n%s" , "214 - Method_214" );
 printf ( "\n%s" , "215 - Method_215" );
 printf ( "\n%s" , "216 - Method_216" );
 printf ( "\n%s" , "217 - Method_217" );
 printf ( "\n%s" , "218 - Method_218" );
 printf ( "\n%s" , "219 - Method_219" );
 printf ( "\n%s" , "221 - Method_220" );
 printf ( "\n%s" , "221 - Method_221" );
 printf ( "\n%s" , "222 - Method_222" );

 printf ( "\n" );
 printf ( "\n%s", "Opcao = " );
 scanf ( "%d", &opcao );
 getchar( );

 printf ( "\n%s%d", "Opcao = ", opcao );

 switch ( opcao )
 {
 case 0: break;
 case 1: method_01 ( ); break;
 case 2: method_02 ( ); break;
 case 3: method_03 ( ); break;
 case 4: method_04 ( ); break;
 case 5: method_05 ( ); break;
 case 6: method_06 ( ); break;
 case 7: method_07 ( ); break;
 case 8: method_08 ( ); break;
 case 9: method_09 ( ); break;
 case 10: method_10 ( ); break;
 case 211: method_211 ( ); break;
 case 212: method_212( ); break;
 case 213: method_213 ( ); break;
 case 214: method_214 ( ); break;
 case 215: method_215 ( ); break;
 case 216: method_216 ( ); break;
 case 217: method_217 ( ); break;
 case 218: method_218 ( ); break;
 case 219: method_219 ( ); break;
 case 220: method_220 ( ); break;
 case 221 /* 02E1*/: method_221 ( ); break;
 case 222 /* 02E2*/: method_222 ( ); break;

 default:
 printf ( "\nERRO: Opcao invalida.\n" );
 break;
 }
 }
 while ( opcao != 0 );

 printf ( "\n\nApertar ENTER para terminar." );
 getchar( );

 return 0 ;
}

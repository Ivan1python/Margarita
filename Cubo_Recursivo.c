#include<stdio.h>
#include<conio.h>
int cubo_recursivo(int);
int n;
int main()
{printf("Introduce un numero y elevara 3 al numero introducido\n");
int retorno;
scanf("%d",&n);
retorno=cubo_recursivo(n);
printf("3 elevado a la %d es:%d",n,retorno );
getch();
return 0;
}
int cubo_recursivo(int n)
{if (n==0)
return 3;
else 3*cubo_recursivo(n-1);



}
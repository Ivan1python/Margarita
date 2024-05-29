//Programa que calcula el factorial de un número
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int factorial(int);
int n;
int main()
{int fac;
printf("Introduce un numero y el factorial se despliegara\n");
scanf("%d",&n);
fac=factorial(n);
printf("El factorial de %d es:%d!",n,fac);
getch();
}

int factorial(int n)
{
if ((n==1) || (n==0))
return 1;
else 
return n*factorial(n-1);
}
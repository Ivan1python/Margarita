 //Fibonacci
#include<stdio.h>
#include<conio.h>
int fibonacci(int);
void imprimir(int);
int a;
int main()
{printf("Escribe un numero y dererminara la posición de la sucesion\n");
int termino,n_terminos;
scanf("%d",&a);
termino=fibonacci(a);
printf("El termino de la sucesion es:%d\n",termino);
printf("Cuantos terminos deseas imprimir\n");
scanf("%d",&n_terminos);
imprimir(n_terminos);
getch();
}

int fibonacci(int a)
{if (a==1||a==2)
return 1;
else
return (fibonacci(a-1)+fibonacci(a-2) );
}

void imprimir(int n_terminos)
{int i;
for ( i =1; i<= n_terminos; i++)
{printf("%d\n",fibonacci(i));
}
}  
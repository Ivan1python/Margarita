#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
//Llena un array de forma consecutiva
void llena_consecutiva(int[],int);
//Imprime un array
void imprime_array(int[],int);
//Llena un array de forma aleatoria
void llena_aleatoria(int[],int);
//Imprime las direcciones de memoria de un array
void direccion(int[],int);
//Llena un array de forma manual 
void llena_manual(int [],int);
//Suma de datos
int sumaArray(int [],int);
//cuenta los espacios en blanco de una cadena de carácteres
char white_string(char[]); //No funciona
//Copia de enteros
void arrayCopy(int[],int[]);//arrayCopy(destino,copia); Para poderse ejecutar deberán ser de tamaño iguak
void invert(int[],int[]);
int main()
{int array[23];
llena_consecutiva(array,23);
imprime_array(array,23);

getch();
return 0;
}

void llena_consecutiva(int a[],int t)
{int i;
for ( i = 0; i <t ; i++)
{a[i]=i;}
}

void imprime_array(int a[],int t)
{int i;
for ( i = 0; i <t ; i++)
{printf("%d\n",a[i]);}
}

void llena_aleatoria(int a[],int t)
{int i;
for ( i = 0; i < t; i++)
{a[i]=rand()%100; }
}

void direccion(int a[],int t)
{int i;
for (i = 0; i < t; i++)
printf("%p\n",&a[i]);}

void llena_manual(int a[],int t)
{int i;
for (i = 0; i <t; i++)
{scanf("%d",&a[i]);}
}

int sumaArray(int a[],int t)
{int i,suma=0;
for ( i = 0; i <t; i++)
{suma+=a[i];
}
return suma;
}

char white_string(char a[])
{int i,cont=0;
for (i = 0;i<'\0';i++)
{
    if (a[i]==' ')
        cont++;
}
return cont;
}
void arrayCopy(int d[],int o[])
{int tamaño,i;
for ( i = 0; i < 23; i++)
{d[i]=o[i];
}
}
// ' o' Original y 'I ' es el array invertido
void invert(int o[],int I[])
{int i;
for ( i = 0; i <= 22; i++)
{I[i]=o[23-i];

}
}
//Conversionador
/* Fue culpa de Clara Chia */
#include<stdio.h>
#include<math.h>
float descuento_(float);
int main ()
{printf("Teclea el valor de los productos\n");
float a,b,c,x,y,z;
scanf("%f %f %f",&a,&b,&c);
x=descuento_(a);
y=descuento_(b);
z=descuento_(c);
printf("El primer descuento es de:%.2f",x); 
printf("El segundo descuento es de:%.2f",y);
printf("El tercer descuento es de:%.2f",z);
}

float descuento_(float n)
{float descuento;
descuento=n - n*0.15;
return descuento;

}
    
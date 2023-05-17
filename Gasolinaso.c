#include<stdio.h>
#include<conio.h>
#include<math.h>
void costXLitMag(float);
void costXLitPre(float);
int main()
{ int marca;
printf("Introduce la marca de gasolina\n");
printf("Presiona 5 para seleccionar magna\n");
printf("Presiona cualquier numero exepto 5 para seleccionar premium\n");
    scanf("%d",&marca);
    float cp,cm;// cp es el costo de la premium y cm es el costo de la magna
    if(marca=5)
   { printf("Introduce los litros consumidos");
    scanf("%f",&cm);float cp,cm;
    costXLitMag(cm);
    }
    else
    {
    printf("Introduce los litros consumidos\n");
    scanf("%f",&cp);
    costXLitPre(cp);
    }
    getch();    
   
    }
    
    void costXLitMag(float cm)
    {float pm;
    pm=cm*16.54;
    printf("El costo es:%f",pm);
    }
    
    void costXLitPre(float cp)
    {float pp;
    pp=cp*18.28;
    printf("El costo es:%f",cp);
    }

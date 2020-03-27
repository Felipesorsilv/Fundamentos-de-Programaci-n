#include <stdio.h>
#define max 40
int main()
{
    float grado, minuto, segundos;
    float grado1, minuto1, segundos1;
    int da,da1;
    float valor1,valor2;

    printf("1 NORTE, 2 SUR ");
    printf("De manera consecutiva mete los grados luego los minutos y al fnal los ssegundos");
    scanf("%d",&da);
    scanf("%f",&grado);
    printf("\n");
    scanf("%f",&minuto);
    printf("\n");
    scanf("%f",&segundos);
    printf("\n");

    printf("1 Este 2 Oeste");
    scanf("%d",&da1);
    printf("De manera consecutiva mete los grados luego los minutos y al fnal los ssegundos");
    scanf("%f",&grado1);
    printf("\n");
    scanf("%f",&minuto1);
    printf("\n");
    scanf("%f",&segundos1);
    printf("\n");

    if (da==2)
    {
       valor1= -((grado)+(minuto/60)+(segundos/3600));
    }
    else
    {
        valor1= ((grado)+(minuto/60)+(segundos/3600));

    }
    if (da1==2)
    {
       valor2= -((grado1)+(minuto1/60)+(segundos1/3600));
    }
    else
    {
       valor1= ((grado1)+(minuto1/60)+(segundos1/3600));
    }
    printf("Tus coordenadas son las siguientes: %f %f ",valor1,valor2);


}1

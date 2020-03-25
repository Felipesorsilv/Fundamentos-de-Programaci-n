#include <stdio.h>
#define max 40
int main()
{
    int carpetas,i,munero,ultimo,asumar,basura,j,sumafinal;
    char ext[max];

    printf("\t\t\tPAIP\n\n\n");
    printf("Da la extencion de la carpeta: ");

    fgets(ext , max , stdin );

    printf("Da el numero de carpetas: ");
    scanf("%d",&carpetas);
        printf("\n");


    for (i=1;i<carpetas;i++)
    {
        printf("\nNumero de la %da carpeta %s. ",i,ext);
        scanf("%d",&basura);
    }

    printf("\nNumero de la %da carpeta %s.  ",i,ext);
    scanf("%d",&ultimo);

    printf("Ingresa el numero que vamos a sumar");
    scanf("%d",&asumar);

    j=0;


    for (j=ultimo;j<=asumar+ultimo;j++)
    {
        printf("%s.%d \n",ext,j);
    }

}

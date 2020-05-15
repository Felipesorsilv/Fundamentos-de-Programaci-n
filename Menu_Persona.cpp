#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct pers
{
 unsigned long int id_pers;
 char name[100];
 char sexualidad;
 char dir[100], religion[50], escolaridad[20];
 unsigned short int edad;
} Pers;

Pers apun_persona[10];
int opcion, pvar;
char d, res, abc;

void modificar(char tudi, int n){

    switch(tudi){

        case 'I':
        printf("Escriba el nuevo ID: ");
        scanf("%d", &apun_personas[n].id_pers);
        while((d = getc(stdin)) != '\n' && d != EOF);
        break;
        //id de la persona 

        case 'N':
        printf("Escriba el nuevo name: ");
        fgets(apun_personas[n].name,99,stdin);
        break;
        //nombre de la persona

        case 'S':
        printf("Escriba el nuevo sexo: ");
        scanf("%c", &apun_personas[n].sexualidad);
        break;
        //sexualidad de la persona

        case 'D':
        printf("Escriba la nueva dir: ");
        fgets(apun_personas[n].dir,99,stdin);
        break;
        //direccion de la persona

        case 'R':
        printf("Escriba la nueva religion: ");
        fgets(apun_personas[n].religion,49,stdin);
        break;
        //religion de la persona

        case 'G':
        printf("Escriba la nueva escolaridad: ");
        gets(apun_personas[n].escolaridad);
        break;
        //grado de estudios de la persona
        
        case 'E':
        printf("Escriba la nueva edad: ");
        scanf("%hu", &apun_personas[n].edad);
        while((d = getc(stdin)) != '\n' && d != EOF);
        break;
        //edad de la persona

        printf("== Ha sido modificado exitosamente :D ==\n");
    }
}


int main(int argc, char const *argv[]){

    FILE *miarchivooo;
    //miarchivooo = fopen("miarchivoo.bin", "wb+");

    printf("\t== TE DOY LA BIENVENIDA, ESTE ES TU MENU POR FAVOR ESCOGE LO QUE DESEES EN OPCIONES DE 1 AL 5 ==\t\n\n");
    printf("     1. Cargar datos de un archivo. \t\n");
    printf("     2. Modificar los datos de una persona. \t\n");
    printf("     3. Mostrar la lista de personas. \t\n");
    printf("     4. Guardar los datos en un archivo. \t\n");
    printf("     5. Salir. \t\n");
    //printf("\n\tSeleccione una opcion por favor: ");

    do{
        printf("\n\n\tSeleccione una opcion: ");
        scanf("%d",&opc);
        while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada
        switch(opc){
            case 1:
                miarchivooo = fopen("miarchivoo.bin", "rb");
                if(miarchivoo == NULL){
                    printf("\n\t** Error al abrir archivo, no hay datos. **\n");
                    //indica que aaun no hay nada en el archivo
                }
                else{
                    fread(apun_personas, sizeof(Pers),10,miarchivoo);//lee cada linea y almacena los datos  en el array de pers
                    printf("\n\t** Archivo cargado exitosamente. **\n");
                    fclose(miarchivoo);
                }
                break;

            case 2:
                if(apun_pers[0].id_pers != 1){
                    do{ printf("\n\t** Error, no existen registros existentes. **\n ¿Desea agregar datos? S/N: ");
                      scanf("%c", &abc);
                      switch(abc)
                          {
                            case 'S':
                                    printf("¿Cuantas personas desea integrar buen hombre? [1-10]: ");
                                    scanf("%d", &p);
                                    while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada
                                    for(int i = 0; i < p; i++)
                                    {
                                            apun_pers[i].id_pers = i+1;

                                            printf("Introduzca su nombre completo:\n");
                                            fgets(apun_pers[i].name, 99,stdin);
                                            //introduzca el nombre

                                            printf("Introduzca el sexo de la persona a registrar [H/M]:\n");
                                            apun_pers[i].sexualidad = getc(stdin);
                                            while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada

                                            printf("Introduzca la direccion de la persona por favor:\n");
                                            fgets(apun_pers[i].dir, 99,stdin)

;

                                            printf("Introduzca la religion:\n");
                                            fgets(apun_pers[i].religion, 49,stdin);

                                            printf("Introduzca la escolaridad:\n");
                                            fgets(apun_pers[i].escolaridad, 19,stdin);

                                            printf("Introduzca la edad:\n");
                                            scanf("%hu", &apun_pers[i].edad);
                                            while ((d = getc(stdin)) != '\n' && d != EOF); //Esta linea hace flush a la entrada
                                    }
                         }
                 }while(abc !='N');
                }
                else{
                    printf("Digite el ID de la pers que quiera modificar: ");
                    scanf("%d", &opc);
                    while((d = getc(stdin)) != '\n' && d != EOF);

                    for(int i = 0; i < 2; i++){
                        if(apun_pers[i].id_pers == opc){
                            printf("\n== Seleccione el dato a modificar ==\n\n");
                            printf("       I = ID de la persona\n");
                            printf("       N = Nombre\n");
                            printf("       S = Sexo\n");
                            printf("       D = Direccion\n");
                            printf("       R = Religion\n");
                            printf("       G = Escolaridad\n");
                            printf("       E = Edad\n\n");
                            printf("\tEscoja por favor el dato: que desee \n");
                            scanf("%c", &res);
                            scanf("%c", &res);
                            while((d = getc(stdin)) != '\n' && d != EOF);
                            modificar(res, i);
                            //Se usan las iniciales de cada campo por factibilidad
                        }
                    }
                }
                break;

            case 3:

                if(apun_pers[0].id_pers != 1){
                    printf("\n\t** Error, no existen registros aun. **\n");
                }
                else{
                    printf("== Estas son las personas registradas ==\n");
                    for(int i = 0; i < 10; i++){//inicia la secuencia de impresion de cada dato de la pers
                        printf("ID: %d\n",apun_pers[i].id_pers);
                        printf("name: %s\n",apun_pers[i].name);
                        printf("Sexo: %c\n",apun_pers[i].sexo);
                        printf("dir: %s\n",apun_pers[i].dir);
                        printf("Religion: %s\n",apun_pers[i].religion);
                        printf("Escolaridad: %s\n",apun_pers[i].escolaridad);
                        printf("Edad: %d\n",apun_pers[i].edad);
                    }
                }

                //fclose(miarchivoo);
                break;

            case 4:
                miarchivoo = fopen("miarchivo.bin", "wb");
                fwrite(apun_pers, sizeof(pers), 10, miarchivoo);
                printf("\n\t** El archivo ha sido guardado exitosamente. **\n");
                //fclose(miarchivoo);miarchivoo = fopen("miarchivo.bin", "rb");
                break;
        }
    }while(opc != 5);
    printf("\n\t** Gracias por su preferencia vales 1000 **\n");
    printf("\n\t**   Espero haya sido de su agrado bye bye y vuelva pronto            **\n");

    return 0;
}

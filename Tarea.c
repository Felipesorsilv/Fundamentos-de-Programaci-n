#include <stdio.h>
int main() {

  unsigned char c;                          // El bufer de un solo byte 

  FILE *fich;
  int cont=0;
  fich = fopen("miarchivo.bin", "r"); // Abrimos el archivo

  while (!feof(fich)){                        // EL ciclo
       c=fgetc(fich);
                              // obtener un carácter / byte del archivo
       printf("  %02x\n\r",c); // y se muestra en formato hexadecimal

  }
  fclose(fich);
  }

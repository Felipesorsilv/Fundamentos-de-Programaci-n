#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float VParale(float x,float y,float t);
float Vcili(float t,float v);
 int main()
 {
 	float a,l,h,r,h1;
 	char rpt;
 	printf("Programa que calcula el volumen de figuras geometricas \n");
 		printf("Deseas calcular el area de un Paralelepipedo o de un Cilindro? p/c\tt\n");
 		scanf("%c",&rpt);
 		switch(rpt)
 		{
 			case 'p':
 		 	do{
 		 		printf("Dame el primer lado\n");
 		 		 scanf("%f",&a);
 		 		printf("Dame el segundo lado\n");
 		 		 scanf("%f",&l);
 		 		printf("Dame la altura\n");
 		 		 scanf("%f",&h);
 		 		 }while((a==0)||(l==0)||(h==0));
 		 		 printf("El volumen del paralelepipedo es de %f \n",VParale(a,l,h));
 		 		 break;
	     case 'c':
	     	 do{
	     	 	printf("Dame el Radio del cilindro");
 		 		 scanf("%f",&r);
 		 		printf("Dame la altura");
 		 		 scanf("%f",&h1);
			  }while((r==0)||(h1==0));
			  printf("El volumen del paralelepipedo es de %f \n",Vcili(l,h1));
 	           break;
		 }
 		 
 	 return 0;
 }
 
 float VParale(float x,float y,float t)
    {
    	float volp=x*y*t;
    	return volp;
	}

float Vcili(float t,float v)
    {
    	float volc=t*v*M_PI;
    	return volc;
	}

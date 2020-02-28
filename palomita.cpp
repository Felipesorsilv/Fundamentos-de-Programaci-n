#include <stdio.h>
#include <stdlib.h>
 //int ini(int a,int b);
 int main ()
    {
    	int a,b;
    	char c,d;
    	do{
    		do{
    			printf("En que mes compraste las palomitas grandes? \n");
    			 scanf("%d",&a);
    			 while((c = getc(stdin)) != '\n' && c !=EOF);
			}while((a<1)||(a>4));
			printf("Dame otro numero: \n");
			 scanf("%d",&b);
			 while((d = getc(stdin)) != '\n' && d !=EOF);
		}while((b<1)||(b>12));
		    if(a==1)
		    {
			 if(b%2==0)
			 printf("Nada en el mes %d",b);
			else
			if((b==1)||(b==5)||(b==9))
			   printf("Palomitas grandes en el mes %d",b);
			if((b==3)||(b==7)||(b==11))
			   printf("Palomitas medianas en el mes %d",b);
		  }
		else
		if(a==2)
		{
			if(b%2!=0)
			printf("Nada en el mes %d",b);
			 else
			 if((b==4)||(b==8)||(b==12))
			 printf("Palomitas grandes en el mes %d",&b);
			 if((b==2)||(b==6)||(b==10))
			 printf("Palomitas medianas en el mes %d",&b);
		}
		else
		if(a==3)
		    {
			 if(b%2==0)
			 printf("Nada en el mes %d",b);
			else
			if((b==1)||(b==5)||(b==9))
			   printf("Palomitas medianas en el mes %d",b);
			if((b==3)||(b==7)||(b==11))
			   printf("Palomitas grandes en el mes %d",b);
		  }
		  else
		if(a==2)
		{
			if(b%2!=0)
			printf("Nada en el mes %d",b);
			 else
			 if((b==4)||(b==8)||(b==12))
			 printf("Palomitas medianas en el mes %d",&b);
			 if((b==2)||(b==6)||(b==10))
			 printf("Palomitas grandes en el mes %d",&b);
		}
		return 0;
	}
	
	

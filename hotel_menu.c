#include <stdio.h>
int main()
{
	int t,a,b,tb,ke;  //a - epilogi tou pelati; b - kostos parangelias; tb - total kostos parangelias; ke - kostos exiperetisis 
	char str[500] = "        MENU\n--------------------------\n 1. Poto kai ksiroi karpoi \n 2. Plhrws prwino \n 3. Mpifteki \n 4. Makaronia me kima \n 5. Eksodos \n--------------------------\n" ;
	char h[10];
	
	printf("What is the time? \n");
	scanf("%d", &t);
	
	if (t<0 || t>2400)	
	{
	printf("Lathos wra");
	return 0;
	}
	
	else	
		{
		tb=0; 
		
		printf("%s", str);
		scanf("%d", &a);
		
		if (a==1 || a==2 || a==3 || a==4)
		{
			while (a!=5)
				{
					
					if (a==1 || a==2 || a==3 || a==4)
					{
						b=0;
						ke=0;
							
						if(a==1)
							{
							if (t<0000 || t>= 0600)
							{ke=2;} 
							b=7+ke;
							} 
								
						else if (a==2)
							{
							if (t<0600 || t>1159){ke=2;}
							b=5+ke;
							}
						
						else if (a==3)
							{
							if (t<1200 || t>1759)
							{ke=3;}
							b=9+ke;
							}
							
						else if (a==4)
							{
							if (t<1800 || t>2400){ke=3;}
							b=8+ke;
							}
					
						tb=tb+b;
						printf("\nKostos parangelias %d euro, \n\n", b);
						if (ke!=0)
						{
						printf("perilambanei kostos exiperetisis %d euro \n\n", ke);	
						}
						}
					else 
						{
							printf("Lathos epilogi \n\n");
						}
					printf("%s", str);
					scanf("%d", &a);
				}
	
					if (a==5) 
					{
						printf("\nThe total of the order is %d euro. \n\n", tb);
						
						if (t>=0500 && t< 1200){printf("Kalimera!");}
						else if (t>=1200 && t< 1600){printf("Kalo mesimeri!");}
						else if (t>=1600 && t< 2100){printf("Kalo apogevma!");}
						else if (t>=2100){printf("Kalo vradi!");}
					}		
				}
			
		else if (a==5)
		{
			return 0; //heretismos
		}
		else 
		{
			printf("Lathos epilogi");
			return 0;
		}
	}
	return 0;
}

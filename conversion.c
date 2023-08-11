#include<stdio.h>
void length();
void time();
void weight();
int main()
{
	char ch;
	printf("\n----------------------------------------------------------------\n");
	printf("\t\t WELCOME TO CONVERSION WORLD");
	printf("\n----------------------------------------------------------------\n");
	opt:
	printf("\n\t\t----------------------------------------");
	printf("\n\t\tCONVERSION TYPES \t\tKEYS");
	printf("\n\t\t----------------------------------------\n");
	printf("\t\t1.LENGTH CONVERSION \t\tL\n\t\t2.TIME CONVERSION \t\tT\n\t\t3.WEIGHT CONVERSION  \t\tW\n");
    printf("\n\t\t----------------------------------------\n");
    //used to clear a output screen..............
	//printf("\e[1;1H\e[2J");
    printf("\nENTER YOUR CONVERSION TYPE WITH KEYS :");
    scanf(" %c",&ch);
    switch(ch)
    {
    	case 'l':
    	case 'L':
    		length();
    		break;
    	case 't':
    	case 'T':
    		time();
    		break;
    	case 'w':
    	case 'W':
    		weight();
    		break;
    	default:
    		printf("\e[1;1H\e[2J");
    		printf("\n----------------------------------------------------\n");
    		printf("\n INVALID CONVERSION TYPE\n");
    		goto opt;
	}
}
void length()
{
	int i=0,x=1;
	printf("\e[1;1H\e[2J");
	length:
		printf("\e[1;1H\e[2J");
	printf("\n\tLENGTH CONVERSION");
	printf("\n\t-----------------\n");
	printf("\t1.METER TO CENTIMETER\n");
	printf("\t2.METER TO KILOMETER\n");
	printf("\t3.CENTIMETER TO MILLIMETER\n");
	printf("\t4.MILLIMETER TO CENTIMETER\n");
	printf("\t5.KILOMETER TO METER\n");
	printf("\n ENTER YOUR OPTIONS:");
	scanf("%d",&i);
	printf("\e[1;1H\e[2J");
	printf("\n\n\t\t\tLOADING PLEASE WAIT............");
	while(1)
	{
	if(x==100000000)
	{break;
	}	
	x++;
	}
	if(i==1)
	{
		float m,cen;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------METER TO CENTIMETER CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN METER:");
		scanf("%f",&m);
		cen=m*100.0;
		printf("\n-----------------------------------------\n");
		printf("\n%f m EQUAL TO %f cm",m,cen);
		printf("\n-----------------------------------------\n");
		goto length;
	}
	else if(i==2)
	{
		float m,kilo;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------METER TO KILOMETER CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN CENTIMETER:");
		scanf("%f",&m);
		kilo=m*1000.0;
		printf("\n-----------------------------------------\n");
		printf("\n%f m EQUAL TO %f km",m,kilo);
		printf("\n-----------------------------------------\n");
		goto length;
	}
	else if(i==3)
	{
		float cent,milli;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------CENTIMETER TO MILLIMETER CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN CENTIMETER:");
		scanf("%f",&cent);
		milli=cent*10.0;
		printf("\n-----------------------------------------\n");
		printf("\n%f cm EQUAL TO %f mm",cent,milli);
		printf("\n-----------------------------------------\n");
		goto length;
	}
	else if(i==4)
	{
		float milli,cent;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------MILLIMETER TO CENTIMETER CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN MILLIMETER:");
		scanf("%f",&milli);
		cent=milli/10.0;
		printf("\n-----------------------------------------\n");
		printf("\n%f mm EQUAL TO %f cm",milli,cent);
		printf("\n-----------------------------------------\n");
		goto length;
	}
	else if(i==5)
	{
		float kilo,meter;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------KILOMETER TO METER CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN KILOMETER:");
		scanf("%f",&kilo);
		meter=kilo*1000.0;
		printf("\n-----------------------------------------\n");
		printf("\n%f km EQUAL TO %f m",kilo,meter);
		printf("\n-----------------------------------------\n");
		goto length;
	}
	else
	{
	printf("\n\n--------------------------INVALID INPUT-----------------------\n");
	printf("PLEASE ENTER VALID OPTION");
	printf("\n------------------------------------------------------------------\n");
		goto length;
	}
}
void time()
{
	int i=0,x=0;
	time:
	printf("\n\tTIME CONVERSION");
	printf("\n\t-----------------\n");
	printf("\t1.SECONDS TO MINUTES\n");
	printf("\t2.HOURS TO SECONDS\n");
	printf("\t3.HOURS TO MINUTES\n");
	printf("\t4.MINUTES TO SECONDS\n");
	printf("\n ENTER YOUR OPTIONS:");
	scanf("%d",&i);
	printf("\e[1;1H\e[2J");
	printf("\n\n\t\t\tLOADING PLEASE WAIT............");
	while(1)
	{
	if(x==100000000)
	{break;
	}	
	x++;
	}
	if(i==1)
	{
		int s,m;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------SECONDS TO MINUTES CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN SECONDS:");
		scanf("%d",&s);
		m=s/60;
		printf("\n-----------------------------------------\n");
		printf("\n%d s EQUAL TO %d min",s,m);
		printf("\n-----------------------------------------\n");
		goto time;
	}
else if(i==2)
	{
		int s,hr;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------HOURS TO SECONDS CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN HOURS:");
		scanf("%d",&hr);
		s=hr*3600;
		printf("\n-----------------------------------------\n");
		printf("\n%d hr EQUAL TO %d s\n",hr,s);
		printf("\n-----------------------------------------\n");
		goto time;
	}

else if(i==3)
	{
		int m,hr;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------HOURS TO MINUTES CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN HOURS:");
		scanf("%d",&hr);
		m=hr*60;
		printf("\n-----------------------------------------\n");
		printf("\n%d hr EQUAL TO %d m\n",hr,m);
		printf("\n-----------------------------------------\n");
		goto time;
	}
	else if(i==4)
	{
		int m,s;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------MINUTES TO SECONDS CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN MINUTES:");
		scanf("%d",&m);
		s=m*60;
		printf("\n-----------------------------------------\n");
		printf("\n%d m EQUAL TO %d s\n",m,s);
		printf("\n-----------------------------------------\n");
		goto time;
	}
	else
	{
	printf("\n\n--------------------------INVALID INPUT-----------------------\n");
	printf("PLEASE ENTER VALID OPTION");
	printf("\n------------------------------------------------------------------\n");
		goto time;
	}
}
void weight()
{
	int i=0,x=0;
	weight:
	printf("\n\tWEIGHT CONVERSION");
	printf("\n\t-----------------\n");
	printf("\t1.TONNE TO KILOGRAM\n");
	printf("\t2.KILOGRAM TO GRAM\n");
	printf("\t3.GRAM TO KILOGRAM\n");
	printf("\t3.PRESS ZERO TO EXIT\n");
	printf("\n ENTER YOUR OPTIONS:");
	scanf("%d",&i);
	printf("\e[1;1H\e[2J");
	printf("\n\n\t\t\tLOADING PLEASE WAIT............");
	while(1)
	{
	if(x==100000000)
	{break;
	}	
	x++;
	}
if(i==1)
	{
		int t,k;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------TONNE TO KILOGRAM CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN TONNE:");
		scanf("%d",&t);
		k=t*1000;
		printf("\n-----------------------------------------\n");
		printf("\n%d T EQUAL TO %d Kg",t,k);
		printf("\n-----------------------------------------\n");
		goto weight;
	}
else if(i==2)
	{
		int g,k;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------KILOGRAM TO GRAM CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN KILOGRAM:");
		scanf("%d",&g);
		g=k*1000;
		printf("\n-----------------------------------------\n");
		printf("\n%d Kg EQUAL TO %d g",k,g);
		printf("\n-----------------------------------------\n");
		goto weight;
	}
else if(i==3)
	{
		float g,k;
	    printf("\e[1;1H\e[2J");
	    printf("\n-------------------------GRAM TO KILOGRAM CONVERSION-----------------------------");
		printf("\n\nENTER VALUE IN GRAM:");
		scanf("%f",&g);
		k=g/1000.0;
		printf("\n-----------------------------------------\n");
		printf("\n%.2f g EQUAL TO %.2f Kg",g,k);
		printf("\n-----------------------------------------\n");
		goto weight;
	}
	else if(i==0)
{
	exit(0);
}
}


#include<stdio.h>
int que1(int test);
int main()
{
    int test,i;
	char name[10];
    printf("\033[0;32m");
	printf("\n\t\t-----------------------------------------\n");
	printf("\t\t\t\tQUIZ GAME\n");
	printf("\t\t-----------------------------------------\n");
	printf("\t\t\t  WELCOME TO QUIZ GAME");
	printf("\n\t\t-----------------------------------------\n");
	printf("\t\tNOTE:\n");
	printf("\t\t 1.THIS GAME CONTAINS A 10 QUESTIONS AND EACH QUESTION CONSIST OF 1 MARK\n");
	printf("\t\t 2.THERE IS NO NEGATIVE MARK\n");
	printf("\t\t 3.ANSWER ALL THE QUESTIONS AND DON'T SKIP THE QUESTIONS\n");
	printf("\t\t 4.PRESS ANY KEY TO ENTER THE GAME...");
	getche();
	i=1;
	if(i==1)
	{
	printf("\n\t\t---------------------------------------\n");
	printf("\t\tPLEASE ENTER YOUR NAME :");
	scanf(" %s",name);
    printf("\t\t-------------------------------------\n");
    printf("\e[1;1H\e[2J");
	printf("\n\n\t\tWELCOME TO QUIZ GAME ");
	printf("\033[0;36m");
	printf("%s......\n",name);
	printf("\033[0;32m");
	printf("\t\t------------HIGHSCORE---------------\n");
	printf("\t\t 1.MR.N \t\t  SCORED : 10\n\n");
	printf("\t\t 2.SAM  \t\t  SCORED : 9\n\n");
	printf("\n\t\t-----------------------------------\n");
	printf("\t\tTRY TO BEAT THEM %s.....",name);
    printf("\n\t\t-----------------------------------\n");
	printf("\t\t PRESS ANY KEY TO ENTER THE GAME.....");
	getche();
	test=1;
    }
	int score=que1(test);
	printf("\e[1;1H\e[2J");
	printf("\033[0;32m");
	printf("\n---------------------------------------------------\n");
	printf("YOU SCORED %d",score);
	printf("\n----------------------------------------------------\n");
	printf("\t\t SCORE BOARD\t\t\t");
	if(score ==10)
    {
      printf("\n\n 1)%s\t SCORED:%d",name,score);
      printf("\n\n 2)Mr.N SCORED : 10");
      printf("\n\n 3)SAM SCORED : 9");
    }
    else if(score==9)
    {
        printf("\n\n 1)Mr.N SCORED : 10");
        printf("\n\n 2)%s\t SCORED:%d",name,score);
        printf("\n\n 3)SAM SCORED : 9");
    }
    else
    {
     printf("\n\n 1)Mr.N SCORED : 10");
     printf("\n\n 2)SAM SCORED : 9");
     printf("\n\n 3)%s\t SCORED:%d",name,score);
     printf("\n\n BETTER LUCK NEXT TIME %s",name);
    }
    printf("\n\n\t********HAVE A NICE DAY %s BYE...............",name);
    printf("\n---------------------------------------------------------\n");
}
int que1(int n)
{
	printf("\033[0;36m");
    char ch;
    int mark=0;
    //1
    printf("\e[1;1H\e[2J");
    one:
    printf("\n---------------------------------------------------------------------\n");
    printf("QUESTION 1");
    printf("\n----------\n");
    printf("WHICH PROGRAMMING LANGUAGE IS USED FOR DEVELOPING ANDROID APPS ?\n\n");
    printf("a) C++ \t\t\t b) JAVA \n\nc) PYTHON \t\t d) SWIFT\n");
    printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='b'||ch=='B')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto one;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
    int x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}

   //2
   printf("\e[1;1H\e[2J");
   printf("\033[0;33m");
   two:
    printf("\n--------------------------------------------------------------------------\n");
    printf("QUESTION 2 ");
    printf("\n----------\n");
    printf("WHICH PROTOCOL IS USED TO SECURE COMMUNICATION OVER A COMPUTER NETWORK ?\n\n");
    printf("a) HTTP \t\tb) FTP \n\nc) TCP \t\t\td) HTTPS\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='d'||ch=='D')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto two;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //3
    printf("\e[1;1H\e[2J");
    printf("\033[0;34m");
    three:
    printf("\n------------------------------------------------------------------------\n");
    printf("QUESTION 3 ");
    printf("\n----------\n");
    printf("WHICH DATA STRUCTURE FOLLOWS THE LAST IN FIRST OUT (LIFO) PRINCIPLE?\n\n");
    printf("a) QUEUE \t\t b) LINKED LIST \n\nc) STACK \t\t d) TREE\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='c'||ch=='C')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto three;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //4
    printf("\e[1;1H\e[2J");
    printf("\033[0;31m");
    four:
    printf("\n-------------------------------------------------------------------\n");
    printf("QUESTION 4 ");
    printf("\n----------\n");
    printf("WHAT IS THE BASIC UNIT OF A DIGITAL COMPUTER'S MEMORY ?\n\n");
    printf("a) BIT \t\t\t b) BYTE \n\nc) KILOBYTE \t\t d) MEGABYTE\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='a'|| ch=='A')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto four;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
//5
printf("\e[1;1H\e[2J");
printf("\033[0;34m");
five:
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("QUESTION 5");
    printf("\n----------\n");
    printf("WHICH PROGRAMMING LANGUAGE IS COMMONLY USED FOR DATA ANALYSIS AND SCIENTIFIC COMPUTING ?\n\n");
    printf("a) JAVASCRIPT \t\t  b) RUBY \n\nc) PYTHON \t\t d) PHP\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='c'||ch=='C')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto five;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
//6
printf("\e[1;1H\e[2J");
printf("\033[0;33m");
six:
    printf("\n----------------------------------------------------------------------------------\n");
    printf("QUESTION 6 ");
    printf("\n----------\n");
    printf("WHICH OF THE FOLLOWING DATA TYPES IS USED TO STORE WHOLE NUMBERS IN MOST PROGRAMMING LANGUAGES?\n\n");
    printf("a) FLOAT \t\t b) DOUBLE \n\nc) INTEGER \t\t d) CHAR\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='c'||ch=='C')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto six;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf("WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //7
    printf("\e[1;1H\e[2J");
    printf("\033[0;31m");
    seven:
    printf("\n-------------------------------------------------------------------------------------\n");
    printf("QUESTION 7 ");
    printf("\n----------\n");
    printf("WHICH OF THE FOLLOWING PROGRAMMING LANGUAGES IS COMMONLY USED FOR WEB DEVELOPMENT AND SERVER-SIDE SCRIPTING?\n\n");
    printf("a) JAVASCRIPT  \t\t b) HTML \n\nc) CSS \t\t\t  d) PHP\n");
    printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='d'||ch=='D')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto seven;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //8
    printf("\e[1;1H\e[2J");
    printf("\033[0;34m");
    eight:
    printf("\n------------------------------------------------------------------\n");
    printf("QUESTION 8 :");
    printf("\n----------\n");
    printf("WHICH DATA STRUCTURE OPERATES ON A FIRST-IN-FIRST-OUT (FIFO)?\n\n");
    printf("a) STACK  \t\t b) QUEUE \n\nc) ARRAY \t\t d) TREE\n");
  printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='b'||ch=='B')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto eight;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
    x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //9
    printf("\e[1;1H\e[2J");
    printf("\033[0;33m");
    nine:
        printf("\n-----------------------------------------------------------------------\n");
    printf("QUESTION 9 :");
    printf("\n----------\n");
    printf("WHICH PROGRAMMING LANGUAGE IS WIDELY USED FOR DEVELOPING ANDROID APPLICATIONS?\n\n");
    printf("a) SWIFT \t\t b) JAVA \n\nc) KOTLIN \t\t d) HTML\n");
    printf("\n ENTER YOU OPTION : ");
    scanf(" %c",&ch);
    if(ch=='c'||ch=='C')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto nine;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    //10
    printf("\e[1;1H\e[2J");
    printf("\033[0;31m");
    ten:
    printf("\n--------------------------------------------------------------------------------\n");
    printf("QUESTION 10");
    printf("\n----------\n");
    printf("WHICH COMPONENT OF A COMPUTER IS RESPONSIBLE FOR PERFORMING ARITHMETIC AND LOGICAL OPERATIONS?\n\n");
    printf("a) CPU \t\t\t b) RAM \n\nc) ROM \t\t\t d) SSD\n");
    printf("\n ENTER YOU OPTION : ");
	scanf(" %c",&ch);
    if(ch=='a'||ch=='A')
    {
    	printf("\n---------------------------------------------------------\n");
        printf("\n CORRECT ANSWER !!!!!!!!!!!");
        printf("\n---------------------------------------------------------\n");
        mark++;
    }
    else if((ch>='e'&&ch<='z'||ch>='E'&&ch<='Z'))
    {
    	printf("\n---------------------------------------------------------\n");
    	printf("\n	INVALID OPTION PLEASE ENTER VALID OPTION");
    	printf("\n---------------------------------------------------------\n");
    	goto ten;
	}
    else
    {
    	printf("\n---------------------------------------------------------\n");
        printf(" WRONG ANSWER....... ");
        printf("\n THING AND PICK THE ANSWER");
        printf("\n---------------------------------------------------------\n");
    }
     x=0;
   while(1)
	{
	if(x==1000000000)
	{break;
	}	
	x++;
	}
    return mark;
}

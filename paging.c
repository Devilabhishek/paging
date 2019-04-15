#include<stdio.h>
#include<conio.h>
int frame[3];
int main()
{
void display();
int e,j;
int page[12];
int c;
	printf("Enter the sequence \n",c);
entry:		
for(c=1;c<=12;c++)
{

	scanf("%d",&page[c]);
	if(page[c]<0 && page[c]>99)
	{
		printf("INVALID INPUT. please enter in range 0 to 99.Press any key to enter again:\n");
			getch();
	     goto entry;
	}

}
int flag1=0,flag2=0,pf=0,framesize=3,top=0;
//clrscr();
for(e=0;e<3;e++)
{
frame[e]=-1;
}
for(j=0;j<12;j++)
{
flag1=0;
flag2=0;
for(e=0;e<12;e++)
{
if(frame[e]==page[j])
{
flag1=1;
flag2=1;
break;
}
}
if(flag1==0)
{
for(e=0;e<framesize;e++)
{
if(frame[e]==-1)
{
frame[e]=page[j];
flag2=1;
break;
}
}
}
if(flag2==0)
{
frame[top]=page[j];
top++;
pf++;
if(top>=framesize)
top=0;
}
display();
}
printf("\n");
printf("Number of page faults  : %d ",pf);
getch();
}
void display()
{
int e;
printf("\n");
for(e=0;e<3;e++)
printf("%d\t",frame[e]);
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void depositmodule();
void withdrawmodule();
void createacc();
void bal();

int a=0,i = 202;

struct bank
{
int no;
char name[31];
float bal;
float dep;
}s[31];


void main()
{
int acc;
while(1)
{
printf("\n******************************************");
printf("\n WELCOME TO C-CODE BANK");
printf("\n******************************************");
printf("\n1-Create Account");
printf("\n2-Deposit More");
printf("\n3-Withdraw");
printf("\n4-Account Balance Enquiry");
printf("\n5-Quit");

printf("\nEnter your choice:\n");
scanf("%d",&acc);

switch(acc)
{
case 1: createacc();
break;
case 2: depositmodule();
break;
case 3: withdrawmodule();
break;
case 4: bal();
break;
case 5: exit(0);
defalut: printf("Enter 1-5 only");
getch();
}
}
}

void createacc()
{
printf("\n*************************************");
printf("\n ACCOUNT CREATION ");
printf("\n*************************************");
printf("\nYour Savings Account Number will be: %d",i);
s[a].no = i;
printf("\nEnter your Student Registration Number:\n");
scanf("%s",s[a].name);
printf("\nThank you for joining  C-CODE BANK");
printf("\nYOU ARE REQUIRED TO PAY/DEPOSIT UGX.500 AS YOUR MINIMUM ACCOUNT BALANCE\n");
printf("\n\nPress ENTER key to continue");
s[a].dep=500;
a++;
i++;
getch();
}


void depositmodule()
{
int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n DEPOSIT MORE");
printf("\n*************************************");
printf("\nEnter your Account Number:");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Registration Number : %s",s[m].name);
printf("\n Current Balance : %f",s[m].dep);
printf("\n Enter Amount To Deposit: ");
scanf("%f",&aa);
s[m].dep+=aa;
printf("\nNew Account Balance is UGX: %f\n",s[m].dep);
getch();
}
else
{
printf("\nACCOUNT NUMBER IS INVALID");
getch();
}
}


void withdrawmodule()
{
int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n WITHDRAW ");
printf("\n*************************************");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Registration Number : %s",s[m].name);
printf("\n Current Balance : %f",s[m].dep);
printf("\n Enter Amount To Withdraw:");
scanf("%f",&aa);
if(s[m].dep<aa+500)
{
printf("\nYOUR ACCOUNT HAS INSUFFICIENT FUNDS");
getch();
}
else
{
s[m].dep-=aa;
printf("\nWITHDRAW SUCCESSFUL");
printf("\nYour New Account Balance is UGX:%f",s[m].dep);
}
}
else
{
printf("INVALID");
getch();
}
getch();
}


void bal()
{ 
int no,b=0,m=0;
float aa;
printf("\n*************************************");
printf("\n ACCOUNT BALANCE ENQUIRY ");
printf("\n*************************************");
printf("\nEnter your Account Number: ");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no==no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Registration Number : %s",s[m].name);
printf("\n Current Balance : %f",s[m].dep);
getch();
}
else
{
printf("INVALID");
getch();
}
}
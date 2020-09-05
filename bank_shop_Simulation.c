/*write a menu driven c program to perform the bank cust transactions with multiple operations;
1) creating acc, withdrawn a deposit;
2) Process a loan;
3) make an online payment for any purpose;
 use functions,struct,pointers where ever possible:
        */
        
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//global vars
char choiceglobal;
int lt[100];
float clm[100];
int checkdate;
char change='0';
char internet;
int fl,fl2;
char shopch;

//structure -accounts
struct accreg
{		
	int slno;
	char name[20];

	int accno;
	int pass;
	float acbal;
	struct birth{
		int dd;
		int mm;
		int yy;
	}dob;
	long long mobile;
};
struct accreg hell[100];

//pattern-flow
flow()
{
	int i,j,k,l,n,m;
		for(i=0;i<10;i++)
	{		
	   m=20;
		do{
			m--;
			printf(" ");
		}while(m>=i);	
			printf("\xCA\xCD\xCE\xCE\xCE\xCE\xCE\xCE   ");
			printf("\xB0\xB0\xB1\xB1\xB1\xB1\xB2\xB2");
			     m=0;	
			do{
				m++;	
				printf("  ");
			}while(m<=i);
			printf("\xB2\xB2\xB1\xB1\xB1\xB1\xB0\xB0");	
			printf("   \xCE\xCE\xCE\xCE\xCE\xCE\xCD\xCA");
			for(j=0;j<1000;j++){
			for(k=0;k<750;k++){
			for(l=0;l<100;l++){
			}}}			
				printf("\n");
}
}
heading()
{
	printf("\n");
	printf("\n");
	wait();
	wait();printf("	      \xB1\xB1\xB1\xB1\xB1\xB1\xB1       \xB1\xB1\xB1\xB1\xB1\xB1\xB1        \xB1\xB1\xB1        \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	wait();printf("	      \xB1\xB1\xB1           \xB1\xB1\xB1            \xB1\xB1\xB1        \xB1\xB1\xB1     \xB1\xB1\xB1\n");
	wait();printf("	      \xB1\xB1\xB1   \xB1\xB1\xB1\xB1    \xB1\xB1\xB1            \xB1\xB1\xB1        \xB1\xB1\xB1     \xB1\xB1\xB1\n");
	wait();printf("	      \xB1\xB1\xB1   \xB1\xB1\xB1\xB1    \xB1\xB1\xB1            \xB1\xB1\xB1        \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	wait();printf("	      \xB1\xB1\xB1           \xB1\xB1\xB1            \xB1\xB1\xB1        \xB1\xB1\xB1     \xB1\xB1\xB1\n");	
	wait();printf("	      \xB1\xB1\xB1\xB1\xB1\xB1\xB1       \xB1\xB1\xB1\xB1\xB1\xB1\xB1        \xB1\xB1\xB1        \xB1\xB1\xB1     \xB1\xB1\xB1\n");
	wait();printf("																	\n");
	wait();printf("\n");
}
//wait
wait()
{
	int i,j,k,l,n;
	
	for(n=0;n<2;n++){
		for(i=0;i<3;i++)
	{
			for(j=0;j<1000;j++){
			for(k=0;k<750;k++){
			for(l=0;l<50;l++){
			}}}			
		
				
	}}

}

//mobile number validation
checkphone(long long mobile)
{
	if(mobile>=1000000000 && mobile<=9999999999)
	return checkdate =0;
	else return checkdate = 1;
	
}

//year validation
checkyear(int year)
{	
	int i;
	 if(year>=1900 && year<=2018)

		return checkdate=0;
	else
		return checkdate=1;


}

//password hiding 
int password()
{
	int i,c=0,v,t=1000;
	for(i=0;i<4;i++)
	{
		v=getch();
		v=v-48;
		printf("*");
		c=c+v*t;
		t=t/10;
	}
	return c;
}

//payment / online transaction 
payment(int money,int t)
{
	int ch4,tempac,q,ok,pwd,i;
	int loop1=0,loop2=0;
	if(t==0)
		{
				printf("\nCreate An account First !");
				getch();
				
		}
	else
		{
			printf("\n1 to pay ");
				ch4=getch();
			if(ch4=='1')
				{
					do{
							printf("\nEnter the account number");
						scanf("%d",&tempac);
						
						
							for(q=0;q<t;q++)
						{
							if(tempac==hell[q].accno)
							{
								ok=1;
								t=q;
							}
						}
								
								
							if(ok!=1)
							{ printf("\nAccount Not found !");
							printf("\n1.Try different Account Number \nAny other key to leave to the Amazon homepage\n");
							loop1=getch();
						}
						}while (loop1=='1');
							
						q--;
						if(ok==1)
							{	
								do{
								printf("\n Enter the Passcode : ");
								pwd=password();
										if(pwd==hell[q].pass)
										{
											if(hell[q].acbal>money)
											{
												hell[q].acbal=hell[q].acbal-money;
												printf("\nPayment Successful!\nYour product will be delivered in 3 days !");
												printf("\n Name : %s \nAccount balance : %.2f",hell[q].name,hell[q].acbal);
												getch();
											}
											else {
												printf("\nNot Enough Balance");
												getch();
												printf("\n");

											}

										}
										else 
											{
												printf("\nWrong password");
												printf("\n1.Try different Pin number \nAny other key to leave to the Amazon homepage\n");
											loop2=getch();
											}
									}while(loop2=='1');
								}
	}
}
}

//month validation
checkmonth(int month)
{	
	if(month>=1 && month<=12)
		return checkdate=0;
	else
		return checkdate=1;
	
}

//day validation 
checkday(int day,int month,int year)
{	
	  if((day>=1 && day<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
                return checkdate=0;
            else if((day>=1 && day<=30) && (month==4 || month==6 || month==9 || month==11))
                return checkdate=0;
            else if((day>=1 && day<=28) && (month==2))
                return checkdate=0;
            else if(day==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0)))
                return checkdate=0;
            else
				return checkdate=1;
	
}

//Account page (withdraw,deposit,loan)
operation(int sl,int *notemp,char nametemp[10],float *baltemp)
{	
	int u,r;
	char ch;
	
do{
	choiceglobal='0';
	system("cls");
	decorationline1();
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   RHSS Bank-Online Portal \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
	decorationline1();
	printf("\n\xB2\xB2\xB2\t\t \t\tAccount Page           \t\t\t\t\xB2\xB2\xB2\n\xB2\xB2\xB2\t\t \t\t------------ \t\t\t\t\t\xB2\xB2\xB2 ");
	printf("\n   \t\t\t       Welcome %s     \t \t \t\t  ",nametemp);

	printf("\n");
	decorationline1();
	printf("\n1.Check account Balance\n2.Deposit\n3.Withdraw\n4.Apply for a loan\n5.Loan payment\n6.Leave This page\nEnter the choice : ");
	scanf("%d",&u);
	switch(u)
	{
		case 1:
			{
				printf("\n Account Balance : %.2f",*baltemp);
				break;
			}
		case 2:
			{	
				printf("\nDeposit\n----------\n");
				printf("Enter the money to be deposited : ");
				scanf("%d",&r);
				*baltemp=*baltemp + r;
				printf("\nNew balance in your Account : %.2f",*baltemp);
				break;
			}
			case 3:
				{
					printf("\nWithdraw\n----------\n");
					printf("Enter the amount : ");
					scanf("%d",&r);
					if(r>*baltemp)
					{
						printf("\nInsufficient Balance\n");
					}
					else
					{	
						*baltemp=*baltemp-r;
						printf("Remaining Balance : %.2f",*baltemp);
					}
					break;
				}
			case 4:
				{
					float samb[100];
					float reql[100];
					int  coi;
					printf("\nLoan\n--------\n");
					samb[sl]=*baltemp * 15;
					if(lt[sl] >= 2)
					goto fg;
				    printf("\nEnter The amount of money : ");				    
					scanf("%f",&reql[sl]);
					if(reql[sl] <= samb[sl])
					{
						printf("\n1 to Avail loan");
						scanf("\n %d",&coi);
						lt[sl]=lt[sl]+1;
						if(coi==1)
						{
							printf("\n Credited %.2f to you loan account",reql[sl]);
							*baltemp=*baltemp+reql[sl];
							clm[sl]=clm[sl]+reql[sl];
							printf("\n Current Loan Amount : %.2f",clm[sl]);
							printf("\n Current Account balance  :%.2f",*baltemp);
						}
						else
						{
							goto fgh;
						}
					}
					else
					{
						printf("\n Sorry ! You're not eligible for huge amount loan");
						fgh:fg:printf(" Sorry LOAN not processed");
							
					}
					break;
				}
				case 5:
				{
					if(clm[sl]==0)
					goto we;
					int s;
					printf("\n Loan Repayment");
					printf("\n Your current loan is %.2f",clm[sl]);
					printf("\n Do You want to repay the loan ?");
					printf("\n IF yes press 1 else press 0");
					scanf("%d",&s);
				    switch(s)
				    {
				    	case 1:
						{
				    	int rp[100];
						printf("\n Enter the amount you want to repay ");
						scanf("\n %d",&rp[sl]);
						if(rp[sl]<=clm[sl] && rp[sl] <= *baltemp)
						{
							clm[sl]=clm[sl]-rp[sl];
							*baltemp=*baltemp-rp[sl];
							printf("\n You have paid your loan");
							*baltemp=*baltemp-100;
							printf("\n We have charged 100 rs for loan payment transaction ");
							printf("\n Balance is %.2f",*baltemp);
							printf("\n Current loan amount %.2f",clm[sl]);
							if(clm[sl] <=100)
							lt[sl]--;
						}
						else
						{
						we:	printf("\n Looks like you have entered wrong amount or you don't have balance to repay your loan");
						}
						break;
					    }
						case 2:
							{
								printf("\n Please repay your current loan to make new loans");
							    break;
									
							}
							break;
						
					}
						case 6:
						{
							choiceglobal='2';
							break;
						}
						
					}
					
			
			
			
}
if(choiceglobal!='2')
{printf("\n1.Back to Account Page\n2.Back to the RHSS bank homepage\nEnter the Choice");
	choiceglobal=getch();
}
}while(choiceglobal=='1');
}

//decorative pattern one line
decorationline1()
	{printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
}

//main Function
main()

{
    system("color 9");//color code

	char try1,admincreate;
	int ch,i=0,j=1000,k,ok;
	int acno,pwd,q,w,e,t=0,m,l;
	flow();
	heading();
	getch();
	system("cls");
wait();
	
	//balance clear,loan amount clear , sl assigning
	for(l=0;l<100;l++)
	{
		hell[i].acbal=0.00;
		hell[i].slno=l;
		clm[i]=0;
	}

do{
	
	system("cls");
	
		decorationline1();
		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 1.RHSS Bank-Online Portal \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 2.Amazon Shopping Website \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
		decorationline1();
	admincreate=getch();

	//amazon Shopping website
	if(admincreate=='2')
{		
	do{
	
			system("cls");
			decorationline1();
			printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  AMAZON ONLINE SHOPPING WEBSITE \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
			decorationline1();
		printf("\n\xB2\xB2\t\t\t                                \t\t         \xB2\xB2\n\xB2\xB2\t\t\t1.Shoes  2.Mobiles  3.Leave Page\t\t         \xB2\xB2\n\xB2\xB2\t\t\t                                \t\t         \xB2\xB2\n");
		decorationline1();
		
		shopch=getch();
		int shoech,back;
		switch(shopch)
		{
			case '1':
				{	 int ch4,tempac,temppass,g,h;
					printf("\nShoes\n--------");
					printf("\n1.Adidas Superstar - Rs.4500/-\n2.Puma Ignite Limitless  - Rs.4000/-\n3.Nike Airmax - Rs.7500/-\n");
					decorationline1();
					shoech=getch();
					switch(shoech)
					{
						case '1': 
							{	printf("\nAdidas Superstar - Rs.4500/-");
								payment(4500,t);
								break;
							}
						case '2':
							{
								printf("\nPuma Ignite Limitless  - Rs.4000/-");
								payment(4000,t);
								break;
							}
						case '3':
							{
								printf("\nNike Airmax - Rs.7500/-");
								payment(7500,t);
								break;
							}
						case 4: 
							{
								printf("\nEnter 1 to goto homepage of Amazon");
							back=getch();	
							}
					}
				while(back=='1');
					break;
			}
			case '2':
				{
						 int ch4,tempac,temppass,g,h;
					printf("\nMobiles\n----------");
					printf("\n1.Redmi note 5 pro - Rs.14500/-\n2.One plus 6  - Rs.40000/-\n3.Redmi 5 - Rs.7500/-\n");
					decorationline1();
					shoech=getch();
					switch(shoech)
					{
						case '1': 
							{	printf("\nRedmi note 5 pro - Rs.14500/-");
								payment(14500,t);
								break;
							}
						case '2':
							{
								printf("\nOne plus 6  - Rs.40000/-");
								payment(40000,t);
								break;
							}
						case '3':
							{
								printf("\nRedmi 5 - Rs.7500/-");
								payment(7500,t);
								break;
							}
						case 4: 
							{
								printf("\nEnter 1 to goto homepage of Amazon");
							back=getch();	
							}
					}
				while(back=='1');
					break;
				}
			case '3':
			{
				goto fl2;
				
			}
			
			default : 
			{
			printf("\nWrong choice !\n Enter 1 to goto the Amazon homepage");
				shopch=getch();
			}
		}
	}while(shopch=='1');

}

	//Bank page (create account,login account,view accounts)
	if(admincreate=='1')
{
do	{
	system("cls");
	try1='0';
	decorationline1();
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2   RHSS Bank-Online Portal \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
		decorationline1();
		printf("\n\xB2\xB2                                                                               \xB2\xB2");
	printf("\n\xB2\xB2    1.Register      2.Login       3.Show accounts        4.Leave This Page     \xB2\xB2\n");
	printf("\xB2\xB2                                                                               \xB2\xB2\n");
	decorationline1();
	ch=getch();
	if(ch=='4')
	goto fl;
	switch(ch)
{
	//registration page
		case '1':
		
	{
		printf("\nRegistration Page : \n ----------------");
		printf("\nEnter the Name : ");
		scanf("%s",&hell[i].name);
		hell[i].accno =j++;
		printf("\nDate of Birth : ");
		do{
				change = '0';
		do{
			
			if(checkdate==1)
			printf("\nSorry,Please provide the actual birth year");
		printf("\n\t\tYear : ");
		scanf("%d",&hell[i].dob.yy);
		checkyear(hell[i].dob.yy);
		}while(checkdate==1);
		do{
				if(checkdate==1)
			printf("\nSorry,Please provide the actual birth month");
		printf("\n\t\tMonth : ");
		scanf("%d",&hell[i].dob.mm);
		checkmonth(hell[i].dob.mm);
		}while(checkdate==1);
		do{
			if(checkdate==1)
			printf("\nSorry,Please provide the actual birth day");
		printf("\n\t\tDay : ");
		scanf("%d",&hell[i].dob.dd);
		checkday(hell[i].dob.dd,hell[i].dob.mm,hell[i].dob.yy);
		}while(checkdate==1);
		printf("Date of birth : %d - %d - %d",hell[i].dob.dd,hell[i].dob.mm,hell[i].dob.yy);
		printf("\nEnter 1 if the entered DOB is Correct ");
		change=getch();
	}while(change!='1');
		printf("\nMobile Number : ");
		do{
			if(checkdate==1)
			printf("\nSorry,Please provide actual 10 digit phone number\n");
			scanf("%lld",&hell[i].mobile);
			checkphone(hell[i].mobile);
		}while(checkdate==1);
		printf("\n Mobile No : %lld",hell[i].mobile);
		printf("\n Your Account Number is %d:",hell[i].accno);
		printf("\n Enter the New Passcode : ");
		hell[i].pass=password();
		printf("\nAccount created Successfully\n");
		getch();
		i++;
		t++;
		break;

}

//view accounts
case '3':
	{	printf("\n Bank Accounts Page : \n------------------");
	printf("\nHere is the list accounts present in the bank : ");
	printf("\n Name\t\tAccount No\n");
	
		for(k=0;k<t;k++)
		{	
			printf("%s\t\t%d\n",hell[k].name,hell[k].accno);
		}
		getch();
		break;

	
	}

	//Account login -operation function call
case '2':
		{	
			printf("\nEnter Your Account Number : ");
			scanf("%d",&acno);
			
			for(q=0;q<t;q++)
			{
				if(acno==hell[q].accno)
				{
				ok=1;	break;
				}
				else ok=0;
			}
				if(ok==1)	
					{
						printf("\n Enter the Passcode : ");
						pwd=password();
								if(pwd==hell[q].pass)
								{
									printf("\nAccount Authentication Successful !\nEnter to continue \n");
									getch();
									
									operation(q,&hell[q].accno,hell[q].name,&hell[q].acbal);
									
								}
							else printf("\n Password is wrong !");
					}
				else printf("\nAccount Does not Exist");
		
			
		}
	
}
if(choiceglobal!='2')
{
printf("\n1.Back To Menu\n");

		try1=getch();
	}
}while((try1=='1') || (choiceglobal=='2'));

fl: printf("");
}
fl2:system("cls");
decorationline1();
 printf("\n1.Back to website menu \nAny other key to Leave the program !\n");
decorationline1();
internet=getch();
}while(internet=='1');

//program ends 
//Team details
system("cls");
printf("\n");
decorationline1();
wait();
printf("\nPresented By,\n\tSandrine P joy\n");
wait();
decorationline1();
printf("\n\n\t\tThank You Everyone , For your patience !");
getch();
}

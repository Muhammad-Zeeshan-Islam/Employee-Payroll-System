#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>

//--------------------------ANSI ESCAPE CODES(USED FOR FORMATTING)--------------------------------

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

using namespace std;

int a=0;

struct Payroll
{	
	int ID;
	string employname;
	double hoursworked;
	double hourlyrate;
	double totalsalary;
	
}P[100];

//--------------------------------------FUNCTIONS TO LOAD-------------------------------------------

void LOADINGSLOWLY(string message)
{
    // will type each character after 0.05 seconds
    for(char c : message)
	{
        cout<<c;
        Sleep(1000);
    }
}
void LOADING_MENU()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    LOADING";
	for(int i=1;i<=3;i++)
	{
		LOADINGSLOWLY(".");	
	}
	
}

//------------------------------FUNCTION TO PRINT MESSAGE SLOWLY----------------------------------

void printMessageSlowly(string message)
{
    // will type each character after 0.05 seconds
    for(char c : message)
	{
        cout<<c;
        Sleep(50);
    }
}

//------------------------------------EMPLOYEE REGISTERATION---------------------------------------

void registeremployee()
{
	
	system("cls");
	int ascii=178,choice;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<BLUE<<ch;
	}
	cout<<RESET<<BOLDYELLOW<<" EMPLOYEE PAYROLL SYSTEM "<<RESET;
	for(int i=1;i<=47;i++)
	{
		cout<<BLUE<<ch;
	}
	cout<<RESET<<BOLDYELLOW<<"\n\n\n "<<ch<<ch;printMessageSlowly(" ENTER EMPLOYEE ID -> ");
	cin>>P[a].ID;
	cin.ignore();
	cout<<"\n\n\n "<<ch<<ch;printMessageSlowly(" ENTER EMPLOYEE NAME -> ");
	getline(cin,P[a].employname);
	cout<<"\n\n\n "<<ch<<ch;printMessageSlowly(" ENTER EMPLOYEE HOURS WORKED -> ");
	cin>>P[a].hoursworked;
	cout<<"\n\n\n "<<ch<<ch;printMessageSlowly(" ENTER EMPLOYEE HOURLY RATE -> $");
	cin>>P[a].hourlyrate;
	cout<<"\n\n\n "<<ch<<ch;printMessageSlowly(" EMPLOYEE REGISTERED SUCCESSFULLY ");
	a++;
}

//-----------------------------SALARY CALCULATION OF EACH EMPLOYEE--------------------------------

void employee_salary_calculator()
{
	system("cls");
	int ascii=178;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<GREEN<<ch;
	}
	cout<<RESET<<BOLDWHITE<<" EMPLOYEE PAYROLL SYSTEM "<<RESET;
	for(int i=1;i<=47;i++)
	{
		cout<<GREEN<<ch;
	}
	if(a==0)
	{
		cout<<RESET<<"\n\n\n"<<ch<<ch<<RED;printMessageSlowly("  ERROR! PLEASE REGISTER EMPLOYEE FIRST ");
	}
	for(int i=0;i<a;i++)
	{
		P[i].totalsalary=P[i].hoursworked*P[i].hourlyrate;
		cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" TOTAL SALARY OF THE EMPLOYEE ");
		cout<<P[i].employname;printMessageSlowly(" is $");
		cout<<P[i].totalsalary;
	}
}

//-----------------------------------COMPANY PAYROLL CALCULATION-----------------------------------

void company_payroll()
{
	system("cls");
	int ascii=178;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	cout<<" EMPLOYEE PAYROLL SYSTEM ";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	double total_payroll=0;
	for(int i=0;i<a;i++)
	{
		total_payroll=total_payroll+P[i].totalsalary;
	}
	cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" TOTAL PAYROLL FOR THE COMPANY IS $");
	cout<<total_payroll<<" ";
}

//------------------------------COMPARISON OF HIGHEST & LOWEST SALARY------------------------------

void highest_and_lowest_salary()
{
	system("cls");
	int ascii=178;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	cout<<" EMPLOYEE PAYROLL SYSTEM ";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	if(a==0)
	{
		cout<<RESET<<"\n\n\n"<<ch<<ch<<RED;printMessageSlowly("  ERROR! PLEASE REGISTER EMPLOYEE FIRST ");
	}
	double x;
	for(int i=0;i<a-1;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(P[j].totalsalary<P[i].totalsalary)
			{
				x=P[j].totalsalary;
				P[j].totalsalary=P[i].totalsalary;
				P[i].totalsalary=x;
			}
		}
	}
	cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" THE EMPLOYEE WITH THE LOWEST SALARY IS -> ");
	cout<<P[0].employname;
	cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" THE EMPLOYEE WITH THE HIGHEST SALARY IS -> ");
	cout<<P[a-1].employname;
}

//------------------------------------DATA UPDATE----------------------------------------------

void updatedata()
{
	system("cls");
	int ascii=178;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	cout<<" EMPLOYEE PAYROLL SYSTEM ";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	if(a==0)
	{
		cout<<RED<<"\n\n\n"<<ch<<ch;printMessageSlowly("  ERROR! PLEASE REGISTER EMPLOYEE FIRST ");
	}
	else
	{
		int id;
		cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" ENTER ID OF THE EMPLOYEE YOU WANT TO UPDATE DATA -> ");
		cin>>id;
		int found=0;
		for(int i=0;i<a;i++)
		{
			if(P[i].ID==id)
			{
				cout<<"\n\n\n"<<ch<<ch<<" ENTER NEW HOURS WORKED -> ";
				cin>>P[a].hoursworked;
				cout<<"\n\n\n"<<ch<<ch<<" ENTER NEW HOURLY RATE -> $";
				cin>>P[a].hourlyrate;
				cout<<"\n\n\n"<<ch<<ch;printMessageSlowly(" THE DATA OF THE EMPLOYEE WITH ID ");
				cout<<id;printMessageSlowly(" IS SUCCESSFULLY UPDATED ");
				found++;
				break;
			}
		}
		if(found==0)
		{
			cout<<"\n\n\n"<<ch<<ch<<RED;printMessageSlowly(" USER WITH ID ");
			cout<<id;printMessageSlowly(" NOT FOUND");
		}
	}
}

//-------------------------------DISPLAY MENU OF ALL EMPLOYEES DATA-------------------------------
void displaymenu()
{
	system("cls");
	int ascii=178,choice;
	char ch=ascii;
	cout<<"\n";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	cout<<" EMPLOYEE PAYROLL SYSTEM ";
	for(int i=1;i<=47;i++)
	{
		cout<<ch;
	}
	if(a==0)
	{
		cout<<"\n\n\n"<<ch<<ch<<RED<<"  ERROR! PLEASE REGISTER EMPLOYEE FIRST ";
	}
	else
	{
		cout<<"\n\n\n"<<ch<<ch<<" DISPLAYING ALL EMPLOYEES DATA -> ";
		int count=1;
		for(int i=0;i<a;i++)
		{
			cout<<"\n\n\n"<<ch<<ch<<" EMPLOYEE NO. "<<count<<"  ID  -> "<<P[i].ID;
			cout<<"\n\n\n"<<ch<<ch<<" EMPLOYEE NO. "<<count<<"  NAME -> "<<P[i].employname;
			cout<<"\n\n\n"<<ch<<ch<<" EMPLOYEE NO. "<<count<<"  HOURS WORKED -> "<<P[i].hoursworked;
			cout<<"\n\n\n"<<ch<<ch<<" EMPLOYEE NO. "<<count<<"  HOURLY RATE -> $"<<P[i].hourlyrate;
			count++;
		}
	}
}

//---------------------------------------- MAIN FUNCTION --------------------------------------

main()
{
	LOADING_MENU();
    p:
	    system("cls");
		int ascii=178,choice;
		char ch=ascii;
		cout<<"\n";
		for(int i=1;i<=47;i++)
		{
			cout<<BOLDYELLOW<<ch;
		}
		cout<<RESET<<BOLDGREEN<<" EMPLOYEE PAYROLL SYSTEM ";
		for(int i=1;i<=47;i++)
		{
			cout<<RESET<<BOLDYELLOW<<ch;
		}
		cout<<RESET<<BOLDCYAN<<"\n\n ->"<<" [1]   INPUT EMPLOYEE DETAIL";
		cout<<"\n\n ->"<<" [2]   CALCULATE AND PRINT THE TOTAL SALARY FOR EACH EMPLOYEE";
		cout<<"\n\n ->"<<" [3]   CALCULATE AND PRINT THE TOTAL PAYROLL FOR THE COMPANY";
		cout<<"\n\n ->"<<" [4]   PRINT EMPLOYEE WITH HIGHEST AND LOWEST SALARY";
		cout<<"\n\n ->"<<" [5]   UPDATE EMPLOYEE DATA";
		cout<<"\n\n ->"<<" [6]   DISPLAY ALL EMPLOYEES DATA";
		cout<<"\n\n ->"<<" [7]   EXIT";
		cout<<"\n\n";
		for(int i=1;i<=119;i++)
		{
			cout<<BOLDYELLOW<<ch;
		}
		cout<<BOLDCYAN<<"\n\n";printMessageSlowly("      ENTER YOUR CHOICE -> ");
		cin>>choice;
		cout<<RESET;
		switch(choice)
		{
			case 1:
				
				registeremployee();
				break;
				
			case 2:
				
				employee_salary_calculator();
				break;
				
			case 3:
				
				company_payroll();
				break;
				
			case 4:
				
				highest_and_lowest_salary();
				break;
				
			case 5:
				
				updatedata();
				break;
				
			case 6:
				
				displaymenu();
				break;
			
			case 7:
			    exit(0);
				break;
					
			default:
				cout<<BOLDRED<<"\n\n -> ";printMessageSlowly(" INVALID CHOICE");
				break;
		}		
	getch();
    goto p;
}
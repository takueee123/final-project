#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;
//void loadingbar();
//void login();
int menu();
int k=0;

int main()
{
	string name[50];
	string no[50];
	string address[50];
	string email[50];
	int choice=0;
	ofstream file("data.txt");
    choice=menu();
    do
    {
    	// Add contacts 
    	if(choice==1)
    	{
    		cout<<"\t\t\t\t\t\t Name :";
    		cin>>name[k];
    		file<<"Name: "<<name[k]<<"\t\t";
    		cout<<"\t\t\t\t\t\t Phone no :";
    		cin>>no[k];
    		file<<"Number: "<<no[k]<<endl;
    		cout<<"\t\t\t\t\t\t E-Mail :";
    		cin>>email[k];
    		file<<"E-Mail: "<<email[k]<<"\t\t";
    		cout<<"\t\t\t\t\t\t Address :";
    		cin>>address[k];
    		file<<"Address: "<<address[k]<<"\t\t"<<endl;
    		k++;
    		
		}
		
		//Diplay contacts
		else if (choice==2)
		{
			int check=0;
			for(int i=0; i<50;i++)
			{
				if(name[i]!="\0")
				cout<<"\t\t\t\t\t Name :"<<name[i]<< "      Phone :"<<no[i]<<"      E-Mail:" <<email[i]<<"     Address:" <<address[i]<<endl;
				check++;
			}
			if(check==0)
			{
				cout<<"\t\t\t\t\t No Data Available. ";
			}
		}
		
		//Search By Name
		else if(choice==3)
		{
				string temp;
			cout<<"\t\t\t\t\tName : ";
			cin>>temp;
			int check=0;
			for(int i=0;i<50;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\tName is Found\n";
cout<<"\t\t\t\t\t Name :"<<name[i]<< "      Phone :"<<no[i]<<"      E-Mail:" <<email[i]<<"     Address:" <<address[i]<<endl;					check++;
				}
				
			}
			if(check==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		// Update
		else if(choice==4)
		{
			string temp,temp2,temp3,temp4,temp5;
			cout<<"\t\t\t\t\tName : ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<50;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\tNew Name : ";
					cin>>temp2;
					cout<<"\t\t\t\t\tNew Number : ";
					cin>>temp3;
					cout<<"\t\t\t\t\tNew Email : ";
					cin>>temp4;
					cout<<"\t\t\t\t\tNew Address : ";
					cin>>temp5;
					name[i]=temp2;
					no[i]=temp3;
					email[i]=temp4;
					address[i]=temp5;
					check2++;
					cout<<"\t\t\t\t\tUpdated Successfully ";
				}
			
			}
				if(check2==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		// delete
		else if(choice==5)
		{
				string temp;
			cout<<"\t\t\t\t\tFor Delete Enter Name : ";
			cin>>temp;
			int check=0;
			for(int i=0;i<50;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\tDeleted Successfully\n";
					cout<<"\t\t\t\t\t Name :"<<name[i]<< "      Phone :"<<no[i]<<"      E-Mail:" <<email[i]<<"     Address:" <<address[i]<<endl;
					name[i]="\0";
					no[i]="\0";
					email[i]="\0";
					address[i]="\0";
					check++;
				}
			}
			if(check==0)
			{
				cout<<"\t\t\t\t\t This name is Not found in your contact list\n";
			}
		}
		
		
		choice=menu();
		
	}while(choice!=6);
	
}

int menu()
{
	system("Color A");
	cout<<"\n\n\n";
	cout<<"\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t|     PHONE BOOK APPLICATION              |\n";
	cout<<"\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t|                                         |\n";
	cout<<"\t\t\t\t\t|    [1]   Add Contacts                   |\n";
	cout<<"\t\t\t\t\t|    [2]   Display All Contacts           |\n";
	cout<<"\t\t\t\t\t|    [3]   Search by Name                 |\n";
	cout<<"\t\t\t\t\t|    [4]   Update                         |\n";
	cout<<"\t\t\t\t\t|    [5]   Delete a Contact               |\n";
	cout<<"\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t|    [6]   Exit                           |\n";
	cout<<"\t\t\t\t\t-------------------------------------------\n\n";
	
	int a;
	cout<<"\t\t\t\t\t Enter Your Operation: ",cin>>a;
	system("cls");
	return a;
}

void loadingbar()
{
	system("Color A");
	cout<<"\n\n\n\n\n";
	cout<<"\t\t\t\t\t---------------------------------\n";
	cout<<"\t\t\t\t\t---------------------------------\n";
	cout<<"\t\t\t\t\t Phone Book Application \n";
	cout<<"\t\t\t\t\t---------------------------------\n";
	cout<<" \t\t\t\tLoading ";
	char x=219;
	for(int i=0;i<=30;i++){
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(150);
		if(i>=20)
		Sleep(50); 
	}
	system("cls");
	
}

void login()
{   
     system("Color 5D");
    int a=1;
    int n,y=1122;
    int i=0;
    do{  
        cout<<"\n\n\n\n\n\n\n\n\n";
      
	    cout<<"\t\t\t\t\t\t----------------------------\n";
        cout<<"\t\t\t\t\t\t|    Enter 4-digit Pin:     |\n";
    	cout<<"\t\t\t\t\t\t----------------------------\n\n";
        cout<<"\t\t\t\t\t\t Pin: ",cin>>n;
        cout<<"\n\n";
        if(n==y){
        break;
        }
        else if(n!=y) 
        {
        cout<<"\t\t\t\t\t\tIncorrect Pin."<<endl;
        system("cls");
        }
        i++;
    }while(i<=2);
    
    
    if(n!=y){
    cout<<"\t"<<"\n | Invalid Credentials |";
     
    exit(1);
	}
    
    else if(n==y){
    cout<<"\t\t\t\t\t\t----------------------------\n";
	cout<<"\t\t\t\t\t\t|     LOGIN SUCCESSFull     |\n";
	cout<<"\t\t\t\t\t\t----------------------------\n";
	system("cls");
	loadingbar();
	system("cls");
	int a=1;
	if(a==1){
		menu();
	}
	
	}
}


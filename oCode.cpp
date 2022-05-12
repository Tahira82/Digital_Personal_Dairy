

#include <iostream>					//pre-processor directives: processor directed to use iostream library .
#include <string>					//allows the program to use the string library for the digital personal diary.
using namespace std;				//standard library of namespace is made accessible.
struct array_node					//an array has arr[i] number of nodes: struct array_node makes the structures of nodes.
{									//	A digital personal diary has many accounts saved by account numbers.
	int account_number;				//Account number has integer type value.Each personal diary account has its own saved data.
	string password;				//each account protected by a Password on it:account data made accessible.
	string name;					//name variable takes a string for Contacts.
	string number;					// number has type string to save numbers corresponding name for Contacts.
	string notes;					//Notes can save the personal points in a type string.
	string word;					//words are a part of an account saved in a Dictionary.
	string meaning;					//meaning of a word in Dictionary.
	string sentence;				//sentence of word in Dictionary.
	bool last;						//defining last part of an array_node data:0 if array ends here:1 if array is not completed yet.
	array_node()					//array_node constructor.
	{
		account_number=0;			//initializing all array_node elements
		password="0";
		name="0";
		number="0";
		notes="0";
		word="0";
		meaning="0";
		sentence="0";
		last=1;
	}
	~array_node()					//array_node destructor
	{
		account_number=-1;			//deleting array_node elements
		 password="";
		name="";
		number="";
		notes="";
		word="";
		meaning="";
		sentence="";
		last=-1;
	}
};
class diary															//class implementing digital personal diary project
{
	array_node arr[10];		//array of size 10 defined with array_node type of nodes //Max 20

public:
	
	diary()						//default constructor of class diary
	{
		arr[10];			//array declared with empty data
				
	}
	diary(int a)	//0       Default copy constructor
	{
		
		int b;
		
		array_node arr[20];
			//setting data for array location arr[1] to 20
		for(int i=1;i<=20;i++)
		{
			cin>>b;
				arr[i].account_number= b;
				bool e;
				cin>>e;
				arr[i].last= e;
		while (arr[i].last != 0)
		{
			string d;
			cin>>d;
			arr[i].password = d;
			
			arr[i].name = d;
			cin>>b;
			arr[i].number = b;
			cin>>d;
			arr[i].notes = d;
			cin>>d;
			arr[i].word = d;
			cin>>d;
			arr[i].meaning = d; 
			cin>>d;
			arr[i].sentence = d;
			cin>>e;
			arr[i].last = e;
		
			if(arr[i].last ==1)
			{
			arr[i].last = e;
			}
			else
			{
			arr[i].last = e;
			return;
			}
		}
		
		}
	}
	~diary()						//destructor of class diary
	{
		arr[1];
						
	}
	
	string user_accounts(int n,int account_number,string password)		//function makes a number of user accounts <=20(limit of diary app)
	{
		cout<<"WELCOME TO THE DIGITAL PERSONAL DIARY!!!"<<endl;
		cout<<"The standard number of accounts is ten for the digital personal diary."<<endl;
		cout<<"enter the number of accounts you want to open(max upto 20)"<<endl;
		cin>>n;
		int a;
		a = --n;
		array_node arr[10];
		if(n<=10)					//if less than or equal to 10 accounts required make an array of 10 size
		{
		for(int a=0;a<=(--n);a++)
			{
				cout<<"enter the account number and password to create account"<<endl;
				cin>>arr[1+a].account_number>>arr[1+a].password;
				cout<<"account with account number "<<arr[1+a].account_number<<" has been created and is password protected"<<endl;
			}
		}
		else					//if more than 10 accounts needed then make array of size 20
		{
			array_node arr[20];
			for(int a=0;a<10;a++)
			{
				cout<<"enter the account number and password to create account"<<endl;
				cin>>arr[1+a].account_number>>arr[1+a].password;
				cout<<"account with account number "<<arr[1+a].account_number<<" has been created and is password protected"<<endl;
			}
			for(int a=10;a<=(--n);a++)
			{
				cin>>arr[1+a].account_number>>arr[1+a].password;
				cout<<"account with account number "<<arr[1+a].account_number<<" has been created and is password protected"<<endl;
			}
			return 0;
		}
	}
	//function to store data in the accounts of diary
	int store(char x,int n,int account_number,string password,string name, string number, string notes, string word, string meaning, string sentence,bool last)
	{
		cout<<"enter 'x' if you want to store data in the digital personal diary"<<endl;
		cin>>x;
		char e;
		if(e==x)
		{
			cout<<"enter the number of accounts(<=20) in which you want to store some data"<<endl;
			cin>>n;
			int a;
			a =--n;
			for(int a=0;a<20;a++)
			{
			cin>>arr[1+a].account_number;
			cout<<"the account number of "<<a+1<<" account has been set"<<endl;
			cin>>arr[1+a].password;
			cout<<"password entered for account "<<a+1<<" and is set.Now store data for contacts;name,number,notes,dictionary;word,meaning,sentence,last"<<endl;
			cin>>arr[1+a].name>>arr[1+a].number>>arr[1+a].notes>>arr[1+a].word>>arr[1+a].meaning>>arr[1+a].sentence>>arr[1+a].last;
			if(arr[1+a].last==1)
				{
					cout<<"data set for an account"<<endl;
				}
			else 
				{
					cout<<"data set for an account"<<endl;
					return 0;
				}
			}
		}
		else
		{
			cout<<"data not to be stored"<<endl;
			return 0;
		}
	}
	//function to add the information in the accounts made
	int add(char x,int n,string account_number,string password,string k,string name,string number,string notes,string word,string meaning,string sentence,bool last)
	{
		cout<<"x to store data in the digital personal diary"<<endl;
		cin>> x;
		char e;
		e=x;
		if(e==x)			//data entered in some accounts
		{
			cout<<"enter the number of accounts(<=20) in which you want to store some data(take acc no. 3425678 and password ad34265)"<<endl;
			cin>>n;
			int a;
			a =--n;
			for(int a=0;a<20;a++)
			{
			cin>>arr[1+a].account_number;
			cout<<"the account number of "<<a+1<<" account has been set"<<endl;
			cin>>arr[1+a].password;
			cout<<"password entered for account "<<a+1<<" and is set.Now store data for contacts;name,number,notes,dictionary;word,meaning,sentence,last"<<endl;
			cin>>arr[1+a].name>>arr[1+a].number>>arr[1+a].notes>>arr[1+a].word>>arr[1+a].meaning>>arr[1+a].sentence>>arr[1+a].last;
			if(arr[1+a].last==1)
				{
					cout<<"data set for an account"<<endl;
				}
			else 
				{
					cout<<"data set for an account"<<endl;
					return 0;
				}
			}
		}
		else
		{
			cout<<"data not to be stored"<<endl;
			return 0;
		}
		cout<<"enter 'k' if you want to add data"<<endl;
		cin>>k;
		string y;
		if(y==k)			//enter additional data in the accounts made
		{
			cout<<"addition of data possible"<<endl;
			for(int c=0;c<20;c++)
			{
			int a;
			cout<<"enter the account number and password(acc no. 3425678 and password ad34265)"<<endl;
			cin>>arr[1+a].account_number>>arr[1+a].password;
			
			if((arr[1+a].account_number==3425678)&&(arr[1+a].password=="ad34265"))
			{
				cin>>arr[1+c].name>>arr[1+c].number>>arr[1+c].notes>>arr[1+c].word>>arr[1+c].meaning>>arr[1+c].sentence>>arr[1+c].last;
				cout<<"the data available now is"<<arr[1+a].name+arr[1+c].name<<" "<<arr[1+a].number+arr[1+c].number<<" "<<arr[1+a].notes+arr[1+c].notes<<endl;
				cout<<arr[1+a].word+arr[1+c].word<<" "<<arr[1+a].meaning+arr[1+c].meaning<<" "<<arr[1+a].sentence+arr[1+c].sentence<<endl;
				cout<<arr[1+a].last+arr[1+c].last<<" for account number 3425678"<<endl;
				return 1;
			}
			else
			{
				cout<<"account number or password does not match"<<endl;
				return 0;
			}
			
			}
		}
		else
		{
			cout<<"addition of data not to be implemented"<<endl;
			return 0;
		}
	}
	//function to show the data in the accounts
	void display(char p,char x,int n,int account_number,string password,string name, string number, string notes, string word, string meaning, string sentence,bool last)
	{
		cout<<"enter 'p' if you want to display the contents of an account"<<endl;
		cin>>p;
		char q;
		q=p;
		if(q==p)
		{
		cout<<"enter 'x' if you want to store data in the digital personal diary"<<endl;
		cin>>x;
		char e;
		if(e==x)
		{
			cout<<"enter the number of accounts(<=20) in which you want to store some data"<<endl;
			cin>>n;
			int a;
			a =--n;
			for(int a=0;a<20;a++)
			{
			cin>>arr[1+a].account_number;
			cout<<"the account number of "<<a+1<<" account has been set"<<endl;
			cin>>arr[1+a].password;
			cout<<"password entered for account "<<a+1<<" and is set.Now store data for contacts;name,number,notes,dictionary;word,meaning,sentence,last"<<endl;
			cin>>arr[1+a].name>>arr[1+a].number>>arr[1+a].notes>>arr[1+a].word>>arr[1+a].meaning>>arr[1+a].sentence>>arr[1+a].last;
			cout<<"the data stored in the account "<<arr[1+a].account_number<<" Contact name"<<arr[1+a].name<<" Contact number"<<endl;
			cout<<arr[1+a].number<<" notes"<<arr[1+a].notes<<" Dictionary word"<<arr[1+a].word<<" word's meaning"<<arr[1+a].meaning<<" word sentence"<<arr[1+a].sentence<<" "<<arr[1+a].last<<endl;
			if(arr[1+a].last==1)
				{
					cout<<"data set and displayed for an account"<<endl;
				}
			else 
				{
					cout<<"data set and displayed for an account"<<endl;   //displays the stored data in accounts
					return;
				}
			}
		}
		else
		{
			cout<<"data not to be stored and displayed"<<endl;
			return;
		}
		}
		else
		{
			cout<<"display not possible"<<endl;
			return;
		}
		
	}
	//function to search data of an account
	void search(char p,char x,int n,string name,string number,string notes,int v,string w)
	{
		cout<<"enter 'p' if you want to search and display the contents of an account"<<endl;
		cin>>p;				//input p if search and display required
		char q;
		q=p;
		if(q==p)
		{
		cout<<"enter 'x' if you want to store data in the digital personal diary"<<endl;
		cin>>x;				//input x if data storage required
		char e;
		if(e==x)
		{
			cout<<"enter the number of accounts(<=20) in which you want to store some data"<<endl;
			cin>>n;			//particular number of accounts selected to be re edited and storage
			int a;
			a =--n;
			for(int a=0;a<20;a++)
			{
			cin>>arr[1+a].account_number;
			cout<<"the account number of "<<a+1<<" account has been set"<<endl;
			cin>>arr[1+a].password;
			cout<<"password entered for account "<<a+1<<" and is set.Now store data for contacts;name,number,notes,dictionary;word,meaning,sentence,last"<<endl;
			cin>>arr[1+a].name>>arr[1+a].number>>arr[1+a].notes>>arr[1+a].word>>arr[1+a].meaning>>arr[1+a].sentence>>arr[1+a].last;
			cout<<"the data(contact name,contact number,notes) stored in the account "<<endl;
			cout<<arr[1+a].account_number<<" Contact name"<<arr[1+a].name<<" Contact number"<<endl;
			cout<<arr[1+a].number<<" notes"<<arr[1+a].notes<<" "<<arr[1+a].last<<endl;
			if(arr[1+a].last==1)
				{
					cout<<" data displayed for an account"<<endl;
				}
			else 
				{
					cout<<" data displayed for an account"<<endl;
					return;
				}
			}
			
				cout<<"enter the account number you want to search"<<endl;
				cin>>v;
				for(int a=0;a<20;a++)
			{
				if(v==arr[1+a].account_number)
				{
					
					cout<<"Account number matches .Now enter the password"<<endl;
					cin>>w;
					if(w==arr[1+a].password)
					{
						cout<<"password correct.The data this account contains is "<<endl;
						cout<<"the data(contact name,contact number,notes) stored in the account "<<endl;
						cout<<arr[1+a].account_number<<" Contact name"<<arr[1+a].name<<" Contact number"<<endl;
						cout<<arr[1+a].number<<" notes"<<arr[1+a].notes<<endl;
						cout<<"Required account searched and data displayed"<<endl;
					}
					else
					{
						cout<<"password incorrect"<<endl;
						return;
					}
				}
				else
				{
					cout<<"account does not exist"<<endl;
					return;
				}
			}

		}
		else
		{
			cout<<"data not to be searched"<<endl;
			return;
		}
		}
		else
		{
			cout<<"search not possible"<<endl;
			return;
		}
		return;
	}


};
		int main()				//function header
		{						//function body
			
			diary A;
			diary a[20];				//setting default values
			char x('0');
			string h("0");
			char p('0');
			A.user_accounts(1,3425678,"34265.");
			A.store('x',1,3425678,"34265.","Sultan Khalid", "0312-5674598", "*convocation,*gym", "harsh", "rude", "the king had a harsh tone", 0);
			A.add('x',1,"3425678","34265.","h","Sultan Khalid", "0312-5674598", "*convocation,*gym", "harsh", "rude", "the king had a harsh tone",0);
			A.display('p','x',1,3425678,"34265.","Sultan Khalid", "0312-5674598", "*convocation,*gym","harsh","rude","the king had a harsh tone",0);
			A.search('p','x',1,"Sultan Khalid", "0312-5674598", "*convocation,*gym",3425678,"34265.");
			cout <<A.user_accounts(1,3425678,"34265.")<<" "<<A.store('x',1,3425678,"34265.","Sultan Khalid", "0312-5674598", "*convocation,*gym", "harsh", "rude", "the king had a harsh tone", 0)<<" "<<A.add('x',1,"3425678","34265.","h","Sultan Khalid", "0312-5674598", "*convocation,*gym", "harsh", "rude", "the king had a harsh tone",0)<<" "<<endl;
			//cout<<A.search('p','x',1,"Sultan Khalid", "0312-5674598", "*convocation,*gym",3425678,"34265.")<<endl;
			for(int i=1;i<=20;i++)
			{
			cout<<p;'x'?'p': A.search('p' , 'x' , 1 , "Sultan Khalid" , "0312-5674598", "*convocation, *gym" , 3425678 , "34265.");
				
			}
			diary*b = &A;
			
			cout << &A;				//returning values of the struct according to the functions of class
		
			system("pause");		//stills the screen
			return 0;				//returns 0 to the console if the program runs successfully
		}

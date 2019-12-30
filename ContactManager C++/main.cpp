#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void sortAscending(string names[10],long int phoneNos[10])
{
	string tname; 
	long int tphone;
	
	for(int i=0;i<10-1;i++) 
	{
		for(int j=0;j<10-i-1;j++) 
		{
			if(names[j]>names[j+1]) 
			{
				tphone=phoneNos[j];tname=names[j]; 
				phoneNos[j]=phoneNos[j+1];names[j]=names[j+1];
				phoneNos[j+1]=tphone;names[j+1]=tname;
			}
		}
	}
}

void sortDescending(string names[10],long int phoneNos[10])
{
	string tname; 
	long int tphone;
	
	for(int i=0;i<10-1;i++) 
	{
		for(int j=0;j<10-i+1;j++) 
		{
			if(names[j]<names[j+1]) 
			{
				tphone=phoneNos[j];tname=names[j]; 
				phoneNos[j]=phoneNos[j+1];names[j]=names[j+1];
				phoneNos[j+1]=tphone;names[j+1]=tname;
			}
		}
	}
}


int search(string names[10],string sname)
{
	for(int i=0;i<10;i++) 
	{
		if(names[i]==sname)
			return i; 
	}
	return -1; 
}


int main(int argc, char** argv)
{
    char ch;
    string names[10];
    long int phoneNos[10];
    cout << "Contact Manager" << endl;
    
    do
    {
    cout <<"Enter a selection:\n 1. Add Names \n 2. Sort Ascending \n 3. Sort Descending \n 4. Print All \n 5. Search \n 0. Exit \n\n";
    cin >> ch;
    
    switch(ch)
    {
        case '0':
            return 0;
        case '1': 
            cout<<"Enter 10 contact details(Name and Phone no.) :\n ";
            for(int i=0;i<10;i++)
		cin>>names[i]>>phoneNos[i];
            break;
        
        case '2': 
            sortAscending(names,phoneNos); 
            cout<<"\nContacts after sorting by name : ";
            cout<<"\nName\tPhone no";
            for(int i=0;i<10;i++)
		cout<<"\n"<<names[i]<<"\t"<<phoneNos[i] <<"\n";
            break;
            
        case '3': 
            sortDescending(names,phoneNos); 
            cout<<"\nContacts after sorting by name : ";
            cout<<"\nName\tPhone no";
            for(int i=0;i<10;i++)
		cout<<"\n"<<names[i]<<"\t"<<phoneNos[i] << "\n";
            break;
        
        case '4':
            cout << "All contacts" << endl;
            for(int i=0;i<10;i++)
            cout << "\n" << names[i] << "\t" << phoneNos[i];
        
        case '5':
            string sname;
                cout<<"\nEnter name to searched : ";
                cin>>sname; 
                {
                    int idx=search(names,sname); 
                    if(idx!=-1) 
                        cout<<"\n"<<sname<<"'s telephone number : "<<phoneNos[idx];
                    else
                        cout<<"\n"<<sname<<" is not found in Contacts!! ";
                }
            break;
    }
    }
    while (ch != 0);
 	
}
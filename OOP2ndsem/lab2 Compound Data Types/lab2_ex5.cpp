#include <iostream>
#include <string>
#include <fstream>

//MADE BY MATEUSZ DRYGIEL 2019 ECE//

using namespace std;
struct loan
{
string name;
string surname;
char gender[2];
int age;
union //implementing the anonymous union for the amount of loan//
{
	double amount;
	float income;

};

};
void outputinformation(loan &loaninfo)
{
    
     cout<< "Name:"<<loaninfo.name<<"\n";
     cout<<"Surname:"<<loaninfo.surname<<"\n";
   	 cout<<"Amount of loan:"<<loaninfo.amount<<"\n";
     cout<<"Age:"<<loaninfo.age<<"\n";
     cout<<"Income:"<<loaninfo.income<<endl;
     cout<<"Gender:"<<loaninfo.gender<<endl;

}

void giveinformation(loan &loaninfo)			//made the input/output as function
{										//so that the main is less 'crowded' and
										//easier to read for any user//
    cin.ignore();
    cout<<"Name:";
    getline(cin,loaninfo.name);
    cout<<"Surname:";
    getline(cin,loaninfo.surname);
    cout<<"Gender[M or F] :";
    cin>>loaninfo.gender;
    cin.ignore();
    cout<<"Age:";
    cin>>loaninfo.age;
    cout<<"\n";
    cout<<"Amount of loan:";
    cin>>loaninfo.amount;
  	cout<<"Amount of income:";
  	cin>>loaninfo.income;
}

int main()
{
   ofstream fout;
   fout.open("practicetext.txt");					//declaring the file to output 				
   int size;											//later information from arrays//
   string line;
   cout<<"Input amount of loans [between 2 and 10]: ";
   cin>>size;    
   loan*lon=new loan[size];
   if(size>=2&&size<=10){ loan*lon=new loan[size];}
   else
    {
        cout<<"Try again. "<<endl;
        cout<<"Input size of array [between 2 and 10]: ";
        cin>>size;			   	   	   	   	   	   	 	//creating the array of struc//
    	loan*lon=new loan[size];
	}
   cout<<"Describe the loan in more detail below:\n";
   for(int i=0;i<size;i++)
    {
        cout<<"\n Loan number"<<i+1<<"\n\n";
        giveinformation(lon[i]);						//giving info, calling func//
    }
   cout<<"\n\n\nLoan information displayed:\n";
   for(int i=0;i<size;i++)
    {
 	    cout<<"\n Loan #["<<i+1<<"]\n\n";
		outputinformation(lon[i]);						//displaying the info given//
    }
    
    cout<<"\n\n THE INFO HAS BEEN SAVED TO AN EXTERNAL FILE!!\n\n"<<endl;
    
    
    //the information below is what is saved to the external file://
   fout<<"\nThe information about the loan displayed for the user is transferred to the file... \n\n";
    for(int i=0;i<size;i++)
    {
        fout<<"\n\n Loan #["<<i+1<<"]\n\n";
        fout<<"Name:"<<lon[i].name<<"\n";
        fout<<"Surname="<<lon[i].surname<<"\n";
        fout<<"Age="<<lon[i].age<<"\n";
        fout<<"Amount of loan="<<lon[i].amount<<"\n";
    }


   fout.close();
   delete[]lon;               //deleting and making sure there is no memory leak//
   return 0;
}


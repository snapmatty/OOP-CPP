#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


struct structure
{
	int svar_int;
	long svar_long;
	double svar_double;
};

union unname
{
	int uvar_int;
	long uvar_long;
	double uvar_double;
};

void address(structure s,unname u)
{
	cout<<"This is the address of struct int"<<endl;
    cout<<hex;
    cout<<&s.svar_int<<endl;
    cout<<"This is the address of struct long"<<endl;
    cout<<hex;
    cout<<&s.svar_long<<endl;
    cout<<"This is the address of struct double"<<endl;
    cout<<hex;
    cout<<&s.svar_double<<endl;
    
    cout<<"This is the address of union int"<<endl;
    cout<<dec;
    cout<<&u.uvar_int<<endl;
    cout<<"This is the address of union long"<<endl;
    cout<<dec;
    cout<<&u.uvar_long<<endl;
    cout<<"This is the address of union double"<<endl;
    cout<<dec;
    cout<<&u.uvar_double<<endl;
            
}

int main()
{
 structure s;
 s.svar_int=2;
 s.svar_long=20;
 s.svar_double=2000000;

 unname u;
 u.uvar_int=4;
 u.uvar_long=40;
 u.uvar_double=4000000;

 address(s,u);
		
	return 0;
}

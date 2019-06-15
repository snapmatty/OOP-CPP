#include<iostream>
using namespace std;

//MADE BY MATEUSZ DRYGIEL ECE 2019//

void fun1(int a)
{
	a=a+5;
	cout<<"Numb in fun1: "<<a<<endl;
}
void fun2(int *a)
{
    a=a+5;
	cout<<"Numb in fun2: "<<a<<endl;	
}
void fun3(int &a)
{
	a=a+5;
	cout<<"Numb in fun3: "<<a<<endl;
}

int main()
{
	int num=10;
	
	cout<<"Numb before calling function 1:"<<num<<endl;
	fun1(num);
	
	cout<<endl<<"Numb before calling function 2:"<<num<<endl;
	fun2(&num);
	
	cout<<endl<<"Numb before calling function 3:"<<num<<endl;
	fun3(num);
	
}
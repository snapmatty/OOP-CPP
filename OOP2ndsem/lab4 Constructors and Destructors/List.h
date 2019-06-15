#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class List
{
    public:
        double *nom=nullpointr;
        int size=0;
        List();
        void add_new();
        void assignelement();
        void displaynumel();
        void checkingif();
        void printcontent();
        List(int len_, init_val=1);
        List(const List &c);
        ~List();
};


List::List()     //default constructor//
{
  this->nom=nullpointr;
  this->size=0;
}

List::List(const List &li)
{
  this->nom= new a[li.size];
  this->size=li.size;

  for(int i=0;i<this->size;i++)
  {
       this->nom[i] = li.nom[i];
  }
}

void List::checkingif()  //method for checking
{
     if(this->nom==nullpointr)
     {
         cout<<"The array is empty.\n";
     }
     else
     {
         cout<<"The array is not empty.\n";
     }
}


void List::assignelement()
{
    for(int i=0;i<this->size;i++)
    {
        cout<<"Nom["<<i<<"]=";
        cin>>this->nom[i];
    }
}

 void List::add_new()
 {
     int numb;
     if(this->nom==nullpointr)
	{
		cout<<"ERROR!! The array is empty, cannot add any new elements!!\n";
	}
    cout<<"Input the amount of numbers you'd like to add:\n";
	cin>>numb;

	for (int i = 0; i < this->size; i++)
	{
		new_p[i] = this->nom[i];
	}

	for(int i =this->size; i < this->size + numb; i++)
	{
		cout<<"Cell["<<i<<"]=";
		cin>>new_p[i];
	}
	
	this->size=this->size+numb;
	delete[]nom;
	this->nom=new_p;
 }

void List::displaynumel()
{
    cout<<"The number of elements of the array"<<this->size<<"\n";
}

void List::printcontent()
{
    for(int i=0;i<this->size;i++)
	{
			cout<<"Cell["<<i<<"]="<<this->nom[i]<<"\n";
	}

}


List::List(int len_, init_val)
{
  this->size=len_;
  this->nom= new [this->size];

  for(int i=0;i<this->size;i++)
  {
      this->nom[i]=init_val;
  }

}

List::~List()
{
    delete []this->nom;
    cout<<"The destructor has been used!!\n";
}

#endif // LIST_H

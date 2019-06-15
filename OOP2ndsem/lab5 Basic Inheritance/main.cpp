#include <iostream>
#include <string>
using namespace std;

class Animal
{
	
     public:
        string species;
        int weight, height;

        Animal(): species("Lion"), weight(240), height(175) { }
	 //default constructor//
        virtual void display()=0;
       	virtual void inZoo()=0;
        
};

//Lion class is derived from base Animal.
class Lion: public Animal
{
    public:

       void display()
		{
             cout << "This animal is a: " << species << endl;
             cout << "It weights: " << weight <<" kilograms"<<endl;
             cout << "It is: "<<height<<" centimeters tall"<<endl;
          
             
        }
         void huntDown() { cout << "This animal is a predator and hunts for food.\n\n"<<endl;}
 	     void inZoo() {cout<<"This animal is currently not present at Wroclaw's ZOO"<<endl;}
  Lion():Animal(){ }
       
};

// Giraffe class is derived from base class Person.
class Giraffe : public Animal
{
    public:
       void eatGrass() { cout << "This animal is herbivorous, it doesn't eat meat.\n\n"<<endl;}
       void display() {
             cout << "This animal is a: " << species << endl;
             cout << "It weights: " << weight <<" kilograms"<<endl;
             cout << "It is: "<<height<<" centimeters tall"<<endl;
             
        }
      void inZoo()
	  {cout<<"This animal is currently present at Wroclaw's ZOO"<<endl;}  
	Giraffe():Animal(){}   	
};

int main()
{
cout<<"======================================================================="<<endl;
cout<<"INFORMATION ABOUT ANIMALS: \n\n";	
	
    
     
     

    Giraffe giraffe;
     
 	Lion lion;
    Animal * Lion_ptr=&lion;
    Lion_ptr->inZoo();
    Lion_ptr->display();
  
   

     return 0;
}
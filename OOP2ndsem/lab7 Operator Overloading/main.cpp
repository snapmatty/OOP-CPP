#include <iostream>
#include "Rectangle.h"
using namespace std;

	int main(int argc, const char * argv[]) 
	{
	    
		cout << "Welcome to program of LAB7!!!\n";
		
	    Rectangle first(7,5),second(4,9);
	    Rectangle third= first+second;
	    cout<<third.getlength()<<endl;
	    
	    if (first<second)
		{
	        cout<<"This rectangle is smaller!!"<<endl;
	    }
		else 
		{
	        cout<<"This rectangle is larger!!"<<endl;
	    }
	    if (first>second)
		{
	        cout<<"This rectangle is larger!!"<<endl;
	    }
		else
        {
	        cout<<"This rectangle is smaller!!"<<endl;
	    }
	    
	    return 0;
	}

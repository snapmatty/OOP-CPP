#include<iostream>
using namespace std;

//MADE BY MATEUSZ DRYGIEL ECE 2019//
int main()
{
        int x;
        int y,z, freerow = 1;
        char answer;
        
	 	 do
	 	 	 {
				 cout<<"\n Enter the height of your lozange figure [between 3 and 15]: ";
	   			 cin>>x;
	 	
	 	 	 	 if(x>=3 && x<=15)
				{
        		freerow=x-1;
        			for(y=1;y<=x;y++)
        				{
                			for(z=1;z<=freerow;z++)
    							cout<<" ";
    							freerow--;
                			for (z=1;z<=2*y-1;z++)
                        		cout<<"*";
  	   	                		cout<<"\n";
        	} 
				freerow=1; 
        		for(y=1;y<=x-1;y++)
        			{
                		for(z=1;z<=freerow;z++)
                     	 cout<<" ";
    	             	 freerow++; 
                		for(z=1;z<= 2*(x-y)-1;z++)
                     	 cout<<"*";
		 	         	 cout<<"\n";            
        	}
        	cout<<endl<<"Continue? YES [Y] / NO [any key]"<<endl;
        	cin>>answer;
		}
		else
		{
			cout<<"The input height is incorrect!!!\n";
			cout<<"Try again. Input height: ";
			cin>>x;
			
			 if(x>=3 && x<=15)
				{
        		freerow=x-1;
        			for(y=1;y<=x;y++)
        				{
                			for(z=1;z<=freerow;z++)
    							cout<<" ";
    							freerow--;
                			for (z=1;z<=2*y-1;z++)
                        		cout<<"*";
  	   	                		cout<<"\n";
        				} 
				freerow=1; 
        		for(y=1;y<=x-1;y++)
        			{
                		for(z=1;z<=freerow;z++)
                     	 cout<<" ";
    	             	 freerow++; 
                		for(z=1;z<= 2*(x-y)-1;z++)
                     	 cout<<"*";
		 	         	 cout<<"\n";            
        			}
  				cout<<endl<<"Continue? YES [Y] / NO [any key]"<<endl;
  			    cin>>answer;
			
				}
	    }
		
     	 }
	   	 while(answer=='Y' || answer=='y');		

	return 0;
}

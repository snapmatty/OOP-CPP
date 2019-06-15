#include <iostream>
#include "Tv.h"


   
int main(int argc, const char * argv[]) 
{
    
     std::cout << "Welcome to program of LAB7!!!\n";
  
    Tv television;
    television.onoff();
    television.chandown();
    television.chanup();
    if (television.ison()){
       std::cout<<"The TV is turned on!\n";
    }
	else
	{
       std::cout<<"The TV is turned off!\n";
    }
    television.set_input();
    television.set_mode();
    television.voldown();
	television.volup();
	television.settings();
	
	
   
    
    
    return 0;
}
    
//The program doesn't seem to be completely 'competent' and needs still improvement//
//When I divided it TV and REMOTE into separate CPP and H files I couldn't input the method of setting the channel anymore//      
    
    
    
    
    
    
    
    
    
    
    
    

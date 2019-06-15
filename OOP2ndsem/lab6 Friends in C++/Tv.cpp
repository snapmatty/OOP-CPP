#include "Tv.h"
#include <iostream>
using namespace std;


void Tv::onoff()
{
	if(state==On) 
	{
		state=Off;
	}
	else
    {
		state=On;
	}
}

bool Tv::ison()
{
	if(state==On)
	{
       cout <<"Tv is ON!!"<<endl;	
		return true;
	}
	else
	{
        cout<<"Tv is OFF!!"<<endl;
	    return false;	
	}
	
}

bool Tv::volup()
{

		if(volume==20)
		{
			cout<<"Volume:"<<volume<<endl;
		}
		else if(volume<20)
		{
			volume++;
			cout<<"Volume:"<<volume<<endl;
		}
		
}
								//the set down and up are just reflections of each other
								//one is setting up with the max value, the other setting down with min//
bool Tv::voldown()
{
	if(volume==0)
	{
		   cout<<"Volume:"<<volume<<endl;	
	}	
	else if(volume>0)
	{
		volume--;
		cout<<"Volume: "<<volume<<endl;
	}

}

void Tv::set_mode()
{
	if(mode==Cable)
	{
		mode=Antenna;
		cout<<"Mode is set to ANTENNA!"<<endl;
	}
	else if(mode==Antenna)
	{
		mode=Cable;
		cout<<"Mode is set to CABLE!"<<endl;
	}

}

void Tv::set_input()
{
	if(input==TV)
	{
		input=DVD;
		cout<<"The input is set to DVD."<<endl;
	}
	else if(input==DVD)
	{
		input=TV;
		cout<<"The input is set to TV."<<endl;
		
	}
	
}				
												//same rule applies for chanup and chandown//
void Tv::chanup()								//they are just mirror images so to say.//
{
	if(channel==maxchannel)
	{
		cout<<"The channel is set to:"<<channel<<endl;
	}
	else if(channel<maxchannel)
	{
		channel++;
		cout<<"The channel is set to: "<<channel<<endl;
	}
	

}

void Tv::chandown()
{
	if(channel==0)
	{
		cout<<"The channel is set to:"<<channel<<endl;
	}
	else if(channel>0)
	{
		channel--;
		cout<<"The channel is set to: "<<channel<<endl;
	}
	

}

void Tv::settings() const {
    cout<<"//////////THE SETTINGS MENU//////////"<<endl;
    cout<<"1. ON/OFF "<<endl<<"2. Is On "<<endl<<"3. Set input "<<endl;
    cout<<"4. Set mode "<<endl<<"5. Vol Up "<<endl<<"6. Vol Down "<<endl<<"7. CHAN Up "<<endl;
    cout<<"8. CHAN Down "<<endl;
}




	
	


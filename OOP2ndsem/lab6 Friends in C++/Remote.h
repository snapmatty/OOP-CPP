#ifndef REMOTE_H_
#define REMOTE_H_

class Remote: public Tv
{
	public:
		void Onoff(Tv &x) {x.onoff();}
		void Chanup(Tv &x) {x.chanup();}
        void Chandown(Tv &x) {x.chandown();}
        void Volup(Tv &x) {x.volup();}
        void Settings(Tv &x) {x.settings();}
        void Set_Mode(Tv &x) {x.set_mode();}
        void Set_input(Tv &x) {x.set_input();}
        void Voldown(Tv &x) {x.voldown();}
        void Set_chan(Tv &tv1);
        
	
	
	
};

#endif
#ifndef TV_H_
#define TV_H_
#include "Tv.h"
class Tv
{
		public:
			enum {Off=0, On=1};
			enum {MinVal, MaxVal=20};
			enum {Antenna=1, Cable=0};
			enum {TV=0, DVD=1};
			
			Tv(int s= Off, int mc =220) : state(s), volume(5),
			maxchannel(mc), channel(2), mode(Cable), input(TV) {}
			void onoff();
			bool ison();
			bool volup();
			bool voldown();
			void chanup();
			void chandown();
			void set_mode();
			void set_input();
			void settings() const;
			friend class Remote;
		private:
			int state;
			int volume;
			int maxchannel;
			int channel;
			int mode;
			int input;
				
};

#endif




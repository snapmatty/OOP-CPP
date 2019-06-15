#include "Tv.h"
#include "Remote.h"
#include <iostream>
using namespace std;





void Remote::Set_chan(Tv &tv1){
    cout<<"Pick a channel: ";
    cin>>tv1.channel;
    while(tv1.channel>220|| tv1.channel<0){
        cout<<"The channel must be from range (0-220)";
        cin>>tv1.channel;
    }
    cout<<endl<<"CHAN: "<<tv1.channel<<endl;
}

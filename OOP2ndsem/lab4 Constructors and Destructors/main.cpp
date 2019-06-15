//THE PROGRAM IS STILL IN CONSTRUCTION IT LACKS A MENU AND PROPER POLISH IN HEADER FILE!!//

#include <iostream>
#include <List.h>
#include <stdlib.h>

using namespace std;

int main()
{
     int input_size;
      
     cout<<"Welcome to program of lab4!!\n";

     cout<<"Enter the size of the array:\n";
     cin>>input_size;

     List4 object1(input_size,2);
     cout<<"\n The initial values:\n";
     object1.printcontent();
     object1.checkingif();
     object1.assignelement();
     object1.add_new();
     object1.displaynumel();
     object1.printcontent();

     
    return 0;
}


/*
int main()
{
	cout<<"Welcome to program of lab4!!"<<endl;
	
    int answer;
    bool keepLooping = true;

    while (keepLooping)
    {
        cout << "Pick a choice from the list:  ";
        cin >> answer;

        menu(answer);

        if (answer < 1 || answer > 5)
        {
            keepLooping = true;
        }
		else
        {
            keepLooping = false;
        }
    }
}

int menu(int answer)
{
    switch (answer)
    {
        case 1:
            
}
*/


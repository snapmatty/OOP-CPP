#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle3 crcl1;

    Circle3 crcl2("yellow", 8);

    Circle3 crcl3;


    crcl1.description();
    crcl2.description();

    crcl3 = crcl1.compare_area(crcl2);     //comparing the circles//

    cout << "So the bigger circle is:\n";
    crcl3.description();


    int x; char option;

    cout << "Enter size of array:";
    cin >> x;

    Circle3*slot = new Circle3[x];

    for (int i = 0; i < x; i++)
    {
        cout << "To skip press 'S' on the keyboard" << endl;
        cin >> option;
        //allowing the user to skip the input, then default circle//
        if (option == 's' || option == 'S')
        {
            slot[i];
        }
        else
        {
            cout << "Enter the color #[" << i << "]" << endl; //entering the colour of each//

            string col;
            cin >> col;

            slot[i].setColor(col);


            cout << "Enter the radius #[" << i << "]" << endl; //entering rad of each//

            double r;
            cin >> r;

            slot[i].setRadius(r);

        }

        for (int i = 0; i < x; i++) //calling the function desc for each element//
        {
            slot[i].description();
        }
    }
    cin.get();
    delete[]slot; //avoiding memory leaks// 
    return 0;
}
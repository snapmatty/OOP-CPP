#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//MADE BY MATEUSZ DRYGIEL ECE 2019//

void arrinreverse(int a, float b[]);	
void showadresses(int a, float b[]);	
void valuechange(int a, float b[]);	
void dispprec(int z, float m[]);        
void savefile(int z, float m[]); 	
 
int main()
{
    int x, y;
    float*array=NULL;
    char path;
    cout<<"Input size of array [between 2 and 20]: ";
    cin>>x;
    if(x>=2&&x<=20)
    {
        array=new float[x];
    }
    else
    {
        cout<<"ERROR!! TRY AGAIN.";
        cout<<"Input size of array [between 2 and 20]: ";
        cin>>x;
         array=new float[x];
    }
    for(int i=0;i<x;i++)
    {
        cout<<"Array cell["<<i<<"]=";
        cin>>array[i];
    }
     do
    {
    cout<<"MENU==================================================="<<endl;
    cout<<"1.Array in reverse order\n";
    cout<<"2.Display elements with the same dec. precision\n";
    cout<<"3.Print addresses of elements in dec. and hex. form\n";
    cout<<"4.Change the value of an element\n";
    cout<<"5.Add 2 elements, multiply by 4 and store in file\n";
    cout<<"Please choose your option: ";
    cin>>y;

    switch(y)
    {
   		 case 1:
            arrinreverse(x, array);
            break;
   		 case 2:
           dispprec(x, array);
            break;
   		 case 3:
           showadresses(x, array);
            break;
  		  case 4:
       	   valuechange(x, array);	
            break;
  		  case 5:
           savefile(x, array); 
            break;
   		 default:
          cout<<"The choice is not available in the menu!"<<endl;
    }
	cout<<endl<<"CONTINUE? YES [Y] / NO [any key]:  ";
	cin>>path;
    }
    while(path=='y'||path=='Y');

    delete [] array;

    return 0;
}

void arrinreverse(int a,float b[])
{
	for(int i=a-1;i>=0;i--)
    {
        cout<<"Array cell["<<i<<"]="<<b[i]<<"\n";
    }
}

void showadresses(int a, float b[])
{
	for(int i=0;i<a;i++)
    {
                cout<<&b[i];
                cout<<endl<<"Address of cell ["<<i<<"] in decimal format:"<<endl;
                cout<< dec;
                cout<< (unsigned) &b[i] <<"\n";

                cout<<"Address of cell ["<<i<<"] in hexadecimal format:"<<endl;
                cout<< hex;
                cout<< (unsigned) &b[i] <<"\n";
	}
}

void valuechange(int a, float b[])
{
     int id,repnum;
    cout<<"Provide the index [id number] of the cell you would like to change the value: ";
    cin>>id;
    cout<<"Enter the number you would like to be put into this cell: ";
    cin>>repnum;
    
    for(int i=0;i<a;i++)
    {
        if(i==id)
        {
            b[i]=repnum;
        }

    }
    cout<<endl<<"After replacing the numbers this is the content of your array:\n";
    for(int i=0;i<a;i++)
    {
        cout<<"Array cell["<<i<<"]="<<b[i]<<"\n";
    }
	
}

void dispprec(int z, float m[])
{
	int precision;
	cout<<"Specify the precision: ";
	cin>>precision;
	
	for(int i=0;i<z;i++)
	{
		 //when using fixed: write floating-point values in fixed-point notation
		 cout<<fixed;
		 cout<<setprecision(precision);
		 cout<<"Array cell["<<i<<"]="<<m[i]<<endl;
	}
	
}
	
void savefile(int z, float m[])
{

	ofstream fout; //stream class to operate on files//
    float temp;
	int precision=2;
	
	fout.open("lab1ex5text.txt");
	
	for(int i=0;i<z;i++)
	{
		m[i]=(m[i]+2)*4;     //first doing the calc. before saving to file//
	}
	for(int o=0;o<z;o++)
	{
		fout<<m[o]<<" ";
	}
	for(int i=0;i<z-1;i++)
	{
		for(int q=0;q<z-1;q++)
		{
			if(m[q]<m[q+1])      //descending order of numbers line after line//
			{
				temp=m[q];
				m[q]=m[q+1];
				m[q+1]=temp;
			}
		}
	}

	
	for(int i=0;i<z;i++)     //setting the precision//
	{
		fout<<fixed;
		fout<<setprecision(precision);
		fout<<endl<<m[i]<<endl;
	}
	fout.close();	
			
}	
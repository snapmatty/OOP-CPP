#include <iostream>
using namespace std;

enum Answer
{
Yes=1,
Maybe=3,
No=0
} ;
int main ( )
{

Answer answer;
int number;

 //answer=Yes; //possible
//number=No; // possible
 // number=4+Maybe; //possible
 // answer=4+answer; //invalid, beacuse the conversion from 'int' to 'answer' is impossible
 // answer=1; //invalid
 

cout << number<<endl;
//cout << answer;
return 0 ;
}

/*Write a program to convert weight in kg to pounds 
  and dollar into rupees where user will input .;
*/

#include<iostream>
using namespace std;
int main()
{ float k;
  float p;

   cout << "Enter weight in kilo  :";;
    cin >>k;
    p=k*2.2; 
     cout<<"Weight in lbs pounds  is:" <<p<<" lbs"<<endl;
float r;
float d;
   cout<<"Please enter the ammount in Dollars $";
   cin>>d;
   
   r=d*225.2;
   
   cout<<"The amount in pkr is Rs "<<r<<endl;
    
    cout<<"The amount of dollar varies";

	return 0;
}
/*Write a program to calculate volume of 
a cube where user will input side as an input.;*/

#include<iostream>
using namespace std;

int main()

{ int l;
  int w;
  int h;
  int f;
  
  cout<<"Please enter length in cm :";
  cin>>l;
  
  cout<<"Please enter width in cm :";
  cin>>w;
  
  cout<<"Please enter height cm :";
  cin>>h;

    
f=l*w*h;
cout<<"\n \nThe tatal volume is :"<<f;


	return 0;
}
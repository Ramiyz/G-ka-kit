/*Write a program to calculate the area 
of a circle where radius is given as input by user.*/

#include<iostream>
using namespace std;

int main()

{ float const PI=3.1415;
  int r;
  int a;
  
  cout<<"Please enter radius of circle :";
  cin>>r;
  
 a=PI*r*r;
  
   cout<<"The area of the circle is "<<a<<"cm";
 
	return 0;
}
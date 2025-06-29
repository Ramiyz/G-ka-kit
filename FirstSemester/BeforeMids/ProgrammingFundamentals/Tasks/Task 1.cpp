/*Write a C++ Program to calculate total cost based on the given 
quantity and price. Quantity and price should be taken as input from user.*/

#include<iostream>
using namespace std;

int main()

{ int q,p,t;

  cout<<"Plese enter the quantity in kilos";
  cin>>q;
  cout<<"Please enter the price of one kilo of quantity";
  cin>>p;
  
  t=q*p;
   cout<<"Total cost"<<t<<endl;


	return 0;
}
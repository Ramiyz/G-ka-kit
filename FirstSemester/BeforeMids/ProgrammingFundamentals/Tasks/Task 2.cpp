/*Write C++ program that inputs the date of birth of 
a user and calculate the current age of a user.
 The calculated age is displayed on screen*/

#include<iostream>
using namespace std;

int main()

{ int  a,y,m,d,c=2023,t;

	 cout << "Enter your date of birth  (DD): ";
    cin >>y;
    
   cout << "Enter your birth month (MM): ";
    cin >>m;
    
   cout << "Enter your birth year (YYYY): ";
    cin >>a;
  
     t=c-a; 
     
     cout<<"Current age "<<t;
    
 

	return 0;
}
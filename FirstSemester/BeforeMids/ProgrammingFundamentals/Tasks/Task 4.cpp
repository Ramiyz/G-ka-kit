/*Write a program to convert kilometer into meter where user will input distance 
      in kilometer and the program will convert distance into meters.;
*/
#include<iostream>
using namespace std;

int main()

{ double k,m;

  cout<<"************************************************"<<endl;
  cout<<"***************Distance Conversion***************"<<endl;
  cout<<"************************************************"<<endl;

   cout << "Enter yourdistance in kilo meter :";;
    cin >>k;
    
  
    m=k*1000; 
     
     cout<<"Current distance in meter is in  :"<<m<<"m";
    
 
 



	return 0;
}
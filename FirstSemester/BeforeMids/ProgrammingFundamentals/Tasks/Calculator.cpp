/*Write C++ program that genrates a calculator*/

#include<iostream>
#include<math.h>
using namespace std;

int main()

{
  
  int row;
  int colums;
  
  cout<<"Enter the Number of rows";
  cin>>row;
  
  cout<<"Enter the number of colums";
  cin>>colums;
  
  for(int i=1;i<=row;i++){
  	for(int j=1;j<=colums;j++){
  		cout<<"*";
	  }
	  cout<<endl;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
return 0;
}
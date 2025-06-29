/*Randome event genrator or randome event */
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int randno= rand() %4+1;
	
	switch(randno){
		
		   case 1:cout<<"You won a Quran";
		   break;
		     case 2:cout<<"You won a Lunch";
		   break;
		     case 3:cout<<"You won a t-shirt";
		   break;
		     case 4:cout<<"You won a Poster";
		   break;
		     case 5:cout<<"You won a Diary";
		   break;
		     case 6:cout<<"You won a Glass cocacola";
		   break;
		
		default:
			cout<<"Sorry no luck"; 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
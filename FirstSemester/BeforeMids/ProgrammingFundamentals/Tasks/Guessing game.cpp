#include<iostream>
#include<ctime>
int main()
{
	int num;
		int guess;
	int tries;
	
	srand(time(NULL));
	num = (rand() % 100) + 1;
	
	std::cout<<"************The guessing number game**************\n";
	
	
	do{
		std::cout<<"Please enter a number between 1 and 100 \n";
		std::cin>>num;
		
		if(guess>num){
			std::cout<<"Too High\n";
		}
		
		else if(guess<num){
			std::cout<<"Too Low \n";
		}
		
		else
		std::cout<<"Correct! The number of tries were"<<tries<<"\n";
		
		
	
		
	}	while(guess !=num);
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

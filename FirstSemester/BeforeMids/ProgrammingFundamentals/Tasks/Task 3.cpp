/*Write a program to convert temperature in Fahrenheit to temperature in Celsius 
•	C=(F-32)8*5/9;
*/
#include<iostream>
int main()

{ char unit;
  int temp;
std::cout<<"********************Temperature Conversion***************\n";
 std::cout<<"C for Celcius\n";
 std::cout<<"F for Farenheit\n";
 std::cout<<"Please enter a unit in which you want to convert C or F\n";
 std::cin>>unit;
 if(unit == 'F' || unit == 'f'){
 	std::cout<<"Please enter the temperature in celcius\n";
 	std::cin>>temp;
 	
   temp= (1.8 * temp) + 32.0;
   std::cout<<"Tempreature is "<<temp <<"F \n";}
 else if(unit == 'C' || unit == 'c'){
 	std::cout<<"Please enter the temperature in Farenheit\n";
 	std::cin>>temp;
 	
 	temp= (temp - 32) / 1.8;
 	std::cout<<"Tempreature is  "<<temp <<"C \n";}
else
	std::cout<<"Please ente C or F";

	return 0;
}
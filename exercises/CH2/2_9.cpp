/* These programs are written on top of a automatic template */

#include <iostream>
int main(){

	int num1 = 0, num2 = 0;
	std::cout<<"Enter two numbers:"<<std::endl;
	std::cin>>num1;
	std::cin>>num2;

	if(num1>num2){
		std::cout<<num1<<" is the highest"<<std::endl;
	} else {
		std::cout<<num2<<" is the highest"<<std::endl;
	}
	return 0;
}


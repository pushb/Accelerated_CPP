/* These programs are written on top of a automatic template */
// Using EOF to take input.
#include <iostream>
using std::endl;
int main(){

	std::string str1;
	std::cout<<"Enter your friends names.."<<endl<<"Press Ctrl+D to stop"<<endl;
	while(std::cin>>str1){
		std::cout<<"Added "<<str1<<endl;
	}
	std::cout<<"Good Bye.."<<endl;
	
	return 0;
}


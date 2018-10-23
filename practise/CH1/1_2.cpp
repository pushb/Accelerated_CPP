#include <iostream>
#include <string>
int main() {

	std::string name;
	std::cout<<"Enter your name"<<std::endl;
	std::cin >> name;
	std::string message( "Welcome ..." + name );
	std::string banner(message.size()+2, '*');

	std::cout<<banner<<std::endl;
	std::cout<<message<<std::endl;
	std::cout<<banner<<std::endl;

return 0;
}

/* These programs are written on top of a automatic template */

#include <iostream>
#include <iomanip>
int main(){

	double num1 = 1233.123456789;
	double num2 = 90.87654321;
	double num3 = 3.1456723;
	int pre_prec = std::cout.precision();
	std::cout<<"Current precission is "<<pre_prec<<std::endl;;
	std::cout<<num1<<std::endl;

	std::cout<<"Changing the precission to 3"<<std::endl;
	std::cout<< std::setprecision(3)<<num1<<std::endl;
	std::cout<< std::setprecision(3)<<num2<<std::endl;
	std::cout<< std::setprecision(3)<<num3<<std::endl;
	return 0;
}


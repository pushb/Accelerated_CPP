/* These programs are written on top of a automatic template */

#include <iostream>
int main(){

	int i = 0;
	int prod = 1;

	for( i = 1; i <= 10; i++){
		prod = prod * i;
	}
	std::cout<<prod<<std::endl;
	return 0;
}


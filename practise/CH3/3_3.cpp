/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
int main(){

	std::string str1;
	int i;
	str1= "pavan kumar";
	std::cout << str1<< std::endl<<str1.size()<<std::endl;

	std::vector<std::string> vect1;
	std::cout<<vect1.size();
	std::cout<<"Give me some names"<<std::endl;
	while(std::cin>>str1){
		vect1.push_back(str1);
	}

/*	std::cout<<"Size of vector is: "<<vect1.size();
	std::cout<<"starts with: "<<vect1.begin();
	std::cout<<"ends with: "<<vect1.end();
*/
	std::cout<<"Which no of person do you want?"<<std::endl;
	i = 2;
	std::cin>>i;

	if(i <vect1.size()){
		std::cout<<"it is: "<<vect1[i];
	}
	
	return 0;
}


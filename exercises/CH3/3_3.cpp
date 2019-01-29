/* These programs are written on top of a automatic template */

#include <iostream>
#include <algorithm>
#include <vector>
int main(){

	std::string str1;
	std::vector <std::string> vect1;
	std::cout << "Tell me some words and i will tell yow how many occurances it has in your list"<<std::endl;
	while(std::cin>>str1){
		vect1.push_back(str1);
	}
	
	std::sort(vect1.begin(), vect1.end());

	int c  = 1;
	for(int i = 0; i < vect1.size(); i ++){
		if(i+1 <= vect1.size() && vect1[i] == vect1[i+1]){
			c++;
			continue;
		}else{
			std::cout<<vect1[i]<<" "<<c<<std::endl;
			c= 1;
		}
	}
	
	

	return 0;
}


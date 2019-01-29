/* These programs are written on top of a automatic template */

#include <iostream>
#include <algorithm>
#include <vector>
int main(){

	std::string str1;
	std::vector <std::string> vect1;
	std::cout << "Tell me some words and i will tell what is large and short"<<std::endl;
	while(std::cin>>str1){
		vect1.push_back(str1);
	}
	
	std::sort(vect1.begin(), vect1.end());
	
	int max_size = vect1[0].size();
	int min_size = vect1[0].size();
	int min_index = 0;
	int max_index = 0;

	int c  = 1;
	for(int i = 0; i < vect1.size(); i ++){
		if(vect1[i].size() < min_size){
			min_size = vect1[i].size();
			min_index = i;
		}
		if(vect1[i].size() > max_size){
			max_size = vect1[i].size();
			max_index = i;
		}
	}

	std::cout<<"Biggest string:"<<vect1[max_index]<<std::endl;	
	std::cout<<"Smallest string:"<<vect1[min_index]<<std::endl;	
	return 0;
}


/* These programs are written on top of a automatic template */
// I know that this is a crappy program. because i am not in my correct mind while doing this. please excuse me.
#include <iostream>
#include <algorithm>
#include <vector>
int main(){

	std::vector<int> vect1;
	int num;
	std::cout<<"Enter numbers"<<std::endl;
	while(std::cin>>num) {
		vect1.push_back(num);
	}

	std::cout<<"The len of vector:"<<vect1.size()<<std::endl;
	std::sort(vect1.begin(), vect1.end());

	std::cout<<"The contents of vector:";
	for (int i =0; i< vect1.size(); i ++){
		std::cout<<vect1[i]<<std::endl;
	}
	

	int rem = 0;
	int size_q =  (vect1.size() / 4) ;
	rem = vect1.size() - ( (vect1.size() / 4) * 4);

	std::cout<<rem<<std::endl;

	int i = 0, c =0;
	int size_p = size_q +1;
	for ( i = 0; i < rem; i ++){
		std::cout<<"Quadrant "<<i<<std::endl;
		for(int j = 0; j <size_p; j++, c++){
			std::cout<<vect1[c]<<std::endl;
		}
	}
	size_p = size_q ;
	for(i = rem; i < 4; i++){
		std::cout<<"Quadrant "<<i<<std::endl;
		for(int j = 0; j <size_p; j++, c++){
			std::cout<<vect1[c]<<std::endl;
		}
	}

	return 0;
}


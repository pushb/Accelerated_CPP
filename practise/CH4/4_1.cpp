/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
#include <algorithm>

int find_median(std::vector <int>);

int main(){

	std::vector <int> vect1;
	int val, med = 0;
	std::cout<<"Enter student marks:"<<std::endl;
	while(std::cin>>val){
		vect1.push_back(val);
	}

	sort(vect1.begin(), vect1.end());
	
	std::cout<<"Median: "<<find_median(vect1)<<std::endl;
	
	
	return 0;
}

int find_median(std::vector <int> vect2){

	int mid_index, vect2_size, vect2_mid;
	vect2_size = vect2.size();
	vect2_mid = vect2_size / 2;
	
	return vect2_size%2 == 0 ? (vect2[vect2_mid -1 ] + vect2[vect2_mid ] ) /2 : vect2[vect2_mid];

}

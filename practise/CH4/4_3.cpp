/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
#include <algorithm>

using std::istream;
using std::vector;
using std::string;
typedef struct Student_info_s {
	string name;
	double midterm;
	double finale;
	vector<double> homework;
}Student_info;

istream& read_hw(istream &is, vector<double> &hw){

	double i;
	while(is>>i){
		hw.push_back(i);
	}

	return is;
}

istream& read_data(istream &is, Student_info &s){

	is>>s.name>>s.midterm>>s.finale;
	read_hw(is, s.homework);

	return is;

}

double find_median(vector<double> hw){
	int size_hw = hw.size();
	int mid_index = size_hw /2;
	if(size_hw == 0){
		throw std::domain_error("hw size is 0");
	} else {
		return size_hw % 2? hw[mid_index]: (hw[mid_index] + hw[mid_index - 1])/2;
	}
}
double grade(Student_info &s){

	return s.midterm*0.4 + s.finale*0.4 + find_median(s.homework);
}
int main(){

	Student_info s;
	int i =0 ;

	for ( i = 0; i < 3; i ++){
	read_data(std::cin, s);
	std::cout<<"grade = "<<grade(s);
		}
	return 0;
}


/* These programs are written on top of a automatic template */

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
using std::vector;
using std::istream;
double median(std::vector<double> );

double grade (double midterm, double finale, const std::vector<double> & homework){

/*	std::vector<double> exam_work;
	homework = exam_work;
	//This will crate problem as we are defining it as const pointer. so, we cannto change pointer
*/
	return midterm * 0.2 + finale * 0.4 +  median(homework) * 0.4;
}

double median(std::vector<double> vect2){
	int vect2_mid;
	int vect2_sz = vect2.size();

	if (vect2_sz == 0){
		throw std::domain_error("median cal got empty vector");

	}

	std::sort(vect2.begin(), vect2.end());
        vect2_mid = vect2_sz / 2;
	std::cout<<"End of median function"<<std::endl;
        return vect2_sz%2 == 0 ? (vect2[vect2_mid -1 ] + vect2[vect2_mid ] ) /2 : vect2[vect2_mid];

}

std::istream& read_hw(istream &in, vector<double>& hw){

	if(in){
		hw.clear();
		double x;
		while(in>>x){
			hw.push_back(x);
		}
		in.clear();
	}


	return in;
}
int main(){

	vector <double> hw;
	double mid;
	double finale;
	double grade_val;	

	std::cout<<"Enter your midterm ";
	std::cin>>mid;

	std::cout<<"Enter your finale ";
	std::cin>>finale;

	std::cout<<"Enter your hw marks ";
	read_hw(std::cin, hw);

	try{
	grade_val =  grade(mid, finale, hw);
	std::cout <<"Grade :: "<<grade_val<<std::endl;
	std::cout <<"Inside try block after printing the grade"<<std::endl;
	} catch(std::domain_error){
		std::cout<<"Have you entered hw marks?"<<std::endl;

	}

	std::cout<<"End of main"<<std::endl;
	return 0;
}

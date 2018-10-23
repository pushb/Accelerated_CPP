#include <iostream>

int main() {


	{
		std::string first_name = "pavan";
		{
			std::string last_name = "Boorla";
			std::string full_name = first_name + " " + last_name;
		}
		std::cout << full_name<< std::endl;
	}

return 0;
}

#include <iostream>

int main() {

	std::string str1;
	str1 = "Boorla";

	{

		std::string str1;
		str1 = "pavan";
		std::cout << str1 << std::endl;
	}

	{

		std::string str1;
		str1 = "Kumar";
		std::cout << str1 << std::endl;
	}

	std::cout << str1 << std::endl;


return 0;
}

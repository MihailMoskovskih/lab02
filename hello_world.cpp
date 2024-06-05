#include <iostream>

int main()
{
	std::string name; //name

	std::cout << "Input name: "; //show 
	std::cin >> name; //write name

	std::cout << "Hello world from " + name << std::endl; //result
}
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	return 0;
}


std::string get_name()
{
	std::string name;
	std::cout << "Enter your name" << std::endl;
	std::cin >> name;
	return name;
}

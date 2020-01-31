#include <iostream>

using namespace std;

//protoype fct
std::string get_name();

int main()
{
	cout << "Hello World!" << endl;
	get_name ();
	return 0;
}


/**
 * @brief get_name demande d'entrer son nom
 * @return
 */
std::string get_name()
{
	std::string name;
	std::cout << "Enter your name\n" << std::endl;
	std::cin >> name;
	return name;
}

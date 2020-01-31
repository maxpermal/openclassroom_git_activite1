#include <iostream>

using namespace std;

//protoype fct
std::string get_name();

int main()
{
	std::string my_name = get_name ();

	if(my_name == "max")
	{
		std::cout << "C'est bien moi !\n" << std::endl;
	}
	else
	{
		std::cout << "Ce n'est pas moi !\n" << std::endl;
	}

	return 0;
}


/**
 * @brief get_name demande d'entrer son nom.
 * @return chaine de caractère : espace/tab/saut de ligne => coupure du mot
 */
std::string get_name()
{
	std::string name;
	std::cout << "Enter your name\n" << std::endl;
	std::cin >> name;
	return name;
}

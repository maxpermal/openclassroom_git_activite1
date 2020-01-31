#include "fct.h"


/**
 * @brief get_name demande d'entrer son nom.
 * @return chaine de caractère : espace/tab/saut de ligne => coupure du mot voir std::cin
 */
std::string get_name()
{
	std::string name;
	std::cout << "Enter your name\n" << std::endl;
	std::cin >> name;
	return name;
}


/**
 * @brief check_name vérifie si le nom en paramètre est correct
 */
void check_name(const std::string& my_name)
{
	if(my_name == "max")
	{
		std::cout << "C'est bien moi !\n" << std::endl;
	}
	else
	{
		std::cout << "Ce n'est pas moi !\n" << std::endl;
	}
}

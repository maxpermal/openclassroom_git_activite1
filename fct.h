#include <iostream>


/**
 * @brief get_name demande d'entrer son nom.
 * @return chaine de caract�re : espace/tab/saut de ligne => coupure du mot voir std::cin
 */
std::string get_name();

/**
 * @brief check_name v�rifie si le nom en param�tre est correct
 */
void check_name(const std::string& my_name);

#include <iostream>


/**
 * @brief get_name demande d'entrer son nom.
 * @return chaine de caractère : espace/tab/saut de ligne => coupure du mot voir std::cin
 */
std::string get_name();

/**
 * @brief check_name vérifie si le nom en paramètre est correct
 */
void check_name(const std::string& my_name);

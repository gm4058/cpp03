#include "FragTrap.hpp"

int main(void)
{
    ClapTrap a("CLAPPY");
    FragTrap b("FRAGGY");

    std::cout << "\n--- Testing attack ---" << std::endl;
    b.attack("enemy1");

    std::cout << "\n--- Testing special ability ---" << std::endl;
    b.highFiveGuys();

    std::cout << "\n--- Copy and assignment test ---" << std::endl;
    FragTrap c(b);
    FragTrap d;
    d = b;

    std::cout << "\n--- Destruction order check ---" << std::endl;
    return 0;
}

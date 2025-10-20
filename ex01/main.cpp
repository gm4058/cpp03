#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("CLAPPY");
    ScavTrap b("SCAVVY");

    std::cout << "\n--- Testing ClapTrap attack ---" << std::endl;
    a.attack("enemy1");

    std::cout << "\n--- Testing ScavTrap attack ---" << std::endl;
    b.attack("enemy2");

    std::cout << "\n--- Testing guardGate ---" << std::endl;
    b.guardGate();

    std::cout << "\n--- Copy and assignment test ---" << std::endl;
    ScavTrap c(b);
    ScavTrap d;
    d = b;

    std::cout << "\n--- Destruction order check ---" << std::endl;
    return 0;
}

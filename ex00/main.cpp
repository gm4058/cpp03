#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("A");
    ClapTrap b("B");

    std::cout << "----- ACTION TEST -----" << std::endl;

    a.attack("B");
    b.attack("A");

    b.takeDamage(3);
    a.takeDamage(7);

    a.beRepaired(5);
    b.beRepaired(2);

    ClapTrap c("C");
    c.takeDamage(15);
    c.attack("A");
    c.beRepaired(5);

    std::cout << "----- EP DEPLETION TEST -----" << std::endl;
    ClapTrap d("D");
    for (int i = 0; i < 7; ++i)
    {
        d.attack("B");
        d.beRepaired(1);
    }

    std::cout << "----- END OF TEST -----" << std::endl;

    return 0;
}

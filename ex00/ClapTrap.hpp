#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
    const std::string name;
    int hitPoint;
    int energyPoint;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap(const std::string& name);
    ~ClapTrap();

    ClapTrap& operator= (const ClapTrap &other);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
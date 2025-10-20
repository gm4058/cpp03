#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
    const std::string name;
    unsigned int hitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string& name);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap()
    : name("default"), hitPoint(10), EnergyPoint(10), AttackDamage(0) {}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoint(10), EnergyPoint(10), AttackDamage(0) {}

#endif
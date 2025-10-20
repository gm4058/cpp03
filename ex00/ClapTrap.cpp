#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
    const std::string name;
    int hitPoint;
    int EnergyPoint;
    int AttackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string& name);
};

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoint(10), EnergyPoint(10), AttackDamage(0) {}

#endif
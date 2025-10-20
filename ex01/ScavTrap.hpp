#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
};

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
};

ScavTrap::~ScavTrap()
{

};

void ScavTrap::attack(const std::string &target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack!" << std::endl;
        return ;
    }
    this->energyPoint--;
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    return ;
};
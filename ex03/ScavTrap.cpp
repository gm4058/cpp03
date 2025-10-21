#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
};

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << name << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
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
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " use guardGate func" << std::endl;
};
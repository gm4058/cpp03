#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap(),
      ScavTrap(),
      FragTrap(),
      name("default")
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->energyPoint = 50;
}

DiamondTrap::DiamondTrap(const std::string name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      name(name)
{
    std::cout << "Diamond parameterized constructor called for " << name << std::endl;
    this->energyPoint = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other),
      ScavTrap(other),
      FragTrap(other),
      name(other.name)
{
     std::cout << "Diamond Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->name = other.name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "--- Who Am I? ---" << std::endl;
    std::cout << "My DiamondTrap name is: " << this->name << std::endl;
    std::cout << "My ClapTrap name is: " << ClapTrap::name << std::endl;
    std::cout << "-----------------" << std::endl;
}


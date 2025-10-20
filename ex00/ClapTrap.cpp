#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("default"), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoint(other.hitPoint),
      energyPoint(other.energyPoint), attackDamage(other.attackDamage)
{
     std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->hitPoint = other.hitPoint;
        this->energyPoint = other.energyPoint;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& name)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack!" << std::endl;
        return ;
    }
    this->energyPoint--;
    std::cout << "ClapTrap " << this->name << " attacks " << name
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
        return ;
    }
    this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage" << std::endl;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {    
        std::cout << "ClapTrap " << this->name << " cannot be repaired" << std::endl;
        return ;
    }
    this->hitPoint += amount;
    this->energyPoint--;
    std::cout << "ClapTrap " << this->name << " repairs itself " << amount << " hp point" << std::endl;
}
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap& other);
    FragTrap &operator=(const FragTrap& other);
    ~FragTrap();

    void attack(const std::string& target);
    void highFiveGuys(void);
};

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap parameterized constructor called for " << name << std::endl;
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : FragTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "FragTrap " << this->name << " cannot attack!" << std::endl;
        return ;
    }
    this->energyPoint--;
    std::cout << "FragTrap " << this->name << " attacks " << target
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->name << " use highFiveGuys func" << std::endl;
}

#endif
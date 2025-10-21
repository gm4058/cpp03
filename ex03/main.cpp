#include "DiamondTrap.hpp"

void printSeparator(const std::string& title)
{
    std::cout << "\n=== " << title << " ===\n" << std::endl;
}

int main(void)
{
    // 기본 생성자 / 파라미터 생성자 테스트
    printSeparator("DiamondTrap Creation Test");
    DiamondTrap dt1;
    DiamondTrap dt2("diamond");

    // 상태 확인
    dt1.whoAmI();
    dt2.whoAmI();

    // 공격 테스트 (ScavTrap attack 사용)
    printSeparator("Attack Test");
    dt1.attack("wall 1");
    dt2.attack("wall 2");

    // 특수 기능 테스트
    printSeparator("Special Functions Test");
    dt2.highFiveGuys();  // FragTrap 특수 능력
    dt2.guardGate();     // ScavTrap 특수 능력

    // 복사 생성자 / 대입 연산자 테스트
    printSeparator("Copy & Assignment Test");
    DiamondTrap a;
    DiamondTrap b("dt");

    std::cout << "Before assignment:" << std::endl;
    a.whoAmI();
    b.whoAmI();

    a = b;

    std::cout << "After assignment:" << std::endl;
    a.whoAmI();
    b.whoAmI();

    // 공격 후 상태 확인
    b.attack("enemy 1");
    a.attack("enemy 2");

    // 반복 공격 및 에너지 소진 확인
    printSeparator("Energy Depletion Test");
    DiamondTrap c("DIAMOND");

    std::cout << "Initial energy: 50 (ScavTrap default)" << std::endl;
    for (int i = 0; i < 52; ++i)
    {
        std::cout << "[" << i << "] ";
        c.attack("enemy");
    }

    // 소멸자 호출 확인
    printSeparator("Destruction Test");

    return 0;
}

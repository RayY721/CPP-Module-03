#include "ClapTrap.hpp"

int main()
{
    ClapTrap hero("Hero");
    ClapTrap enemy("Enemy");

    hero.attack("Enemy");
    enemy.takeDamage(0);

    hero.beRepaired(5);
    enemy.attack("Hero");
    hero.takeDamage(5);

    hero.attack("Enemy");
    hero.beRepaired(3);

    ClapTrap copyHero(hero);
    copyHero.attack("Enemy");

    return 0;
}

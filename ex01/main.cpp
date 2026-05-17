/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:50:28 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 17:33:47 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "===== Construction =====" << std::endl;

	ScavTrap	a("Guardian");

	std::cout << std::endl;

	std::cout << "===== Attack Test =====" << std::endl;

	a.attack("enemy");

	std::cout << std::endl;

	std::cout << "===== Damage / Repair Test =====" << std::endl;

	a.takeDamage(30);
	a.beRepaired(20);

	std::cout << std::endl;

	std::cout << "===== Guard Gate Mode =====" << std::endl;

	a.guardGate();

	std::cout << std::endl;

	std::cout << "===== Energy Exhaustion =====" << std::endl;

	ScavTrap	b("EnergyTester");

	for (int i = 0; i < 51; i++)
		b.attack("target");

	std::cout << std::endl;

	std::cout << "===== Death Test =====" << std::endl;

	ScavTrap	c("DeadTrap");

	c.takeDamage(100);
	c.attack("enemy");
	c.beRepaired(10);

	std::cout << std::endl;

	std::cout << "===== Copy Constructor =====" << std::endl;

	ScavTrap	d(a);

	d.attack("copy_target");

	std::cout << std::endl;

	std::cout << "===== Assignment Operator =====" << std::endl;

	ScavTrap	e;

	e = a;

	e.attack("assigned_target");

	std::cout << std::endl;

	std::cout << "===== Destruction Order =====" << std::endl;

	return (0);
}
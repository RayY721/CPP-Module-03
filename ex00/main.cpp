/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 17:13:30 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 17:13:31 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "===== Basic Construction =====" << std::endl;

	ClapTrap	a("Alpha");
	ClapTrap	b("Bravo");

	std::cout << std::endl;

	std::cout << "===== Basic Actions =====" << std::endl;

	a.attack("Bravo");
	b.takeDamage(0);

	b.beRepaired(5);

	std::cout << std::endl;

	std::cout << "===== Damage and Death =====" << std::endl;

	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(1);

	a.attack("Someone");
	a.beRepaired(10);

	std::cout << std::endl;

	std::cout << "===== Energy Exhaustion =====" << std::endl;

	ClapTrap	c("Charlie");

	for (int i = 0; i < 11; i++)
		c.attack("Target");

	std::cout << std::endl;

	std::cout << "===== Copy Constructor =====" << std::endl;

	ClapTrap	d(c);

	std::cout << std::endl;

	std::cout << "===== Assignment Operator =====" << std::endl;

	ClapTrap	e;
	e = b;

	std::cout << std::endl;

	std::cout << "===== End of Program =====" << std::endl;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:50:18 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 15:14:26 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor with name has been called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor has been called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator has been called!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor has been called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name 
					<< " cannot attack " 
					<< target 
					<< " because it has no energy or hit points left!" 
					<< std::endl;
        return;
    }

	_energyPoints--;
	std::cout << "ScavTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage 
				<< " damage!" << std::endl;             
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name 
				<< " has entered Gate keeper mode!" 
				<< std::endl;
}

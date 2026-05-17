/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:42:37 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 16:39:31 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
	: _name("Default"), 
	_hitPoints(10), 
	_energyPoints(10), 
	_attackDamage(0)
{
	std::cout << "ClapTrap default constructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), 
	_hitPoints(10), 
	_energyPoints(10), 
	_attackDamage(0)
{
	std::cout << "ClapTrap constructor with name has been called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor has been called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap assignment operator has been called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor has been called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " 
					<< _name 
					<< " cannot attack!" 
					<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " 
				<< _name
				<< " attacks "
				<< target
				<< ", causing "
				<< _attackDamage
				<< " points of damage!"
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " 
				<< _name 
				<< " takes " 
				<< amount 
				<< " points of damage!" 
				<< std::endl;
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " 
					<< _name 
					<< " has been destroyed!" 
					<< std::endl;
	}
	else
	{
		_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0 || _hitPoints == 0)
	{
		std::cout << "ClapTrap " 
					<< _name 
					<< " cannot be repaired!" 
					<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " 
				<< _name 
				<< " is repaired for " 
				<< amount 
				<< " points!" 
				<< std::endl;
	_hitPoints += amount;
}

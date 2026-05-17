/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:50:28 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 15:24:17 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s;

    s.attack("enemy");
    s.takeDamage(30);
    s.beRepaired(10);
    s.guardGate();

	ScavTrap s2("Scavvy");
	s2.attack("enemy");
	s.takeDamage(30);
    s.beRepaired(10);
    s.guardGate();

    return (0);
}

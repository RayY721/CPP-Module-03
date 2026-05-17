/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 14:14:59 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/17 14:18:23 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap d("DIAMOND");

    d.attack("enemy");
    d.takeDamage(20);
    d.beRepaired(10);
    d.highFivesGuys();
    d.whoAmI();

    return (0);
}
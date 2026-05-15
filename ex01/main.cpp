/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 13:50:28 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/15 14:16:43 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s("SC4V-TP");

    s.attack("enemy");
    s.takeDamage(30);
    s.beRepaired(10);
    s.guardGate();

    return (0);
}

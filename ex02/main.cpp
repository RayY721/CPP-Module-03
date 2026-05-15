/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuyu <kuyu@student.codam.nl>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:48:44 by kuyu              #+#    #+#             */
/*   Updated: 2026/05/15 16:48:46 by kuyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap f("FR4G");

    f.attack("enemy");
    f.takeDamage(20);
    f.beRepaired(10);
    f.highFivesGuys();

    return (0);
}
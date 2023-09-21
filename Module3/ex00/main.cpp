/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:50:33 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/21 16:02:25 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int main(void){
	ClapTrap	claptrap("Diamond Horse");
	ClapTrap	realclaptrap;

	realclaptrap = claptrap;

	realclaptrap.attack("a wall");
	realclaptrap.takeDamage(15);
	realclaptrap.beRepaired(4);
	realclaptrap.beRepaired(4);
	realclaptrap.beRepaired(4);
}

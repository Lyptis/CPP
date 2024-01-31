/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:50:33 by svanmeen          #+#    #+#             */
/*   Updated: 2024/01/31 13:20:21 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

int main(void){
	ClapTrap	diamondHorse("Diamond Horse");
	ClapTrap	real_diamondHorse;

	real_diamondHorse = diamondHorse;

	real_diamondHorse.attack("a wall");
	real_diamondHorse.takeDamage(15);
	real_diamondHorse.beRepaired(4);
	real_diamondHorse.beRepaired(4);
	real_diamondHorse.beRepaired(4);
}

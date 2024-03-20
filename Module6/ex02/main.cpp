/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:07:52 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/20 15:49:04 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	rand(int mod) {
		int random = 1;
	random = reinterpret_cast<unsigned long int>(&random);
	if (random < 0)
		random = random * -1;
	return (random%mod);
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "type A" <<std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "type B" <<std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "type C" <<std::endl;
}

void identify(Base &p) {
	
}

Base *generate(void) {
	int val = rand();
	switch (val) {
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
}

int main() {
	Base *p = generate();
	identify(p);
	delete p;
}

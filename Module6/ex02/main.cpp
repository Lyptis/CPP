/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:07:52 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/21 11:40:48 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"


int	rands(int mod) {
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
	try {
	if (dynamic_cast<A*>(&p))
		std::cout << "type A" <<std::endl;
	if (dynamic_cast<B*>(&p))
		std::cout << "type B" <<std::endl;
	if (dynamic_cast<C*>(&p))
		std::cout << "type C" <<std::endl;
	}
	catch (std::exception &e) { }
}

Base *generate(void) {
	int val = rands(3);
	switch (val) {
		case 0:
			return ((new A()));
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

int main() {
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}

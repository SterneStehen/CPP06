/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 07:36:17 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/09 09:02:01 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Base.hpp"

Base * generate(void){
	std::srand(time(NULL));
	int random = rand() % 3;
	if(random == 0){
		std::cout << "return A" << std::endl;
		return new A;
	}
	else if (random == 1){
		std::cout << "return B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "return C" << std::endl;
		return new C;
	}
}
void identify(Base* p){
	if(dynamic_cast<A*>(p))
		std::cout << "result identify * is " << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "result identify * is " << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "result identify * is " << "C" << std::endl;
	else
		std::cout << "result identify * is " << "unknown type "<< std::endl;
}

void identify(Base& p){
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "result identify & is " << "A" << std::endl;
		return;
	}
	catch(std::bad_cast &bc){}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << "result identify & is " << "B" << std::endl;
		return;
	}
	catch(...){}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << "result identify & is " << "C" << std::endl;
		return;
	}
	catch(...){}
	std::cout << "result identify & is " << "Unknown type" << std::endl;	
}


/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 08:47:22 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/09 09:02:28 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef BASE_HPP
#define BASE_HPP


#include <cstdlib>
#include <ctime> 
#include <iostream>

class Base{
// private:
// Base();
// Base(const Base& copy);
// Base& operator=(const Base &copy);
// ~Base();

public:
	virtual ~Base(){};
};
class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void); 
void identify(Base* p);
void identify(Base& p);

#endif
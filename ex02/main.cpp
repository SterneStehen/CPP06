/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 08:49:09 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/09 09:02:18 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/



#include "Base.hpp"
 
int main()
{
	//std::srand(static_cast<unsigned int>(std::time(nullptr)));
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	return 0;
}
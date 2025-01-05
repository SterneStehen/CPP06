/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 22:17:32 by smoreron          #+#    #+#             */
/*   Updated: 2025/01/05 23:07:22 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
	if(ac != 2)
	{
		std::cout << "invalid input. Try convert + value" << std::endl;
		return 0;
	}
	std::string input = av[1];
	ScalarConverter::convert(input);
	return 0;
}
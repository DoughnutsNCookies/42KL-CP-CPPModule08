/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:40:04 by schuah            #+#    #+#             */
/*   Updated: 2022/09/05 20:26:27 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int ac, char **av)
{
	int						array1[7] = {1, 2, 3, 42, 69};
	const int				array2[5] = {0, -1, -100, 23, 88};
	std::vector<int>		intVector1(array1, array1 + 5);
	const std::vector<int>	intVector2(array2, array2 + 5);
	const int 				tofind = std::atoi(av[1]);

	if (ac != 2)
	{
		std::cout << "./easyfind [ToFind]" << std::endl;
		return (0);
	}
	std::vector<int>::iterator number1 = easyfind(intVector1, tofind);
	if (number1 != intVector1.end())
		std::cout << "Found " << *number1 << " in intVector1"<< std::endl;
	else
		std::cout << "Not found in intVector1" << std::endl;
	std::vector<int>::const_iterator number2 = easyfind(intVector2, tofind);
	if (number2 != intVector2.end())
		std::cout << "Found " << *number2 << " in intVector2"<< std::endl;
	else
		std::cout << "Not found in intVector2" << std::endl;
}

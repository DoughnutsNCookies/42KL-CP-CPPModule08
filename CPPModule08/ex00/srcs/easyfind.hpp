/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:40:49 by schuah            #+#    #+#             */
/*   Updated: 2022/09/05 20:01:46 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
 
template<typename T>
typename T::iterator	easyfind(T &container, const int tofind)
{
	return (std::find(container.begin(), container.end(), tofind));
}

template<typename T>
typename T::const_iterator	easyfind(const T &container, const int tofind)
{
	return (std::find(container.begin(), container.end(), tofind));
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:31:35 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/25 17:31:35 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	int i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while(av[i])
		{
			int j = 0;
			while(av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
			if (i < ac )
				std::cout << " ";
			i++;
		}
	}
	std::cout << "\n";
	return 0;
}
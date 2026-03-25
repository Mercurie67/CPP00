/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:30:51 by medel-ca          #+#    #+#             */
/*   Updated: 2026/03/25 18:57:06 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <string>

int is_number(std::string str);
std::string	set_info(std::string type);
std::string format(std::string str);
std::string read_nonempty_input(const std::string& prompt);
std::string read_number_input(const std::string& prompt);

#endif /* UTILS_HPP */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:36:01 by lyaiche           #+#    #+#             */
/*   Updated: 2022/04/29 11:31:49 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv){

	if (argc < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;}
	for(int i = 1; argv[i]; ++i){
		for(int j = 0; argv[i][j]; ++j)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];}
	std::cout << std::endl;
	return 0;
}

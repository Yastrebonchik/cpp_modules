/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexander <alexander@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 23:35:14 by marvin            #+#    #+#             */
/*   Updated: 2021/01/14 04:13:27 by alexander        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

static	std::string	line_fix(std::string line, std::string fline, std::string sline)
{
	std::size_t	found;
	std::string	substr;
	std::string	retline;

	found = 0;
	retline = "";
	while (found != std::string::npos)
	{
		found = line.find(fline);
		if (found != std::string::npos)
		{
			line.replace(found, fline.length(), sline);
			substr = line.substr(0, found + sline.length());
			line = line.substr(found + sline.length(), line.length() - found - sline.length());
			retline += substr;
		}
		else
			retline += line;
	}
	return (retline);
}

int					main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;
	std::string		newfile;
	std::string		lines[3];

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}
	lines[0] = argv[1];
	lines[1] = argv[2]; 
	lines[2] = argv[3];
	if (lines[0].length() == 0 || lines[1].length() == 0 || lines[2].length() == 0)
	{
		std::cout << "Wrong arguments!" << std::endl;
		return (0);
	}
	newfile = argv[1] + (std::string)".replace";
	input.open(argv[1], std::fstream::in);
	output.open(newfile);
	if (input.is_open() == 0 || output.is_open() == 0)
	{
		std::cout << "File error occured" << std::endl;
		return (0);
	}
	else
	{
		while (input)
		{
			std::getline(input, line);
			line = line_fix(line, argv[2], argv[3]);
			output << line << std::endl;
		}
	}
	return (0);
}

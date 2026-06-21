/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 02:32:14 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:52:41 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string ft_replace_line(std::string line, std::string search, std::string replace)
{
    size_t pos = line.find(search);
    while (pos != std::string::npos)
    {
        line.erase(pos, search.length());
        line.insert(pos, replace);
        pos = line.find(search, pos + replace.length());
    }
    return line;
}

void ft_sed(std::ifstream  &file, std::string file_name, std::string search, std::string replace)
{
    if (search.empty())
    {
        std::cout << "Error: Search string cannot be empty." << std::endl;
        return ;
    }
    std::string out_name = std::string(file_name) + ".replace";
    std::ofstream out_file(out_name.c_str());
    if (!out_file.is_open())
    {
        std::cout << "Error: Could not create file." << std::endl;
        return ;
    }
    std::string line;
    std::string replace_line;
    while (std::getline(file, line))
    {
        replace_line = ft_replace_line(line, search, replace);
        out_file << replace_line << "\n";
    }
    out_file.close();
}
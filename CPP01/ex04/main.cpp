#include "all.hpp"


int	replacement(std::string *txt, std::string s1, std::string s2)
{
	//Check where to replace
	std::size_t found;
	while (1)
	{
		found = txt->find(s1);
		if (found == std::string::npos)
			return 1;
		txt->erase(found, found + s1.length());
		txt->insert(found, s2);
	}
	return 0;
}

void	close(std::ifstream ifs, std::ofstream ofs)
{
	//Close streams
	ifs.close();
	ofs.close();
}

int main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs("copy.replace");
	std::string		line;
	std::string		txt;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	//Error arg
	if (argc != 4 || s1 == "" || s2 == "")
	{
		std::cout << "Error arguments";
		close(ifs, ofs);
		return 1;
	}
	//Copy text
	if (ifs && ofs)
	{
		while(std::getline(ifs, line))
		{
			txt.append(line);
			txt.append("\n");
		}
		replacement(&txt, s1, s2);
		ofs << txt;
	}
	else
	{
		std::cout << "Error" << std::endl;
		close(ifs, ofs);
		return 1;
	}
	close(ifs, ofs);	
	return 0;
}

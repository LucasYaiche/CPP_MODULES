#include <iostream>
#include <fstream>
#include <string>

std::string	replacement(std::string txt, std::string s1, std::string s2)
{
	//Check where to replace
	std::size_t length = s1.length();

	for (size_t i = 0; i < txt.length(); i++)
	{
		if (txt.compare(i, length, s1) == 0)
		{
			txt.erase(i, length);
			txt.insert(i, s2);
			i += s2.length();
		}
	}
	return txt;
}

int main(int argc, char **argv)
{
	std::string		line;
	std::string		txt;

	//Error arg
	if (argc != 4)
	{
		std::cout << "Error arguments";
		return 1;
	}
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	if (s1 == "" || s2 == "")
	{
		std::cout << "Error arguments";
		return 1;
	}
	std::string		filename(argv[1]);
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename + ".replace");
	//Copy text
	if (ifs && ofs)
	{
		while(std::getline(ifs, line))
		{
			txt.append(line);
			txt.append("\n");
		}
		ofs << replacement(txt, s1, s2);
	}
	else
	{
		std::cout << "Error" << std::endl;
		ifs.close();
		ofs.close();
		return 1;
	}
	ifs.close();
	ofs.close();	
	return 0;
}

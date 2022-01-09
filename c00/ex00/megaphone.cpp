#include <iostream>
//#include <cctype>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				std::cout << (char) toupper(argv[i][j]);
		}
		std::cout << "\n";
	}
	return (0);
}
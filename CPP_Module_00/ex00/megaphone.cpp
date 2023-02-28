#include <iostream>

std::string toMayus(std::string s){
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

int main(int ac, char **av){
	for (int i = 1; av[i]; i++)
		std::cout << toMayus(av[i]);
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
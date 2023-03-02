#include "Zombie.hpp"

int main() {
	Zombie* ptr;
	int N = 8;

	ptr = zombieHorde(N, "Foo");
	for (int i = 0; i < N; i++)
		ptr[i].announce();
	delete[] ptr;
	return 0;
}
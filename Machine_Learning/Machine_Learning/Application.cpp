#include <iostream>
#include "Core/Build/Module.h"


int main()
{
	FVector n_Inputs;
	n_Inputs.X = std::rand() % 10;
	std::cout << n_Inputs.X << std::endl;
	std::cin.get();
	return 0;
}
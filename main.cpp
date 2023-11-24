#include <iostream>

int main(int argc, char** argv){
	std::cout << "ola k ase" << std::endl;
	if (argc > 1){
		std::cout << argv[1] << std::endl;
	}
	else{
		std::cout << "Introduce un nombre como parámetro !!!" << std::endl;
	}
	return 0;
}

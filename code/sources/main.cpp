
#include "Kernel.hpp"
#include <memory>

using namespace example;

int main()
{
	std::unique_ptr<Kernel> kernel(new Kernel("OpenGL Example", 1280, 720));

	kernel->execute();

	return 0;
}



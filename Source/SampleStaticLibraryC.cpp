#include <SampleStaticLibraryC.h>
#include <iostream>
#include <SampleStaticLibraryA.h>

namespace SampleStaticLibraryC {

void SampleStaticLibraryC::HelloWorld() {
	SampleStaticLibraryA::SampleStaticLibraryA::HelloWorld();
	std::cout << "Hello, world! This is SampleStaticLibraryC!!" << std::endl;
}

}

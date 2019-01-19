#include <iostream>
#include "raylib.h"
#include "squall/squall_vmstd.hpp"
#include "raylib-squirrel.hpp"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        if (IsFileExtension(argv[1], ".nut"))
        {
            try {
    	        squall::VMStd vm;
    	        raylib_squirrel(vm);
    	        vm.dofile(argv[1]);
            }
            catch(squall::squirrel_error& e) {
                std::cerr << e.what() << std::endl;
            }
        }

    }

    return 0;
}
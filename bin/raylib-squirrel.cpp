#include <iostream>
// Raylib
extern "C" {
    #include <raylib.h>
}
#include "squall/squall_vmstd.hpp"
#include "../include/raylib-squirrel.hpp"

int main(int argc, char *argv[])
{

    std::string executableName;
    std::string fileToLoad;

    switch (argc) {
        case 0:
            executableName = "raylib-squirrel";
            fileToLoad = "main.nut";
            break;
        case 1:
            executableName = argv[0];
            fileToLoad = "main.nut";
            break;
        default:
            executableName = argv[0];
            fileToLoad = argv[1];
            break;
    }


    if (!FileExists(fileToLoad.c_str())) {
        std::cout << "Usage:" << std::endl << "    " << GetFileName(executableName.c_str()) << " myfile.nut" << std::endl << std::endl;
        std::cout << "Attempted file " << fileToLoad << " was not found." << std::endl;
        return 1;
    }

    if (!IsFileExtension(fileToLoad.c_str(), ".nut")) {
        std::cout << "Expected file to be a .nut file." << std::endl;
        return 1;
    }

    try {
        squall::VMStd vm;
        raylib_squirrel(vm);
        vm.dofile(fileToLoad.c_str());
    }
    catch(squall::squirrel_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}

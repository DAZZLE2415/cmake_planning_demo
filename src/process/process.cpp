#include <iostream>
#include "process.h"

void Process::planProcess()
{
    std::cout << "planning process" << std::endl;
    my_map.mapInfo();
    std::cout << "planning success" << std::endl;
}
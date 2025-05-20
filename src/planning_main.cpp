#include <iostream>
#include "process.h"
#include "show_result.h"

int main()
{
    std::cout << "planning start" << std::endl;
    Process pro;
    pro.planProcess();
    std::cout << "planning end" << std::endl;

    std::cout << "show result" << std::endl;
    ShowResult show;
    show.drawResult();
    return 0;
}
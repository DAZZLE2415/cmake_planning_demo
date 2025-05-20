#include <iostream>
#include "process.h"
#include <Eigen/Dense>

void Process::planProcess()
{
    std::cout << "planning process" << std::endl;
    my_map.mapInfo();

    Eigen::MatrixXd m(2,2);
    m(0, 0) = 3;
    m(1, 0) = 5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    std::cout << m << std::endl;
    
    std::cout << "planning success" << std::endl;
}
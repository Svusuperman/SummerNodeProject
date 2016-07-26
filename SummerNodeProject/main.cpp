//
//  main.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 Henrichsen, Cody. All rights reserved.
//

#include <iostream>
#include "NodeController.hpp"

int main()
{
    // insert code here...
    std::cout << "Starting NodeController!\n" << std::endl;
    NodeController * app = new NodeController();
    app->start();
    std::cout <<"Ending NodeContoller" << std::endl;
    return 0;
}

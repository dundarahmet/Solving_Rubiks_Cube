//
//  main.cpp
//  Solution Of Rubik's Cube
//
//  Created by AHMET DÜNDAR on 24.02.2019.
//  Copyright © 2019 AHMET DÜNDAR. All rights reserved.
//

#include <iostream>
#include <array>
#include "RubiksCube.hpp"

using namespace std ;


int main(int argc, const char * argv[]) {
    bool control  = false ;
    
    rubiksCube test ;
    test.initializationTheCubeOfSide() ;
    control = test.solutionAlgorithmForRubiksCube() ;
    
    return control;
}

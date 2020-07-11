//
//  main.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include <iostream>
#include "EnigmaMachine.hpp"
#include "Utils/config.h"

int main(int argc, const char * argv[]) {
    int rotorNumbers[NO_OF_ROTORS] = {ROTOR_1, ROTOR_2, ROTOR_3};
    EnigmaMachine enigmaMachine(rotorNumbers, REFLECTOR_B);
    int a;


    std::cout << enigmaMachine.encode("NANANANANA BATMAN") << "\n";
    return 0;


}

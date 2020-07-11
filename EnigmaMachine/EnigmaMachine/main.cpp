//
//  main.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include <iostream>
#include <string>
#include "EnigmaMachine.hpp"
#include "Utils/config.h"

int main(int argc, const char * argv[]) {
    int rotorNumbers[NO_OF_ROTORS] = {ROTOR_1, ROTOR_2, ROTOR_3};
    EnigmaMachine enigmaMachine1(rotorNumbers, REFLECTOR_B);
    EnigmaMachine enigmaMachine2(rotorNumbers, REFLECTOR_B);
    
    std::string message;
    
    getline(std::cin, message);
    
    std::string encoded = enigmaMachine1.encode(message);
    
    std::cout << encoded << "\n";
    std::cout << enigmaMachine2.encode(encoded) << "\n";
}

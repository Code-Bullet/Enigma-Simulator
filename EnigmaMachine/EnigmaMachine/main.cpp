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
#include <time.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    int rotorNumbers[NO_OF_ROTORS] = {ROTOR_1, ROTOR_2, ROTOR_3};
    int offsets[NO_OF_ROTORS];

    srand(time(0));
    
    for (int i = 0; i < NO_OF_ROTORS; i++){
        offsets[i] = rand() % 26;
        std::cout << offsets[i] << " ";
    }
    
    EnigmaMachine enigmaMachine1(rotorNumbers, REFLECTOR_B, offsets);
    EnigmaMachine enigmaMachine2(rotorNumbers, REFLECTOR_B, offsets);
    
    std::string message;
    
    getline(std::cin, message);
    
    std::string encoded = enigmaMachine1.encode(message);
    
    std::cout << encoded << "\n";
    std::cout << enigmaMachine2.encode(encoded) << "\n";
}

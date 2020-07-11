//
//  Enigma.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once
#include "RotorSet.hpp"
#include <string>
#include <map>

class EnigmaMachine {
    RotorSet _rotorSet;
    
public:
    EnigmaMachine(int rot_nos[NO_OF_ROTORS], int reflectorType, int offsets[NO_OF_ROTORS]);
    std::string encode(std::string input);
};

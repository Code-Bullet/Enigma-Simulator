//
//  Rotors.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include "Utils/config.h"
#include "Utils/utils.hpp"

class Rotor {
private:
    int _offset;
    int _rotorNo;
    int _rotorPos;
    int _wiring[26][2];
    
    void setWiring(int no);
    
public:
    Rotor(){ };
    Rotor(int rotorNumber, int rotorPosition);
    int runThrough(int input, bool forward = true);
    void rotate();
    int position();
};

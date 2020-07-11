//
//  RotorSet.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include "Rotor.hpp"
#include "Reflector.hpp"
#include <math.h>

#define NO_OF_ROTORS 3

class RotorSet {
private:
    Rotor* _rotors[NO_OF_ROTORS];
    Rotor* _reflector;

    int _config[NO_OF_ROTORS+1][2];

public:
    RotorSet(int rot_nos[NO_OF_ROTORS], int reflectorType, int offsets[NO_OF_ROTORS]);
    ~RotorSet();
    int parseValue(char input);

    void setRotorOffset(int rotPos, int offset);
    void setRotorType(int rotPos, int type);
    void setReflectorType(int type);

    void randomConfig();
};

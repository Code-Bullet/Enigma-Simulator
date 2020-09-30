//
//  RotorSet.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <set>

#include "Rotor.hpp"
#include "Reflector.hpp"
#include "RotorConfig.hpp"
#include "Utils/config.h"

class RotorSet {
private:
    Rotor* _rotors[NO_OF_ROTORS];
    Rotor* _reflector;
    
    RotorConfig _config;

public:
    RotorSet(RotorConfig r_config);
    ~RotorSet();
    int parseValue(char input);
    RotorSet();
    void setRotorOffset(int rotPos, int offset);
    void setRotorType(int rotPos, int type);
    void setReflectorType(int type);

    void randomConfig();
};

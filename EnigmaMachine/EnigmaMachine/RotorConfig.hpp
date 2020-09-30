//
//  RotorConfig.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include "Utils/config.h"

struct RotorConfig {
    int offsets[NO_OF_ROTORS];
    int types[NO_OF_ROTORS];
    int reflectorType;
    RotorConfig(const RotorConfig&);
    RotorConfig();
    
    RotorConfig(int r_offsets[NO_OF_ROTORS], int r_types[NO_OF_ROTORS], int r_reflectorType);
    
    bool operator == (const RotorConfig& rhs);
};

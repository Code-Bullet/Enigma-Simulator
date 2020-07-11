//
//  Enigma.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include <string>
#include <map>

#include "RotorSet.hpp"
#include "RotorConfig.hpp"
#include "Utils/config.h"

class EnigmaMachine {
    RotorSet _rotorSet;
    
public:
    EnigmaMachine(RotorConfig r_config);
    std::string encode(std::string input);
};

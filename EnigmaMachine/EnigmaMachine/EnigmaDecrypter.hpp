//
//  EnigmaDecrypter.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include "EnigmaMachine.hpp"
#include "RotorConfig.hpp"

class EnigmaDecrypter {
private:
    EnigmaMachine _enigmaMachine;
    RotorConfig _config;
    bool _keyFound;
    std::string _crib;
    std::string _plaintxt;
    bool offsetIterator();

    
public:
    EnigmaDecrypter();
    void rotorTypeIterator();
    void reflectorIterator();
    RotorConfig getRotorConfig();
    std::string decrypt();
    bool run(std::string crib, std::string plaintxt);
};

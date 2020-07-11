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
    
public:
    EnigmaDecrypter();
    void offsetIterator();
    void rotorTypeIterator();
    void reflectorIterator();
    bool run();
    std::string decrypt(std::string inp);
};

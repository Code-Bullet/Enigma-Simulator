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

#include <string>

class Rotor {
private:
    int _offset;
    char _notch;
    
protected:
    int _rotorNo;
    std::string _wiring;
    
public:
    Rotor* nextRot;
    Rotor* prevRot;
    
    Rotor(){ };
    Rotor(int rotorNumber, int offset);
    virtual char runThrough(char input, bool forward);
    virtual void rotate();
    int position();
    
    virtual void setWiring(int type);
    void setOffset(int num);
};

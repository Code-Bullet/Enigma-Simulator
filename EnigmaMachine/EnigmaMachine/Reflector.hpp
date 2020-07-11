//
//  Reflector.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once
#include "Rotor.hpp"

class Reflector : public Rotor {
public:
    Reflector(int type);
    char runThrough(char input, bool forward);
    void setWiring(int type);
    void rotate() {};
};

//
//  Reflector.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "Reflector.hpp"

Reflector::Reflector(int type){
    _rotorNo = type;
    setWiring(_rotorNo);
}

char Reflector::runThrough(char input, bool forward = true) {
    int intInp;
    char output;
    
    forward = true;
    
    intInp = alphabet.find(input);
    output = _wiring[intInp];
    nextRot -> runThrough(output, false);
    
    return output;
}

void Reflector::setWiring(int type){
    switch(type){
        case REFLECTOR_B:
            _wiring = wiring_reflectorB;
            break;
        case REFLECTOR_B_THIN:
            _wiring = wiring_reflectorB_thin;
            break;
        case REFLECTOR_C:
            _wiring = wiring_reflectorC;
            break;
        case REFLECTOR_C_THIN:
            _wiring = wiring_reflectorC_thin;
            break;
        default:
            _wiring = alphabet;
            break;
    }
}

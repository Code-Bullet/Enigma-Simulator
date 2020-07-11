//
//  RotorSet.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "RotorSet.hpp"
#include <iostream>

RotorSet::RotorSet(int rot_nos[NO_OF_ROTORS], int reflectorType) {
    for (int i = 0; i < NO_OF_ROTORS; i++){
        _rotors[i] = new Rotor(rot_nos[i]);
    }
    _reflector = new Reflector(reflectorType);
    
    for (int i = 0; i < NO_OF_ROTORS - 1; i++){
        _rotors[i]->nextRot = _rotors[i+1];
        _rotors[i+1]->prevRot = _rotors[i];
    }
    
    _rotors[NO_OF_ROTORS - 1]->nextRot = _reflector;
    _reflector->nextRot = _rotors[NO_OF_ROTORS - 1];
}

RotorSet::~RotorSet(){
    for (int i = 0; i < NO_OF_ROTORS; i++){
        delete _rotors[i];
    }
}

int RotorSet::parseValue(char input){
    char value = _rotors[0]->runThrough(input, true);
    _rotors[0] -> rotate();
        
    return value;
}

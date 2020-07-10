//
//  RotorSet.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "RotorSet.hpp"

RotorSet::RotorSet(int rot_nos[NO_OF_ROTORS]) {
    for (int i = 0; i < NO_OF_ROTORS; i++){
        _rotors[i] = Rotor(rot_nos[i], i+1);
    }
    _reflector = Rotor(REFLECTOR, 4);
    
    _rotationNo = 0;
}


int RotorSet::parseValue(int input){
    int value = input;
    
    for (int i = 0; i < NO_OF_ROTORS; i++){
        value = _rotors[i].runThrough(value);
    }
    value = _reflector.runThrough(value);
    for (int i = NO_OF_ROTORS - 1; i >= 0; i--){
        value = _rotors[i].runThrough(value, false);
    }
    
    _rotationNo++;
    
    for (int i = 0; i < NO_OF_ROTORS; i++){
        if (_rotationNo % (int)pow(26,i)){
            _rotors[i].rotate();
        }
    }
    
    return value;
}

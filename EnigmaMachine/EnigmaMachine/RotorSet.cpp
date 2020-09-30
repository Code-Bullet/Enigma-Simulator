//
//  RotorSet.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "RotorSet.hpp"
#include <iostream>
RotorSet::RotorSet(RotorConfig r_config): _config(r_config) {
    for (int i = 0; i < NO_OF_ROTORS; i++){
        _rotors[i] = new Rotor ( _config.types[i], _config.offsets[i] );
    }
    _reflector = new Reflector ( _config.reflectorType );
    
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


void RotorSet::setRotorOffset(int rotPos, int offset){
    if (rotPos >= NO_OF_ROTORS) return;
    
    offset %= 26;
    _rotors[rotPos]->setOffset(offset);
    
    _config.offsets[rotPos] = offset;
}

void RotorSet::setReflectorType(int type){
    _reflector->setWiring(type);
    _config.reflectorType = type;
}

void RotorSet::setRotorType(int rotPos, int type){
    if (rotPos >= NO_OF_ROTORS) return;
    
    _rotors[rotPos]->setWiring(type);
    _config.types[rotPos] = type;

}

void RotorSet::randomConfig(){
    srand(time(0));
    int type; int offset;
    std::set<int> typesUsed;

    for (int i = 0; i < NO_OF_ROTORS; i++){
        offset = rand() % 26;

        do {
            type = rand() % NO_ROTOR_TYPES;
        } while (typesUsed.count(type) > 0);

        typesUsed.insert(type);

        setRotorType(i, type);
        setRotorOffset(i, offset);
    }

    type = rand() % NO_REFLECTOR_TYPES;
    setReflectorType(type);
}


RotorSet::RotorSet() {
	 for (int i = 0; i < NO_OF_ROTORS; i++){
	        _rotors[i] = new Rotor ( _config.types[i], _config.offsets[i] );
	    }
	    _reflector = new Reflector ( _config.reflectorType );

	    for (int i = 0; i < NO_OF_ROTORS - 1; i++){
	        _rotors[i]->nextRot = _rotors[i+1];
	        _rotors[i+1]->prevRot = _rotors[i];
	    }

	    _rotors[NO_OF_ROTORS - 1]->nextRot = _reflector;
	    _reflector->nextRot = _rotors[NO_OF_ROTORS - 1];
}

//
//  RotorConfig.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "RotorConfig.hpp"

RotorConfig::RotorConfig(int r_offsets[NO_OF_ROTORS], int r_types[NO_OF_ROTORS], int r_reflectorType){
    for (int i = 0; i < NO_OF_ROTORS; i++){
        offsets[i] = r_offsets[i];
        types[i] = r_types[i];
    }
    reflectorType = r_reflectorType;
}

bool RotorConfig::operator == (const RotorConfig& rhs){
    for (int i = 0; i < NO_OF_ROTORS; i++){
        if (offsets[i] != rhs.offsets[i] || types[i] != rhs.types[i]){
            return false;
        }
    }
    return reflectorType == rhs.reflectorType;
}

RotorConfig::RotorConfig(const RotorConfig& rc){
	for (int i = 0; i < NO_OF_ROTORS; i++){
	        offsets[i] = rc.offsets[i];
	        types[i] = rc.types[i];
	    }
	    reflectorType = rc.reflectorType;
}

RotorConfig::RotorConfig(){
	for (int i = 0; i < NO_OF_ROTORS; i++){
		        offsets[i] = 1;
		        types[i] = i;
		    }
		    reflectorType = REFLECTOR_B;
}


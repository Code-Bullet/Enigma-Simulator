//
//  Rotors.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//
//  Rotor::runThrough adapted from Code_Bullet's code at https://github.com/Code-Bullet/Enigma-Simulator/blob/master/enigmaSim/Rotor.pde

#include "Rotor.hpp"

Rotor::Rotor(int rotorNumber, int rotorPosition) {
    _rotorNo    = rotorNumber;
    _rotorPos   = rotorPosition;
    _offset     = 0;

    setWiring(_rotorNo);
}

void Rotor::setWiring(int no){
    switch(no) {
        case ROTOR_1:
            custom_utils::copyArr2D(_wiring, wiring_rotor1);
            break;
        case ROTOR_2:
            custom_utils::copyArr2D(_wiring, wiring_rotor2);
            break;
        case ROTOR_3:
            custom_utils::copyArr2D(_wiring, wiring_rotor3);
            break;
        case ROTOR_4:
            custom_utils::copyArr2D(_wiring, wiring_rotor4);
            break;
        case ROTOR_5:
            custom_utils::copyArr2D(_wiring, wiring_rotor5);
            break;
        case REFLECTOR:
            custom_utils::copyArr2D(_wiring, wiring_reflector);
    }
}

int Rotor::runThrough(int input, bool forward){
    if (forward) {
        input = (input + _offset) % 26;

        return _wiring[input][1];
    } else {
        for (int i = 0; i< 26; i++) {
            if (input == _wiring[i][1]) {
                int output = ( _wiring[i][0]- _offset ) % 26;

                if (output < 0){
                    output = 26 + output;
                }
                return output;
            }
        }
    }
    return -1;
}

void Rotor::rotate(){
    _offset = (_offset + 1) % 26;
}

int Rotor::position(){
    return _rotorPos;
}

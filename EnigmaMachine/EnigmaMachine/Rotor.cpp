//
//  Rotors.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "Rotor.hpp"

Rotor::Rotor(int rotorNumber) {
    _rotorNo    = rotorNumber;
    _offset     = 0;

    prevRot = nullptr;
    nextRot = nullptr;

    setWiring(_rotorNo);
}

void Rotor::setWiring(int type){
    _rotorNo = type;

    switch(type) {
        case ROTOR_1:
            _wiring = wiring_rotor1;
            _notch = rot1_notch;
            break;
        case ROTOR_2:
            _wiring = wiring_rotor1;
            _notch = rot2_notch;
            break;
        case ROTOR_3:
            _wiring = wiring_rotor1;
            _notch = rot3_notch;
            break;
        case ROTOR_4:
            _wiring = wiring_rotor1;
            _notch = rot4_notch;
            break;
        case ROTOR_5:
            _wiring = wiring_rotor1;
            _notch = rot5_notch;
            break;
        default:
            _wiring = alphabet;
            _notch = 'A';
            break;
    }
}

char Rotor::runThrough(char input, bool forward){
    int intInp;
    char output;

    if (forward) {
        intInp = alphabet.find(input);
        intInp = (intInp + _offset) % 26;
        output = _wiring[intInp];
        nextRot -> runThrough(output, true);
    } else {
        intInp = _wiring.find(input);
        intInp = (intInp - _offset)%26;
        if (intInp < 0){
            intInp += 26;
        }
        output = alphabet[intInp];
        if(prevRot != nullptr){
            prevRot -> runThrough(output, false);
        }
    }

    if (_wiring[_offset] == _notch){
        nextRot -> rotate();
    }

    return output;
}

void Rotor::rotate(){
    _offset = (_offset + 1) % 26;
}

int Rotor::position(){
    return _offset;
}

void Rotor::setOffset(int num){
    _offset = num % 26;
}

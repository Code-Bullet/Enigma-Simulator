//
//  Enigma.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "EnigmaMachine.hpp"
#include "Utils/utils.hpp"

EnigmaMachine::EnigmaMachine(int rot_nos[NO_OF_ROTORS], int reflectorType): _rotorSet(rot_nos, reflectorType) {
    for (int i = 0; i < 26; i++){
        _intCharMap.push_back('A' + i);
    }
}


std::string EnigmaMachine::encode(std::string inputStr){
    std::string inpCopy = custom_utils::removeSpecial(inputStr);
    
    inpCopy = custom_utils::toUppercase(inpCopy);
    
    std::string outputStr;
    for (int i = 0; i < inpCopy.size(); i++){
        char charOut      = _rotorSet.parseValue( inpCopy[i] );
        outputStr.push_back(charOut);
    }
    
    return outputStr;
}

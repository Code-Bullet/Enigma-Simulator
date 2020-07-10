//
//  Enigma.cpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#include "EnigmaMachine.hpp"
#include "Utils/utils.hpp"

EnigmaMachine::EnigmaMachine(int rot_nos[NO_OF_ROTORS]): _rotorSet(rot_nos) {
    for (int i = 0; i < 26; i++){
        _intCharMap.push_back('A' + i);
    }
}


std::string EnigmaMachine::encode(std::string inputStr){
    std::string inpCopy = custom_utils::removeSpace(inputStr);
    
    inpCopy = custom_utils::toUppercase(inpCopy);
    
    std::string outputStr;
    for (int i = 0; i < inpCopy.size(); i++){
        char charIn     = (char) inpCopy[i];
        int intIn       = _intCharMap.find( charIn );
        int intOut      = _rotorSet.parseValue( intIn );
        char charOut    = _intCharMap[intOut];
        
        outputStr.push_back(charOut);
    }
    
    return outputStr;
}

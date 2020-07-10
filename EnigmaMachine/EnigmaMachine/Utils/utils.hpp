//
//  ArrayFunctions.hpp
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 11/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once
#include <string>

namespace custom_utils {
    inline void copyArr2D(int arTo[26][2], const int arFrom[26][2], int size = 26){
        for (int i = 0; i < size; i++){
            for (int j = 0; j < 2; j++){
                arTo[i][j] = arFrom[i][j];
            }
        }
    }
    
    inline std::string removeSpace(std::string str){
        str.erase(remove_if(str.begin(), str.end(), isspace),str.end());
        
        return str;
    }
    
    inline std::string toUppercase(std::string str){
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
        return str;
    }
    
}

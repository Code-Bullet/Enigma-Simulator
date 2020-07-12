//
//  EnigmaDecrypter.cpp
//  EnigmaMachine
//
//  Created by Rajat Agarwal on 12/07/20.
//  Copyright © 2020 Rajat Agarwal. All rights reserved.
//

#include "EnigmaDecrypter.hpp"
#include <iostream>
#include "Utils/config.h"
#include <string.h>

EnigmaDecrypter::EnigmaDecrypter() { }


bool EnigmaDecrypter::offsetIterator(){
	for(int i = 0; i<26; i++){
		for(int j = 0; j<26; j++){
			for(int k = 0; k<26; k++){
				int arr[]={k, j, i};
				_enigmaMachine.setRotorOffset(arr);
				std::string decoded = _enigmaMachine.encode(_crib);
				if(decoded == _plaintxt){
					_config.offsets[0]=k;
					_config.offsets[1]=j;
					_config.offsets[2]=i;
					return true;
				}
			}
		}
	}
	return false;
}


bool EnigmaDecrypter::run(std::string crib, std::string plaintxt){
	crib = custom_utils::removeSpecial(crib);
	_crib = custom_utils::toUppercase(crib);
	plaintxt = custom_utils::removeSpecial(plaintxt);
	_plaintxt = custom_utils::toUppercase(plaintxt);
	return offsetIterator();
}

RotorConfig EnigmaDecrypter::getRotorConfig(){
	return _config;
}

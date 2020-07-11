//
//  config.h
//  EnigmaMachine
//
//  Created by Ayush Agrawal on 10/07/20.
//  Copyright © 2020 Ayush Agrawal. All rights reserved.
//

#pragma once

#include <string>

//Rotor names
#define ROTOR_1 0
#define ROTOR_2 1
#define ROTOR_3 2
#define ROTOR_4 3
#define ROTOR_5 4

#define REFLECTOR_B 0
#define REFLECTOR_B_THIN 1
#define REFLECTOR_C 2
#define REFLECTOR_C_THIN 3

#define NO_ROTOR_TYPES 5
#define NO_REFLECTOR_TYPES 4

//Rotor Wirings
//const int wiring_rotor1[][2] = { {0, 15}, {1, 4}, {2, 25}, {3, 20}, {4, 14}, {5, 7}, {6, 23}, {7, 18}, {8, 2},
//                                {9, 21}, {10, 5}, {11, 12}, {12, 19}, {13, 1}, {14, 6}, {15, 11}, {16, 17}, {17, 8},
//                                {18, 13}, {19, 16}, {20, 9}, {21, 22}, {22, 0}, {23, 24}, {24, 3}, {25, 10} };
//
//const int wiring_rotor2[][2] = { {0, 25}, {1, 14}, {2, 20}, {3, 4}, {4, 18}, {5, 24}, {6, 3}, {7, 10}, {8, 5},
//                                {9, 22}, {10, 15}, {11, 2}, {12, 8}, {13, 16}, {14, 23}, {15, 7}, {16, 12}, {17, 21},
//                                {18, 1}, {19, 11}, {20, 6}, {21, 13}, {22, 9}, {23, 17}, {24, 0}, {25, 19} };
//
//const int wiring_rotor3[][2] = { {0, 4}, {1, 7}, {2, 17}, {3, 21}, {4, 23}, {5, 6}, {6, 0}, {7, 14}, {8, 1},
//                                {9, 16}, {10, 20}, {11, 18}, {12, 8}, {13, 12}, {14, 25}, {15, 5}, {16, 11}, {17, 24},
//                                {18, 13}, {19, 22}, {20, 10}, {21, 19}, {22, 15}, {23, 3}, {24, 9}, {25, 2} };
//
//const int wiring_rotor4[][2] = { {0, 8}, {1, 12}, {2, 4}, {3, 19}, {4, 2}, {5, 6}, {6, 5}, {7, 17}, {8, 0},
//                                {9, 24}, {10, 18}, {11, 16}, {12, 1}, {13, 25}, {14, 23}, {15, 22}, {16, 11}, {17, 7},
//                                {18, 10}, {19, 3}, {20, 21}, {21, 20}, {22, 15}, {23, 14}, {24, 9}, {25, 13} };
//
//const int wiring_rotor5[][2] = { {0, 16}, {1, 22}, {2, 4}, {3, 17}, {4, 19}, {5, 25}, {6, 20}, {7, 8}, {8, 14},
//                                {9, 0}, {10, 18}, {11, 3}, {12, 5}, {13, 6}, {14, 7}, {15, 9}, {16, 10}, {17, 15},
//                                {18, 24}, {19, 23}, {20, 2}, {21, 21}, {22, 1}, {23, 13}, {24, 12}, {25, 11} };
//
//const int wiring_reflector[][2] = {  {0, 21}, {1, 10}, {2, 22}, {3, 17}, {4, 6}, {5, 8}, {6, 4}, {7, 19}, {8, 5},
//                                    {9, 25}, {10, 1}, {11, 20}, {12, 18}, {13, 15}, {14, 16}, {15, 13}, {16, 14}, {17, 3},
//                                    {18, 12}, {19, 7}, {20, 11}, {21, 0}, {22, 2}, {23, 24}, {24, 23}, {25, 9} };


const std::string wiring_rotor1 = "EKMFLGDQVZNTOWYHXUSPAIBRCJ";
const std::string wiring_rotor2 = "AJDKSIRUXBLHWTMCQGZNPYFVOE";
const std::string wiring_rotor3 = "BDFHJLCPRTXVZNYEIWGAKMUSQO";
const std::string wiring_rotor4 = "ESOVPZJAYQUIRHXLNFTGKDCMWB";
const std::string wiring_rotor5 = "VZBRGITYUPSDNHLXAWMJQOFECK";
const std::string wiring_reflectorB = "VZBRGITYUPSDNHLXAWMJQOFECK";
const std::string wiring_reflectorC = "FVPJIAOYEDRZXWGCTKUQSBNMHL";
const std::string wiring_reflectorB_thin = "ENKQAUYWJICOPBLMDXZVFTHRGS";
const std::string wiring_reflectorC_thin = "RDOBJNTKVEHMLFCWZAXGYIPSUQ";
const std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

const char rot1_notch = 'Q';
const char rot2_notch = 'E';
const char rot3_notch = 'V';
const char rot4_notch = 'J';
const char rot5_notch = 'Z';

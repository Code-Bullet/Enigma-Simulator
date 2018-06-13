class EndThing {
  int[][] wiring;


  EndThing() {
    wiring = new int[][] {{0, 21}, {1, 10}, {2, 22}, {3, 17}, {4, 6}, {5, 8}, {6, 4}, {7, 19}, {8, 5}, {9, 25}, {10, 1}, {11, 20}, {12, 18}, {13, 15}, {14, 16}, {15, 13}, {16, 14}, {17, 3}, {18, 12}, {19, 7}, {20, 11}, {21, 0}, {22, 2}, {23, 24}, {24, 23}, {25, 9}};
  }


  int runThrough(int input, boolean forward) {

    input = (input) % 26;
    if (forward) {
      return wiring[input][1];
    } else {
      return wiring[input][0];
    }




    //    for (int i = 0; i< 26; i++) {
    //      if (forward) {
    //        if (input == wiring[i][0]) {
    //          return wiring[i][1];
    //        }
    //      } else {
    //        if (input == wiring[i][1]) {
    //          return wiring[i][0];
    //        }
    //      }
    //    }

    //    return -1;
  }
}
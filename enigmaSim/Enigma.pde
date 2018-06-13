class Enigma {
  Rotor rotor1;
  Rotor rotor2;
  Rotor rotor3;
  EndThing end;
  PlugBoard plugBoard;
  boolean showPlugs = false;

  //---------------------------------------------------------------------------------------------------------------------------------------------------------------
  Enigma() {
    end = new EndThing();
    plugBoard = new PlugBoard();
  }
  //---------------------------------------------------------------------------------------------------------------------------------------------------------------
  void setRotors(int first, int second, int third) {

    if (first != second && first != third && second != third) {
      rotor1 = new Rotor(first, 1);
      rotor2 = new Rotor(second, 2);
      rotor3 = new Rotor(third, 3);
    }
  }
  //---------------------------------------------------------------------------------------------------------------------------------------------------------------


  void setRotorPositions(int first, int second, int third) {
    rotor1.position = first;
    rotor2.position = second;
    rotor3.position = third;
  }
  //---------------------------------------------------------------------------------------------------------------------------------------------------------------

  char runMachine(char inputChar) {
    if (rotor1.rotorNo == rotor2.rotorNo || rotor3.rotorNo == rotor2.rotorNo  || rotor1.rotorNo == rotor3.rotorNo ) {
      println("Error rotors cannot have the same number"); 
      return '1';
    }
    int inputNo = letterOrderLowerCase.indexOf(inputChar); 

    int currentNo = inputNo;
    currentNo = plugBoard.runThrough(currentNo);
    currentNo = rotor1.runThrough(currentNo, true);
    currentNo = rotor2.runThrough(currentNo, true);
    currentNo = rotor3.runThrough(currentNo, true);
    currentNo = end.runThrough(currentNo, true);
    currentNo = rotor3.runThrough(currentNo, false);
    currentNo = rotor2.runThrough(currentNo, false);
    currentNo = rotor1.runThrough(currentNo, false);
    currentNo = plugBoard.runThrough(currentNo);
    if (currentNo == -1) {
      println(rotor1.position, rotor2.position, rotor3.position);
    }

    if (currentNo == inputNo) {
      println(inputNo, rotor1.position, rotor2.position, rotor3.position);
    }
    moveRotors();

    return letterOrderLowerCase.charAt(currentNo);
  }

  //---------------------------------------------------------------------------------------------------------------------------------------------------------------


  void moveRotors() {
    rotor1.position +=1;
    if (rotor1.position == 26) {
      rotor1.position = 0;
      rotor2.position+=1;
      if (rotor2.position == 26) {
        rotor2.position = 0;
        rotor3.position+=1;
        if (rotor3.position == 26) {
          rotor3.position = 0;
        }
      }
    }
  }

  //---------------------------------------------------------------------------------------------------------------------------------------------------------------
  void show() {
    if (!showPlugs) {
      stroke(0);
      for (int i = 0; i< letters.length; i++) {
        letters[i].show();
      }
      rotor1.show();
      rotor2.show();
      rotor3.show();
      if (rotor1.rotorNo == rotor2.rotorNo || rotor3.rotorNo == rotor2.rotorNo  || rotor1.rotorNo == rotor3.rotorNo ) {
        fill(255,0,0);
        text("Cannot use the same rotor twice", width/2,50);
      }
    } else {
      plugBoard.show();
    }
  }

  //-----------------------------------------------------------------------------------------------------------------------------------------------------------------
  void randomRotors() {
    int rand1 = floor(random(5));
    int rand2 = floor(random(5));
    while (rand1 == rand2) {
      rand2 = floor(random(5));
    }

    int rand3 = floor(random(5));
    while (rand1 == rand3 || rand2 == rand3) {
      rand3 = floor(random(5));
    }
    setRotors(rand1, rand2, rand3);
  }


  void randomPositions() {
    setRotorPositions(floor(random(26)), floor(random(26)), floor(random(26)));
  }

  //--------------------------------------------------------------------------------------------------------------------------------------------------

  void click(int x, int y) {
    if (y > height*(9.0/10.0) && !enigma.plugBoard.movingPlug) {//if clicking the bottom of the screen then switch between plugs anad lamps
      enigma.showPlugs = !enigma.showPlugs;
    } else {

      enigma.rotor1.click(x, y);
      enigma.rotor2.click(x, y);
      enigma.rotor3.click(x, y);
      enigma.plugBoard.click(x, y);
    }
  }
  
  
  
  //------------------------------------------------------------------------------------------------------------
  
  char[] processWord(char[] input){
    char[] output = new char[input.length];
    for(int i = 0 ; i< input.length; i++){
      output[i] = runMachine(input[i]);
    }
    return output;
  }
}
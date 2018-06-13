class Light {
  char letter;
  int number;
  PVector pos;
  boolean lightUp  = false;

  Light(char let, int numb) {
    letter = let;
    number = numb;
    int level;
    int rowPos;
    float x;
    float y;
    if (numb < 10) {
      level = 1;
      rowPos = numb;
      x = (rowPos+1.0)*width/11;
    } else if (numb < 19) {
      level = 2;
      rowPos = numb - 10;
      x = (rowPos+1.5)*width/11;
    } else {

      level = 3;
      rowPos = numb - 19;
      x = (rowPos+2.0)*width/11;
    }
    y  = height/3 + level*(height*2/3)/4;
    pos = new PVector(x, y);
  }





  void show() {
    if (lightUp) {
      imageMode(CENTER);
      image(lightOnSprite, pos.x, pos.y);
      fill(200,100,0);
    } else {
      strokeWeight(5);
      fill(150);
      ellipse(pos.x, pos.y, 80, 80);
      fill(50);
    }
    textAlign(CENTER, CENTER);
    textSize(20);
    text(letter, pos.x, pos.y);
  }
}
class PlugPoint {
  PVector pos = new PVector();
  char letter;
  int letterNo;
  boolean occupied = false;
  PlugPoint(int no) {
    letterNo = no;
    letter = letterOrder.charAt(no);
    int level;
    int rowPos;
    float x;
    float y;
    if (no < 10) {
      level = 1;
      rowPos = no;
      x = (rowPos+1.0)*width/11;
    } else if (no < 19) {
      level = 2;
      rowPos = no - 10;
      x = (rowPos+1.5)*width/11;
    } else {

      level = 3;
      rowPos = no - 19;
      x = (rowPos+2.0)*width/11;
    }
    y  = height/3 + level*(height*2/3)/4;
    if(no%3 ==0){
     y += 15; 
      
    }
    pos = new PVector(x, y);
  }


  void show() {
    textAlign(CENTER,CENTER);
    textSize(20);
    fill(255);
    text(letter, pos.x, pos.y-40);
    fill(20);
    stroke(255);
    
    ellipse(pos.x, pos.y, 20, 20);
    ellipse(pos.x, pos.y+30, 20, 20);
  }
  
  boolean click(int x, int y){
    if (x < pos.x +15 && x > pos.x - 15 && y < pos.y +35 && y > pos.y - 35) {
      return true;
    }
    return false;    
  }
}
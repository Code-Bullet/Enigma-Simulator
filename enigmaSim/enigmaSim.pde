Light[] letters = new Light[26];
String letterOrder =          "QWERTYUIOPASDFGHJKLZXCVBNM";
String letterOrderLowerCase = "qwertyuiopasdfghjklzxcvbnm";
PImage lightOnSprite;
boolean keyIsDown = false;
char keyDown;
char keyLight;
PImage blackground;

Enigma enigma;
void setup() {
  frameRate(30);
  fullScreen();
  blackground = loadImage("blacktexture.jpg");
  for (int i = 0; i< letters.length; i++) {
    letters[i] = new Light(letterOrder.charAt(i), i);
  }
  lightOnSprite = loadImage("light.png");

  enigma = new Enigma();
  enigma.randomRotors();
  enigma.randomPositions();
}



void draw() {
  background(0);
  imageMode(CORNER);
  image(blackground,0,0, width,height);
  enigma.show();
}

void mousePressed() {
  enigma.click(mouseX,mouseY);
}


void keyPressed() {
  if (letterOrderLowerCase.indexOf(key) != -1 && !keyIsDown && !enigma.showPlugs) {
    char output = enigma.runMachine(key);
    if(output == '1'){
      return;
      
    }
    keyLight = output;
    letters[letterOrderLowerCase.indexOf(output)].lightUp = true;
    keyIsDown = true;
    keyDown = key;
  }
}


void keyReleased() {
  if (letterOrderLowerCase.indexOf(key) != -1 && key == keyDown) {
    letters[letterOrderLowerCase.indexOf(keyLight)].lightUp = false;
    keyIsDown = false;
  }
}
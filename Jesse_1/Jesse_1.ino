#include <AFMotor.h> //Adafruit Motor Shield

AF_Stepper motor1(200, 1);
AF_Stepper motor2(200, 2);
///////////////////SENSOR STUFF



////////
////////////////////////
////////
////////
////////
//long stepUnit = 100L;  // DIVIDE or MULTIPLY 82 or 125  (might be either?)
// 1cm = 
long w = 9800L; // width between motors in cm x 100
long h = 20000L; // height width between motors and ground  in cm x 100
long startX = 2700L; //x starting point in cm 
long startY = 4400L; //y starting point in cm 
long drawingWidth = 4000L; //drawingWidth = 5625L
long drawingHeight = 6000L;//drawingHeight = 7500L
////////
////////
////////
////////
////////

long x1;
long y1;
long x2, y2;

// Approximate length of strings from marker to staple, think patagorean theorem
long a1; //left hypotenuse
long b1; //right hypotenuse
long a2;
long b2;

int stepX, stepY;
int magnitude = 10; //the smallest straight line 5-10 is about half a millimeter
int defaultMagnitude = 10;

int choice; //choose a random thing every so and so minutes
int squareScale; //size of the people squares
int squareStep; // density of the people squares

int directionX;
int directionY;

unsigned long currentTime;
unsigned long previousTime = 0;
const long interval = 240000; /// time between switching drawing states   1110000 default
int switchCase; //variable to control which drawing state to choose
int squareChoice; //variable to control whick square to draw within the above choice
int lineChoice;

int lineLength; //size of the people squares
int lineStep; // density of the people squares

void setup() {
  x1 = startX;
  y1 = startY;
  a1 = sqrt(pow(x1, 2) + pow(y1, 2));
  b1 = sqrt(pow((w - x1), 2) + pow(y1, 2));
  motor1.setSpeed(58);
  motor2.setSpeed(58);
  delay(2000);
  randomSeed(analogRead(0));

}


void loop() {

  //testBoundariesBox();
  
    /*
    y2 = y1 - random(drawingHeight);
    checkEdges();
    moveAndUpdate();
    checkEdges();

    x2 = x1 - random(drawingWidth);
    checkEdges();
    moveAndUpdate();
    checkEdges();

     y2 = y1 + random(drawingHeight);
    checkEdges();
    moveAndUpdate();
    checkEdges();

    x2 = x1 + random(drawingWidth);
    checkEdges();
    moveAndUpdate();
    checkEdges();

    */

    
    
 

  }











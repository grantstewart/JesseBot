void moveAndUpdate(){
  //this controlls the actual movement of the stepper motors, adding or removing steps as necessary.
  // a2 and b2 are the final lengths of the left and right strings
  a2 = sqrt(pow(x2,2)+pow(y2,2));
  b2 = sqrt(pow((w-x2),2)+pow(y2,2));
  int stepA;
  int stepB;
  if (a2>a1) { 
    stepA=1; 
  }
  if (a1>a2) { 
    stepA=-1;
  }
  if (a2==a1) {
    stepA=0; 
  }
  if (b2>b1) { 
    stepB=1; 
  }
  if (b1>b2) { 
    stepB=-1;
  }
  if (b2==b1) {
    stepB=0; 
  }

  // Change the length of a1 and b1 until they are equal to the desired length
  while ((a1!=a2) || (b1!=b2)) {
    if (a1!=a2) { 
      a1 += stepA;

      if (stepA == -1){
        motor1.step(1, BACKWARD, INTERLEAVE);
      }
      if (stepA == 1){
        motor1.step(1, FORWARD, INTERLEAVE);
      }
      if(stepA == 0){
        //    motor1.release();

      }
      //delay(1);

    }
    if (b1!=b2) { 
      b1 += stepB;

      if (stepB == -1){
        motor2.step(1, FORWARD, INTERLEAVE);
      }
      if (stepB == 1){
        motor2.step(1, BACKWARD, INTERLEAVE);
      }

      if(stepB == 0){
        //  motor2.release();

      }  
    }
  }
  x1 = x2;
  y1 = y2;
  
  
  
}

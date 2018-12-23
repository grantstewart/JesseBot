void testBoundariesBox(){

  x2 = startX;
  y2 = startY;
  moveAndUpdate();

  
  //checkEdges();
  x2 = startX+drawingWidth;
  y2 = startY;
  moveAndUpdate();
  
  x2 = startX+drawingWidth;
  y2 = startY+drawingHeight;

  moveAndUpdate();
  x2 = startX;
  y2 = startY+drawingHeight;

  moveAndUpdate();


}


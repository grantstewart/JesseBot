void  checkEdges(){

   if(x2<startX){
    x2=startX;
    
  }
  if(x2>startX+drawingWidth){
    x2=startX+drawingWidth;
    
  }
  
  if(y2<startY){
    y2=startY;
    
  }
  
  if(y2>startY+drawingHeight){
    y2 = startY+drawingHeight;
    
  }
}

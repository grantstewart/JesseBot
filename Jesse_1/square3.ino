void square3() {
  //move up diagonally
  for (int i = squareScale; i > squareStep; i -= squareStep) {
    y2 = y1 - i;
    checkEdges();
    moveAndUpdate();
    checkEdges();

    x2 = x1 - i;
    checkEdges();
    moveAndUpdate();
    checkEdges();

    y2 = y1 + i;
    checkEdges();
    moveAndUpdate();
    checkEdges();

    x2 = x1 + i;
    checkEdges();
    moveAndUpdate();
    checkEdges();
  }





}

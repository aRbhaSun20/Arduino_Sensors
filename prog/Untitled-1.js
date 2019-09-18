/*
 * @name Width and Height
 * @description The 'width' and 'height' variables contain the
 * width and height of the display window as defined in the createCanvas()
 * function.
 */
function setup() {
    createCanvas(420, 400);
  }
  
  function draw() {
    background(128);
   noStroke();
    for (let i = 0; i < height; i += 20) {
      for(let j = 0;j <width; j++){
      fill(19, 206, 15);
      rect(0, i, width, 10);
      fill(25);
      rect(i, 0, 10, height);
      }
    }
  }
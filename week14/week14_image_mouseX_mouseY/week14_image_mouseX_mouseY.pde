PImage img;//在外面宣告才能使用
void setup(){//設定
  size(500,300);
  img = loadImage("image.png");
}
void draw(){
  image(img,mouseX,mouseY);
}

PShape gundam;
void setup(){
  size(500,500,P3D);
  gundam = loadShape("Gundam.obj");
}
void draw(){
  background(128);
  translate(250,500);
  scale(20,-20,20);//放大20倍，倒過來
  rotateY( radians(frameCount));//要放在下面
  shape(gundam);//太小
}

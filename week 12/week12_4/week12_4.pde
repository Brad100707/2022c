void setup(){
  size(400,300);
  textSize(40);
}
int choice = -1;
void draw(){
  background(#DFEA45);
  fill(#456FEA);
  if(choice==0) rect(50,50, 150, 2);
  if(choice==1) rect(50,100, 150, 2);
  if(choice==2) rect(50,150, 150, 2);
  text("Choise 1", 50, 50);
  text("choise 2", 50, 100);
  text("Choise 3", 50, 150);
}

void mousePressed() {
  choice = int(random(3));
  //choice = (choice + 1) % 3;
}

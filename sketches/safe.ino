int ledYellow = 10;
int ledBlue = 11;
int ledRed = 12;
int ledGreen = 13;
int buttonOne = 1;
int buttonTwo = 2;
int buttonThree = 3;
int buttonFour = 4;

int combo1 [4];
int combo2 [4];



void setup() {
 
  pinMode(ledYellow, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(buttonOne, INPUT);
  pinMode(buttonTwo, INPUT);
  pinMode(buttonThree, INPUT);
  pinMode(buttonFour, INPUT); 

  digitalWrite(ledYellow, HIGH);
  combo1[0] = Combo();
  combo1[1] = Combo();
  combo1[2] = Combo();
  combo1[3] = Combo();
  digitalWrite(ledYellow, LOW);
  

}

void loop() {
  int flag = 1;
  digitalWrite(ledBlue, HIGH);
  combo2[0] = Combo();
  combo2[1] = Combo();
  combo2[2] = Combo();
  combo2[3] = Combo();
  digitalWrite(ledBlue, LOW);

  if(combo1[0] != combo2[0])
    flag =0;
  if(combo1[1] != combo2[1])
    flag =0;
  if(combo1[2] != combo2[2])
    flag =0;
  if(combo1[3] != combo2[3])
    flag =0;

 if(flag == 1){
  digitalWrite(ledGreen, HIGH);
  tone(7,1000,200);
  delay(500);
  tone(7,1000,200);
  delay(3000);
  digitalWrite(ledGreen, LOW);
 }
 else{
  digitalWrite(ledRed, HIGH);
  tone(7,1000,500);
  delay(3000);
  digitalWrite(ledRed, LOW);

 }


}

int Combo(){
  delay(200);
int buttonOneState;
int buttonTwoState;
int buttonThreeState;
int buttonFourState;
  int x = 100;

  while(x>4){
   buttonOneState = digitalRead(buttonOne);
   buttonTwoState = digitalRead(buttonTwo) ;
   buttonThreeState = digitalRead(buttonThree);
   buttonFourState = digitalRead(buttonFour);
  if (buttonOneState == LOW)
   x = 1;
  if (buttonTwoState == LOW)
   x = 2;
  if (buttonThreeState == LOW)
   x = 3;
  if (buttonFourState == LOW)
   x = 4;
  }
 
 

 return x;
   
}








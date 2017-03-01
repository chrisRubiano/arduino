int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
  Serial.begin(9600);
}
 
void loop()
{
  //Fade in red
  for (int i=0;i<=255;i++){
      analogWrite(redPin, i);
      delay(5);
    }
  //Fade in blue
  for (int i=0;i<=255;i++){
      analogWrite(bluePin, i);
      delay(5);
    }
  //Fade in green
  for (int i=0;i<=255;i++){
      analogWrite(greenPin, i);
      delay(5);
    }
  //Fade out red
  for (int i=0;i<=255;i++){
      analogWrite(redPin, 255-i);
      delay(5);
    }
  //Fade out blue
  for (int i=0;i<=255;i++){
      analogWrite(bluePin, 255-i);
      delay(5);
    }
  //Fade out blue
  for (int i=0;i<=255;i++){
      analogWrite(greenPin, 255-i);
      delay(5);
    }
    delay(50);
}

 


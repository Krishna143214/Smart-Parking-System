



 #include <Servo.h>


long duration;
int distance;
const int trig=2;
const int echo=3;
const int ir1=4;
const int ir2=5;
const int ir3=6;
const int buzz=8;
const int fled=9;

Servo motar;

void setup(){
  motar.attach(7); //attaching servo

  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ir1,INPUT);
   pinMode(ir2,INPUT);
    pinMode(ir3,INPUT);
     pinMode(buzz,OUTPUT);
     pinMode(fled,OUTPUT);
  
motar.write(90);
Serial.begin(9600);

}

void loop(){

  int car1yn=digitalRead(ir1);
  int car2yn=digitalRead(ir2);
  int car3yn=digitalRead(ir3);

 

digitalWrite(trig,LOW);
delayMicroseconds(2);


digitalWrite(trig,HIGH);
delayMicroseconds(8);


digitalWrite(trig,LOW);


duration=pulseIn(echo,HIGH);

distance=(duration*0.034)/2;
Serial.println(distance);




if(distance<15 && (car1yn==1 || car2yn==1)){
  motar.write(0);
  delay(2000);


 



}

else{
  motar.write(90);

  if(distance<15 && car1yn==0 && car2yn==0){
  
    digitalWrite(buzz,HIGH);
  }
  else{

   digitalWrite(buzz,LOW);}

}


if(car3yn==0){
   motar.write(0);
  delay(2000);

}

else{
  motar.write(90);
}


if(car1yn==0 && car2yn==0){
  digitalWrite(fled,HIGH);
}
else{
   digitalWrite(fled,LOW);
}


















  

}












  

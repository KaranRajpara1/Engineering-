const int trigPin=12;
const int echoPin=11;
const int trigPin2=5;
const int echoPin2=4;
long duration,duration2;
int angle,distance,distance2,flag=0;
unsigned long t1=0,t2=0;
float pos=0.0,velocity;

//#include<Servo.h>
//Servo myservo;

void setup()
{
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  //pinMode(trigPin2,OUTPUT);
  //pinMode(echoPin2,INPUT);
  //m/yservo.attach(9);
  //myservo.write(0);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=(duration*0.034)/2;

  /*digitalWrite(trigPin2,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2,LOW);
  duration2=pulseIn(echoPin2,HIGH);
  distance2=((duration2)*0.034)/2;
  if(distance<30 && distance>0 && flag==0)
  {
    Serial.println("1st crossed");
    t1=millis();
    Serial.println(t1);
    flag=1;
  }
  if(distance2<30 && flag==1)
  {
    Serial.println("2nd crossed");
    t2=millis();
    Serial.println(t2);
    flag=2;
  }
  if(t1!=0 && t2!=0 && flag==2)
  {
    velocity=(450000.0)/(t2-t1);
    Serial.print("VELOCITY");
    Serial.println(velocity);
    angle=(int)velocity;
    Serial.println(angle);
    myservo.write((int)angle);
    flag=0;
   }
    delay(5000);
     myservo.write(0);
 }*/
 Serial.println(distance);
 delay(1000);
}

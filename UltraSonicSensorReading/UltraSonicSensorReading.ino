int distance = 60;
long duration;
const int echoPin = 2; 
const int trigPin = 11; 
const int led = 11; 
long intensity;
bool cycle_1 = true;


void setup() {

  pinMode(echoPin, INPUT); // echo 
  pinMode(trigPin, OUTPUT); // trig
  pinMode(led, OUTPUT); // led
  Serial.begin(9600);
}

void loop() {

  distance--;
  if (distance == 0){
    distance = 60;
  }

  intensity = (255*(distance-15))/30;
  Serial.println(distance);
  if (distance <= 15){
    analogWrite(led, 0);
    Serial.println("HIGH");
  }
  else if (distance <= 45){
    Serial.println("MID");
    analogWrite(led, intensity);
  }
  else{
    Serial.println("LOW");
    analogWrite(led, 255);  
  }

  delay(1000);
  
}
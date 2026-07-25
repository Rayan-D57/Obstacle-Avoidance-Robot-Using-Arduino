#include <Servo.h>

Servo myServo;

// First L293D 
#define ENA1 5
#define IN1 2
#define IN2 3

#define ENB1 6
#define IN3 4
#define IN4 7

// Second L293D 
#define ENA2 11
#define IN5 8
#define IN6 9

#define ENB2 10
#define IN7 12
#define IN8 13

// Ultrasonic Sensor 
#define TRIG A0
#define ECHO A1

// Servo Motor 
#define SERVO_PIN A2

void setup() {

  // Configure motor control pins
  pinMode(ENA1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB1, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA2, OUTPUT);
  pinMode(IN5, OUTPUT);
  pinMode(IN6, OUTPUT);

  pinMode(ENB2, OUTPUT);
  pinMode(IN7, OUTPUT);
  pinMode(IN8, OUTPUT);

  // Configure ultrasonic sensor pins
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  // Initialize the servo motor
  myServo.attach(SERVO_PIN);
  myServo.write(90);

  // Set motor speed to maximum
  analogWrite(ENA1,255);
  analogWrite(ENB1,255);
  analogWrite(ENA2,255);
  analogWrite(ENB2,255);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {

  // Measure the distance
  long distance = getDistance();

  Serial.println(distance);

  // Check if an obstacle is detected
  if(distance <= 10){

    // Stop all motors
    stopMotors();

    // Scan using the servo motor
    myServo.write(0);
    delay(700);

    myServo.write(180);
    delay(700);

    myServo.write(90);
    delay(700);

    // Move backward
    backward();
    delay(2000);

    stopMotors();
    delay(500);

  }

  else{

    // Continue moving forward
    forward();

  }

}



// Measure the distance using the ultrasonic sensor
long getDistance(){

  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG,LOW);

  long duration = pulseIn(ECHO,HIGH);

  long distance = duration * 0.034 / 2;

  return distance;

}



// Move all motors forward
void forward(){

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,HIGH);
  digitalWrite(IN8,LOW);

}



// Move all motors backward
void backward(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,HIGH);

}



// Stop all motors
void stopMotors(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);

  digitalWrite(IN7,LOW);
  digitalWrite(IN8,LOW);

}
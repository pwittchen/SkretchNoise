#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// #define DEBUG               // uncomment for DEBUG mode

#define SERVO_MIN 0            // default: 150 (min: 0, max: 4095)
#define SERVO_MAX 100          // default: 550 (min: 0, max: 4095)
#define SERVO_ON_SIGNAL 0      // it's not relevant in this project
#define SERVO_DELAY_TIME 100   // default: 550

#define SERVO_CHANNEL_0 0
#define SERVO_CHANNEL_1 1
#define SERVO_CHANNEL_2 2

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
float maxLightIntensity = 0;

void setup() {
 pwm.begin();
 pwm.setPWMFreq(60);
 
  #ifdef DEBUG
    Serial.begin(9600);
  #endif
}

void loop() {
  float lightIntensity = analogRead(A0);
  
  #ifdef DEBUG
    Serial.println(lightIntensity);
    delay(200);
  #endif
    
  float lightThreshold = getCalibratedLightThreshold(lightIntensity);
  
  if(lightIntensity < lightThreshold) {    
    rotateServos();
  }  
}

float getCalibratedLightThreshold(float lightIntensity) {
  if(lightIntensity > maxLightIntensity) {
    maxLightIntensity = lightIntensity; 
  }
  
  return maxLightIntensity * 0.9;
}


void rotateServos() {
  pwm.setPWM(SERVO_CHANNEL_0, SERVO_ON_SIGNAL, SERVO_MAX);
  pwm.setPWM(SERVO_CHANNEL_1, SERVO_ON_SIGNAL, SERVO_MAX);
  pwm.setPWM(SERVO_CHANNEL_2, SERVO_ON_SIGNAL, SERVO_MAX);
  delay(SERVO_DELAY_TIME);
  pwm.setPWM(SERVO_CHANNEL_0, SERVO_ON_SIGNAL, SERVO_MIN);
  pwm.setPWM(SERVO_CHANNEL_1, SERVO_ON_SIGNAL, SERVO_MIN);
  pwm.setPWM(SERVO_CHANNEL_2, SERVO_ON_SIGNAL, SERVO_MIN);
  delay(SERVO_DELAY_TIME);
}

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int buzzerPin = 6;
int sensorPin = 2;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  lcd.begin(16, 2);
  lcd.print("Game Ready");
}

void loop() {
  if (digitalRead(sensorPin) == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    lcd.clear();
    lcd.print("Game Over");
    delay(2000);
    digitalWrite(buzzerPin, LOW);
  }
}

#include <Servo.h>

Servo s1, s2, s3, s4, s5;
char data_in;

void setup() {
  s1.attach(3);
  s2.attach(4);
  s3.attach(5);
  s4.attach(6);
  s5.attach(7);

  Serial.begin(9600);
  Serial.println("Bionic Arm Control Ready.");
  Serial.println("Send 0-5 or f/c/d for custom positions.");
}

void loop() {
  if (Serial.available()) {
    data_in = Serial.read();
    Serial.print("Received: ");
    Serial.println(data_in);

    switch (data_in) {
      case '1':
        s1.write(160);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case '2':
        s1.write(160);
        s2.write(130);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case '3':
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(0);
        s5.write(125);
        break;

      case '4':
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(130);
        s5.write(125);
        break;

      case '5':
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(130);
        s5.write(0);
        break;

      case '0':
        s1.write(20);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case 'f':
        s1.write(20);
        s2.write(130);
        s3.write(130);
        s4.write(0);
        s5.write(125);
        break;

      case 'c':
        s1.write(160);
        s2.write(0);
        s3.write(150);
        s4.write(130);
        s5.write(125);
        break;

      case 'd':
        s1.write(20);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(0);
        break;
    }
    delay(200);
  }
}

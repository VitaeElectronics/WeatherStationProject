int sensePin = A0;
int sensorInput;
double temp;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorInput = analogRead(A0);
temp = (double)sensorInput / 1024;
temp = temp * 5;
temp = temp - 0.5;
temp = temp * 100;

Serial.print("Current Celsius Temperature: ");
Serial.println(temp);
Serial.print("Current Fahrenheit Temperature: ");
Serial.println((temp * 9.0/5.0) + 32.0);
Serial.println();
delay(3000);
}

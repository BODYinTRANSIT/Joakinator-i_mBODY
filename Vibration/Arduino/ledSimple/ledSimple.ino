int ledPin = 2;

void setup()
{ pinMode (ledPin, OUTPUT);
  Serial.begin(115200);
  //Serial.println(0);
}

void loop()
{ digitalWrite (ledPin, HIGH);
  delay(1000);
  digitalWrite (ledPin, LOW);
  delay(1000);
}

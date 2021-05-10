int p1 = A5;
int p2 = A0;

void setup() {
    pinMode(p1, OUTPUT);
    pinMode(p2, INPUT);
    
    digitalWrite(p2, HIGH);
    
}
    
void loop() {
int lightlevel = analogRead(p1);

if (lightlevel < 1) Particle.publish("Sun", "Down", PRIVATE);
if (lightlevel > 1) Particle.publish("Sun", "Up", PRIVATE);

delay(6000);
}

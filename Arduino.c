void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

char vnos[255];
char *lokacija = vnos;
unsigned long timer = millis();
bool state = HIGH;


// the loop function runs over and over again forever
void loop() {
    if((millis()- timer) > 1000 ){
        state = !state;
        digitalWrite(LED_BUILTIN,state);
        *lokacija = 'A';
        lokacija++;
        Serial.println(vnos);
        timer = millis();
    }
    /*
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
    *lokacija = 'A';
    lokacija++;
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    Serial.println(vnos);
    delay(1000);   */                   // wait for a second
}
const int buttonPin = 2;
const int ledPin = 4;

int green = 10;
int blue = 9;
int red = 11;
int tala = 0;

int portA = 0;
int portB = 1;
int portC = 5;
int portD = 3;
int portE = 4;
int portF = 6;
int portG = 7;
int portH = 5;
int portI = 8;
int portJ = 12;

int buttonState = 0;
void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(buttonPin, INPUT);

    pinMode(portA, OUTPUT);
    pinMode(portB, OUTPUT);
    pinMode(portC, OUTPUT);
    pinMode(portD, OUTPUT);
    pinMode(portE, OUTPUT);
    pinMode(portF, OUTPUT);
    pinMode(portG, OUTPUT);
    pinMode(portH, OUTPUT);
    pinMode(portI, OUTPUT);
    pinMode(portJ, OUTPUT);
    digitalWrite(5, HIGH);
}

void loop() {
    buttonState = digitalRead(buttonPin);

    if (tala == 0) {
        digitalWrite(portE, 0);
        digitalWrite(portF, 1);
        digitalWrite(portA, 0);
        digitalWrite(portB, 0);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (buttonState == HIGH) {
        tala++;
    }

    if (tala == 1) {
        digitalWrite(red, HIGH);

        digitalWrite(portE, 0);
        digitalWrite(portF, 1);
        digitalWrite(portA, 1);
        digitalWrite(portB, 1);;
        digitalWrite(portD, 0);
        digitalWrite(portG, 1);
        digitalWrite(portI, 1);
        digitalWrite(portJ, 0);
    }

    if (tala == 2) {
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);

        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 0);
        digitalWrite(portB, 0);
        digitalWrite(portD, 1);
        digitalWrite(portG, 1);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (tala == 3) {
        analogWrite(red, 188);

        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 1);
        digitalWrite(portB, 0);
        digitalWrite(portD, 0);
        digitalWrite(portG, 1);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (tala == 4) {
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        
        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 1);
        digitalWrite(portB, 1);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 1);
        digitalWrite(portJ, 0);
    }

    if (tala == 5) {
        analogWrite(red, 188);

        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 1);
        digitalWrite(portB, 0);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 1);
    }

    if (tala == 6) {
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);

        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 0);
        digitalWrite(portB, 0);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 1);
    }

    if (tala == 7) {
        analogWrite(red, 188);

        digitalWrite(portE, 0);
        digitalWrite(portF, 1);
        digitalWrite(portA, 1);
        digitalWrite(portB, 1);
        digitalWrite(portD, 0);
        digitalWrite(portG, 1);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (tala == 8) {
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
        digitalWrite(green, LOW);

        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 0);
        digitalWrite(portB, 0);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (tala == 9) {
        digitalWrite(portE, 0);
        digitalWrite(portF, 0);
        digitalWrite(portA, 1);
        digitalWrite(portB, 1);
        digitalWrite(portD, 0);
        digitalWrite(portG, 0);
        digitalWrite(portI, 0);
        digitalWrite(portJ, 0);
    }

    if (tala == 10) {
        tala = 0;
    }

    delay(250);
}
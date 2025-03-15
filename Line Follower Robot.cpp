#include <Arduino.h>

int mot1 = 9;
int mot2 = 6;
int mot3 = 5;
int mot4 = 3;

int left = 13;
int right = 12;

void LEFT(void);
void RIGHT(void);
void STOP(void);

void setup()
{
    pinMode(mot1, OUTPUT);
    pinMode(mot2, OUTPUT);
    pinMode(mot3, OUTPUT);
    pinMode(mot4, OUTPUT);

    pinMode(left, INPUT_PULLUP);
    pinMode(right, INPUT_PULLUP);
}

void loop()
{
    analogWrite(mot1, 255);
    analogWrite(mot2, 0);
    analogWrite(mot3, 255);
    analogWrite(mot4, 0);

    while (1)
    {
        int Left = digitalRead(left);
        int Right = digitalRead(right);

        if (Left == 0 && Right == 1)
            LEFT();
        else if (Right == 0 && Left == 1)
            RIGHT();
    }
}

void LEFT(void)
{
    analogWrite(mot3, 0);
    analogWrite(mot4, 30);

    while (digitalRead(left) == 0)
    {
        if (digitalRead(right) == 0)
        {
            STOP();
            while (digitalRead(left) == 0 && digitalRead(right) == 0);
        }
        analogWrite(mot1, 255);
        analogWrite(mot2, 0);
    }
    analogWrite(mot3, 255);
    analogWrite(mot4, 0);
}

void RIGHT(void)
{
    analogWrite(mot1, 0);
    analogWrite(mot2, 30);

    while (digitalRead(right) == 0)
    {
        if (digitalRead(left) == 0)
        {
            STOP();
            while (digitalRead(left) == 0 && digitalRead(right) == 0);
        }
        analogWrite(mot3, 255);
        analogWrite(mot4, 0);
    }
    analogWrite(mot1, 255);
    analogWrite(mot2, 0);
}

void STOP(void)
{
    analogWrite(mot1, 0);
    analogWrite(mot2, 0);
    analogWrite(mot3, 0);
    analogWrite(mot4, 0);
    delay(100);
}

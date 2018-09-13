#include "sfx.h"

BeepPin1 Sfx::b1;
BeepPin2 Sfx::b2;

void Sfx::sword(void) {
    b1.tone(b1.freq(300), 8);
    b2.tone(b2.freq(100), 9);
}

void Sfx::boomerang(void) {
    b1.tone(b1.freq(30), 20);
    b2.tone(b2.freq(10), 18);
}

void Sfx::playerDamage(uint8_t mult) {
    b1.tone(b1.freq(200), 8 * mult);
    b2.tone(b2.freq(80), 10 * mult);
}

void Sfx::successJingle(void) {
    b1.tone(b1.freq(800), 8);
    b2.tone(b2.freq(700), 10);
}

void Sfx::pickUpItem(void) {
    b1.tone(b1.freq(1000), 4);
    b2.tone(b2.freq(700), 5);
}

void Sfx::init(void) {
    b1.begin();
    b2.begin();
}

void Sfx::update(void) {
    b1.timer();
    b2.timer();

}
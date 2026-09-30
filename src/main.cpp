// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(26,12,22));



    while(true) {

        if(bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(1,10,22));
    }

        bn::core::update();
    }
}
// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();

    int red = 0;
    int green = 0;
    int blue = 0;

    bn::backdrop::set_color(bn::color(red,green,blue));


    while(true) {

        if(bn::keypad::a_pressed()) {
        bn::backdrop::set_color(bn::color(1,10,22));
    }
    if(bn::keypad::b_pressed()) {
        bn::backdrop::set_color(bn::color(20,15,8));
    }

        bn::core::update();
    }
}
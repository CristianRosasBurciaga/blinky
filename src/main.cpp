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


        //Conditions for the r value
        if(bn::keypad::a_pressed()) {
         red += 1;
        bn::backdrop::set_color(bn::color(red,green,blue));
        }
        if(bn::keypad::b_pressed()) {
            red -= 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }

        //Conditions for the g value
        if(bn::keypad::r_pressed()) {
         green += 1;
        bn::backdrop::set_color(bn::color(red,green,blue));
        }
        if(bn::keypad::l_pressed()) {
            green -= 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }
    
        //Conditions for the b value
        if(bn::keypad::right_pressed()) {
         blue += 1;
        bn::backdrop::set_color(bn::color(red,green,blue));
        }
        if(bn::keypad::left_pressed()) {
            blue -= 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }

        //If an rgb value goes under the minimum range, don't allow the value to change
        if(bn::keypad::b_pressed() && red == 0) {
            red += 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }
        if(bn::keypad::l_pressed() && green == 0) {
            green += 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }
        if(bn::keypad::left_pressed() && blue == 0) {
            blue += 1;
            bn::backdrop::set_color(bn::color(red,green,blue));
        }



        bn::core::update();
    }
}
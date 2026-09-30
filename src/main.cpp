// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(10,32,10));

    while(true) {
        bn::core::update();
    }
}
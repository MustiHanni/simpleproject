#include "foo.h"

Foo::Foo() : _value(0){};

void Foo::set_the_value (int value){
    _value = value;
}

int Foo::get_the_value (){
    return _value;
}
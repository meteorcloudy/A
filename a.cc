#include <stdio.h>
#include "a.h"

#define LIB_NAME "A1.1"

void hello_a(std::string caller) {
    printf("hello %s from %s!\n", LIB_NAME, caller.c_str());
}

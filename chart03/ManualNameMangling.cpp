#include <stdio.h>

namespace myname {
    int var = 42;
}

extern "C" double _ZN6myname3varE;

int main() {
    printf("%d\n", (int)_ZN6myname3varE);
    return 0;
}

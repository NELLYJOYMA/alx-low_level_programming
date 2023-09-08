#!/bin/bash
gcc -xc - <<EOF
#include <stdio.h>
int main() {
    puts("Programming is like building a multilingual puzzle");
    return 0;
}
EOF
./a.out

#!/bin/bash
gcc -shared -Wl,-some,liball.so -o liball.so *.o -lc

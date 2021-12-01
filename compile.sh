set -x

gcc -Wall -Wextra -Wpedantic -g -c lib.c
gcc -Wall -Wextra -Wpedantic -g lib.o chess.c -o chess
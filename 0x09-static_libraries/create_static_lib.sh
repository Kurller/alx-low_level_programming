
#!/bin/bash
gcc -wal -pedantic -werror -wextra -c *.c
ar rc liball.a *.o

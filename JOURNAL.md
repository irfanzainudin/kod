# dev journal

1. main function printing my env variables!?

code:

```c
#include <stdio.h>
#include <stdlib.h>

void start_kod() {
    printf("Starting kod...\n");
}

int main(int argc, char* argv[]) {
    start_kod();
    printf("%d\n", argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);
    printf("%s\n", argv[3]);
    printf("%s\n", argv[4]);
    printf("%s\n", argv[5]);
    printf("%s\n", argv[6]);
    printf("%s\n", argv[7]);
    printf("%s\n", argv[8]);
    printf("%s\n", argv[9]);
    return 0;
}
```

output:

```
irfan@Irfans-MacBook-Pro kod % make && ./kod hello
gcc kod.c -o kod
Starting kod...
2
./kod
hello
(null)
PWD=/Users/irfan/projects/c/kod
NVM_DIR=/Users/irfan/.nvm
USER=irfan
```

2. `fscanf` only reading parts of contents of a txt file

```c
...
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>

...

int main(int argc, char* argv[]) {
    start_kod();
    
    FILE *fptr; // fptr = File pointer
    fptr = fopen(argv[1], "r");
    char fcontents[10];
    fscanf(fptr, "%s", fcontents);
    printf("%s\n", fcontents);
    fclose(fptr);
    
    return 0;
}
```

3. 
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>

void start_kod() {
    printf("Starting kod...\n");
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("USAGE: %s <FILENAME>\n", argv[0]);
        exit(1);
    }

    start_kod();
    
    FILE *fptr; // fptr = File pointer
    int bufferLength = 255;
    char buffer[bufferLength]; /* not ISO 90 compatible */
    
    fptr = fopen(argv[1], "r");
    
    // Taken from: https://stackoverflow.com/a/39237609/9311041
    while(fgets(buffer, bufferLength, fptr)) {
        printf("%s", buffer);
    }
    fclose(fptr);
    
    return 0;
}
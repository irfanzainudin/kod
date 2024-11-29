#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdbool.h>

void start_kod() {
    printf("Starting kod...\n");
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("USAGE: %s <FILENAME>\n", argv[0]);
        exit(1);
    }

    start_kod();
    
    int input_length = 255;
    char input[input_length]; /* not ISO 90 compatible */
    
    printf("kod> ");
    while (fgets(input, input_length, stdin)) {
        if (strncmp(input, "t", 1) == 0) {
            FILE *fptr; // fptr = File pointer
            int bufferLength = 255;
            char buffer[bufferLength]; /* not ISO 90 compatible */
            
            fptr = fopen(argv[1], "r");
            
            // Taken from: https://stackoverflow.com/a/39237609/9311041
            while(fgets(buffer, bufferLength, fptr)) {
                printf("%s", buffer);
            }

            printf("\n");
    
            // Clean up before returning
            fclose(fptr);
        } else if (strncmp(input, "h", 1) == 0) {
            printf("\n");
            break;
        } else if (strncmp(input, "q", 1) == 0) {
            printf("\n");
            break;
        } else if (strncmp(input, "show", 4) == 0) {
            FILE *fptr; // fptr = File pointer
            int bufferLength = 255;
            char buffer[bufferLength]; /* not ISO 90 compatible */
            
            fptr = fopen(argv[1], "r");
            
            // Taken from: https://stackoverflow.com/a/39237609/9311041
            while(fgets(buffer, bufferLength, fptr)) {
                printf("%s", buffer);
            }

            printf("\n");
    
            // Clean up before returning
            fclose(fptr);
        } else {
            printf("\n# Arahan Melayu\n");
            printf("t\t- tunjuk isi dokumen\nh\t- hentikan kod\n");
            printf("\n# English commands\n");
            printf("show\t- show file contents\nq\t- quit kod\n");
            printf("\n");
        }
        
        printf("kod> ");
    }
    
    return 0;
}
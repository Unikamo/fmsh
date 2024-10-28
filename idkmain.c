#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 256

int main(int argc, char **argv)
{
    char input[BUFFER_SIZE];

    while (1)
    {
        printf("> ");  // Display the prompt
        if (fgets(input, sizeof(input), stdin) == NULL) {
            // Check for input errors
            perror("fgets error");
            continue; // Continue to the next iteration
        }

        // Remove the newline character that fgets captures
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0'; // Replace newline with null terminator
        }

        // Exit the loop if the user types "exit"
        if (strcmp(input, "exit") == 0) {
            break; // Exit the loop
        }

        // Execute the command
        system(input);
    }

    return 0;
}

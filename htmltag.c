#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to remove HTML tags from a string
void remove_html_tags(char *str) {
    bool inside_tag = false;
    char *output = str;

    for (char *ptr = str; *ptr; ++ptr) {
        if (*ptr == '<') {
            inside_tag = true;
            continue;
        }
        if (*ptr == '>') {
            inside_tag = false;
            continue;
        }

        if (!inside_tag) {
            *output = *ptr;
            ++output;
        }
    }
    *output = '\0';
}

int main() {
    FILE *input_file = fopen("input.html", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Find the size of the input file
    fseek(input_file, 0, SEEK_END);
    long input_size = ftell(input_file);
    fseek(input_file, 0, SEEK_SET);

    // Read the input file into a buffer
    char *input_buffer = (char *)malloc(input_size + 1);
    if (input_buffer == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }
    fread(input_buffer, 1, input_size, input_file);
    input_buffer[input_size] = '\0';

    // Remove HTML tags from the input buffer
    remove_html_tags(input_buffer);

    // Write the cleaned content to the output file
    fprintf(output_file, "%s", input_buffer);

    // Cleanup
    free(input_buffer);
    fclose(input_file);
    fclose(output_file);

    printf("HTML tags removed and content written to output.txt.\n");

    return 0;
}

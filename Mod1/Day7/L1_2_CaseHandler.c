#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void copyFile(FILE* source, FILE* destination, char option) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (option == 'u')
            fputc(toupper(ch), destination);
        else if (option == 'l')
            fputc(tolower(ch), destination);
        else if (option == 's')
            fputc(toupper(ch), destination);
        else
            fputc(ch, destination);
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Usage: %s <source_file> <destination_file> <option>\n", argv[0]);
        printf("Options: -u (convert to uppercase), -l (convert to lowercase), -s (convert to purely uppercase)\n");
        return 1;
    }

    char* sourceFileName = argv[2];
    char* destinationFileName = argv[3];
    char* option = argv[1];

    FILE* sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file: %s\n", sourceFileName);
        return 1;
    }

    FILE* destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Error creating destination file: %s\n", destinationFileName);
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        copyFile(sourceFile, destinationFile, 'u');
        printf("File copied and converted to uppercase successfully.\n");
    } else if (strcmp(option, "-l") == 0) {
        copyFile(sourceFile, destinationFile, 'l');
        printf("File copied and converted to lowercase successfully.\n");
    } else if (strcmp(option, "-s") == 0) {
        copyFile(sourceFile, destinationFile, 's');
        printf("File copied and converted to purely uppercase successfully.\n");
    } else {
        copyFile(sourceFile, destinationFile, 'n');
        printf("File copied successfully.\n");
    }

    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}

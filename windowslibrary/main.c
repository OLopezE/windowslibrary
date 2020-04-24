#include "practice9.c"

int main() {
    char input[255];
    printf("Enter number to convert: ");
    scanf("%s", input);

    if (strchr(input, '.') != NULL) {
        // String is double
        double final = asciiToDouble(input);
        printf("String was double: %f", final);
    }
    else if (strlen(input) == 32) {
        // string can be binary
        for (int i = 0; i < strlen(input); i++) {
            if (input[i] != '0' && input[i] != '1') {
                printf("String can't be binary");
                return 1;
            }
        }
        int final = asciiBinaryToInt(input);
        printf("String was binary: %i", final);
    }
    else if (strlen(input) == 8) {
        // String can be hex
        for (int i = 0; i < strlen(input); i++) {
            if (!isxdigit(input[i])) {
                printf("String can't be hex");
                return 1;
            }
        }
        int final = asciiHEXToInt(input);
        printf("String was hex: %i", final);
    }
    else {
        printf("String can't be turned into decimal");
    }

    return 1;
}

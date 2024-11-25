#include <stdio.h>

enum Color { red, green, blue, yellow, white, black };

int main() {
    enum Color color=black;

    switch (color) {
        case red:
            printf("Hexadecimal code for red: #FF0000\n");
            break;
        case green:
            printf("Hexadecimal code for green: #00FF00\n");
            break;
        case blue:
            printf("Hexadecimal code for blue: #0000FF\n");
            break;
        case yellow:
            printf("Hexadecimal code for yellow: #FFFF00\n");
            break;
        case white:
            printf("Hexadecimal code for white: #FFFFFF\n");
            break;
        case black:
            printf("Hexadecimal code for black: #000000\n");
            break;
        default:
            printf("Invalid color\n");
    }

    return 0;
}

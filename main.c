#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // The variabels are set here
    float width = 0, height = 0, area = 0, circum = 0;
    char widthstring[255] = "", heightstring[255] = "";
    int x = 0;
    // while loop is started and will run until x is 1
    while (x != 1) {
        // printf shows a message asking for width of rectangle
        printf("\nBitte geben Sie die Breite des Rechtecks in Meter an. (In Zahlen mit Kommastellen) ");
        //scanf waits for an input and in this case writes it into a string (char array)
        scanf("%s", widthstring);
        // strspan checks how many of the specified character are inside the string (char array) and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // I check if the two integers are the same
        // if they are then there are only allowed characters in the string (char array)
        if (strspn(widthstring, "0123456789.") == strlen(widthstring)) {
            // the widthstring is cast into a float and placed into the width variable
            width = (float)atof(widthstring);
            // x is set to 1 to break the while loop
            x = 1;
        // if they are not the same length then there are forbidden characters in the string (char array)
        } else {
            // error message is displayed
            printf("\nIhre Éingabe war ungültig! (Kommazahlen müssen mit Punkt angegeben werden (z.B.: 35.68 und NICHT 35,68), Buchstaben sind nicht erlaubt!\n");
        }
    }
    // x is set to 0 again because at this point it is 1
    x = 0;
    // while loop is started and will run until x is 1
    while (x != 1) {
        // printf shows a message asking for the height of the rectangle
        printf("\nBitte geben Sie die Höhe des Rechtecks in Meter an.( In Zahlen mit Kommastellen) ");
        //scanf waits for an input and in this case writes it into a string (char array)
        scanf("%s", heightstring);
        // strspan checks how many of the specified character are inside the string (char array) and gives an integer
        // strlen checks how long the string (char array) is and gives an integer
        // I check if the two integers are the same
        // if they are then there are only allowed characters in the string (char array)
        if (strspn(heightstring, "0123456789.") == strlen(heightstring)) {
            // the heightstring is cast into a float and placed into the height variable
            height = (float)atof(heightstring);
            // x is set to 1 to break the while loop
            x = 1;
        // if they are not the same length then there are forbidden characters in the string (char array)
        } else {
            // error message is displayed
            printf("\nIhre Éingabe war ungültig! (Kommazahlen müssen mit Punkt angegeben werden (z.B.: 35.68 und NICHT 35,68), Buchstaben sind nicht erlaubt!\n");
        }
    }
    // the circumference of the rectangle is calculated
    circum = 2*(width+height);
    // the area of the rectangle is calculated
    area = width*height;
    // finally the entered values and the results of the calculations is displayed
    printf("\nDas Rechteck mit der Breite von %.2f Meter und der Höhe von %.2f Meter hat einen Umfang von %.2f Meter und einen Flächeninhalt von %.2f Quadratmetern\n", width, height, circum, area);
}
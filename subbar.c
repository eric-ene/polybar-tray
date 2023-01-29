#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

int main(void) {
    char buffer[SIZE];
    FILE* xprop = popen("xprop -name 'Polybar tray window' _NET_WM_PID | grep -Eo \"[0-9]+\"", "r");

    fgets(buffer, SIZE, xprop);
    buffer[SIZE - 1] = '\0';
    
    char kill[SIZE] = "kill ";

    strcat(kill, buffer);

    if (buffer[0] == NULL) {
        system("polybar tray & disown");
    } else {
        system(kill);
    }

    free(kill);
    free(buffer);
    fclose(xprop);
}

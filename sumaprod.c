// Programa: sumaprod
// Ús: sumaprod [+|*] op1 op2
// Descripció: calcula la suma o el producte de dos enters passats per línia de comandes.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv) {

    // Control del número de paràmetres
    if (argc != 4) {
        printf("Ús: %s [+|*] op1 op2\n", argv[0]);
        return 1;
    }

    if (!strcmp (argv[1], "+"))
        printf ("La suma de %s i %s es %d\n", argv[2], argv[3], atoi(argv[2]) + atoi(argv[3]));
    else if (!strcmp (argv[1], "*"))
        printf ("El producte de %s i %s es %d\n", argv[2], argv[3], atoi(argv[2]) * atoi(argv[3]));

    return 0;
}

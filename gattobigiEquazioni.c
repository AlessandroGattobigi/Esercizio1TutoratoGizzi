#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Input dei coefficienti
    printf("Inserisci il valore di a: ");
    scanf("%f", &a);
    printf("Inserisci il valore di b: ");
    scanf("%f", &b);
    printf("Inserisci il valore di c: ");
    scanf("%f", &c);

    // Controllo del caso particolare quando a == 0
    if (a == 0) {
        // Equazione di primo grado
        if (b == 0) {
            if (c == 0) {
                printf("L'equazione ha soluzioni infinite.\n");
            } else {
                printf("L'equazione non ha soluzioni.\n");
            }
        } else {
            // Caso a == 0 e b != 0
            float soluzione = -c / b;
            printf("L'equazione è di primo grado e la soluzione è: %f\n", soluzione);
        }
    } else {
        // Caso a != 0: equazione di secondo grado
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            // Due soluzioni reali e distinte
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("L'equazione ha due soluzioni reali distinte: x1 = %f, x2 = %f\n", x1, x2);
        } else if (delta == 0) {
            // Una soluzione reale (radici coincidenti)
            x1 = -b / (2 * a);
            printf("L'equazione ha una sola soluzione reale: x1 = %f\n", x1);
        } else {
            // Nessuna soluzione reale (radici complesse)
            printf("L'equazione non ha soluzioni reali.\n");
        }
    }
    return 0;
}

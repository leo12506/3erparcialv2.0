#include <stdio.h>

// Declaración de funciones
float calcularMax(float x, float y);
float calcularNota(float p1, float p2, float notaExamen);

int main(void) {
    char c;
    do {
        float parcial1, parcial2, examen, final;
       //inicio gabito :)
        printf("Introduzca nota parcial 1 [0, 10]: ");
        scanf("%f", &parcial1);
        printf("Introduzca nota parcial 2 [0, 10]: ");
        scanf("%f", &parcial2);
        printf("Introduzca nota examen final [0, 10]: ");
        scanf("%f", &examen);

      //desarrollo Maria Guadalupe
        // Calcular nota final
        final = calcularNota(parcial1, parcial2, examen);

        // Imprimir resultados
        printf("Nota final: %f\n", final);

        // Continuar?
        printf("¿Continuar? (s/n): ");
        // Para evitar conflictos con el salto de línea (\n) y evitar un bucle infinito se recurre al siguiente "truco"
        do {
            scanf("%c", &c);
        } while (c == '\n');
        printf("\n");
    } while (c != 'n');

    return 0;
}
// Hecho por Luisa y Santiago
float calcularNota(float p1, float p2, float notaExamen) {
    // Función calcularNota: Calcula la nota final a partir de:
    // - primer parcial 20% (p1)
    // - segundo parcial 20% (p2)
    // - examen final 60% (notaExamen)
    // Si la nota final con la evaluación continua es menor a la del examen, la nota final es la del examen.
    float notaEc = p1 * 0.2 + p2 * 0.2 + notaExamen * 0.6;
    return calcularMax(notaEc, notaExamen);
}
//funcion realizada por leo
float calcularMax(float x, float y) {
    // Función calcularMax: Devuelve el mayor de los valores x,y pasados como parámetro
    float max;
    if (x >= y) {
        max = x; // Corregido de 'X' a 'x'
    } else {
        max = y;
    }
    return max;
}

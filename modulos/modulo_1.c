#include <stdio.h>
#include <stdlib.h>
#include "modulo_1.h"


int m1_indice(int ejercicio) {
    switch (ejercicio) {
        case 1:
            m1_e01();
            break;
        case 2:
            m1_e02();
            break;
        case 3:
            m1_e03();
            break;
        case 4:
            m1_e04();
            break;
        case 5:
            m1_e05();
            break;
        case 6:
            m1_e06();
            break;
        case 7:
            m1_e07();
            break;
        case 8:
            m1_e08();
            break;
        case 9:
            m1_e09();
            break;
        case 10:
            m1_e10();
            break;
        case 11:
            m1_e11();
            break;
        case 12:
            m1_e12();
            break;
        case 13:
            m1_e13();
            break;
        case 14:
            m1_e14();
            break;
        case 15:
            m1_e15();
            break;
        case 16:
            m1_e16();
            break;
        case 17:
            m1_e17();
            break;
        case 18:
            m1_e18();
            break;
        case 19:
            m1_e19();
            break;
        case 20:
            m1_e20();
            break;
        default:
            printf("\x1b[31mEl ejercicio %d este módulo aun no está disponible\x1b[0m\n", ejercicio);
            break;
    }
    return 0;
}

int m1_e01() {
    int a, b;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Valor del ángulo \"b\": ");
    scanf("%d", &b);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a - b);

    return 0;
}


int m1_e02() {
    int a, b;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Valor del ángulo \"b\": ");
    scanf("%d", &b);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a - b);

    return 0;
}


int m1_e03() {
    int a;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a);

    return 0;
}


int m1_e04() {
    int a;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a);

    return 0;
}


int m1_e05() {
    int x;
    printf("Valor del ángulo agudo dado: ");
    scanf("%d", &x);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 90 - x);

    return 0;
}


int m1_e06() {
    printf("Respuesta: \x1B[32m60\x1B[0m\n");

    return 0;
}


int m1_e07() {
    printf("Tres ángulos internos congruentes: \x1B[32mEquiángulo\x1B[0m\n");
    printf("Tres ángulos internos agudos: \x1B[32mAcutángulo\x1B[0m\n");
    printf("Un ángulo interno obtuso: \x1B[32mObtusángulo\x1B[0m\n");
    printf("Un ángulo interno recto: \x1B[32mRectángulo\x1B[0m\n");

    return 0;
}


int m1_e08() {
    printf("Equilátero: \x1B[32mTres lados congruentes\x1B[0m\n");
    printf("Isósceles: \x1B[32mDos lados congruentes\x1B[0m\n");
    printf("Escaleno: \x1B[32mNingún par de lados congruentes\x1B[0m\n");

    return 0;
}


int m1_e09() {
    printf("Respuesta: \x1B[32m180º y 360º\x1B[0m\n");

    return 0;
}


int m1_e10() {
    int a, b;
    printf("Valor uno de los ángulos: ");
    scanf("%d", &a);
    printf("Valor del otro ángulo: ");
    scanf("%d", &b);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 360 - a - b);

    return 0;
}


int m1_e11() {
    printf("Respuesta 1: \x1B[32mLado-Ángulo-Lado\x1B[0m\n");
    printf("Respuesta 2: \x1B[32mÁngulo-Lado-Ángulo\x1B[0m\n");
    printf("Respuesta 3: \x1B[32mLado-Lado-Lado\x1B[0m\n");

    return 0;
}


int m1_e12() {
    int f_x, g_y;
    printf("Ubique los valores marcados con \x1b[35m?\x1B[0m en su imagen y llene.\n");
    printf("\"Y - \x1b[35m?\x1B[0mº\": ");
    scanf("%d", &g_y);
    printf("\"X + \x1b[35m?\x1B[0mº\": ");
    scanf("%d", &f_x);
    printf("Respuestas:\n");
    printf("  x = \x1B[32m%d\x1B[0m\n", 26 - f_x);
    printf("  y = \x1B[32m%d\x1B[0m\n", 42 + g_y);

    return 0;
}


int m1_e13() {
    int a, b;
    printf("Ubique los valores marcados con \x1b[35m?\x1B[0m en su imagen y llene.\n");
    printf("\"3y + \x1b[35m?\x1B[0m\": ");
    scanf("%d", &a);
    printf("\"\x1b[35m?\x1B[0my\": ");
    scanf("%d", &b);
    printf("Respuestas:\n");
    printf("  x = \x1B[32m%d\x1B[0m\n", a * b);
    printf("  y = \x1B[32m%d\x1B[0m\n", a);

    return 0;
}


int m1_e14() {
    int a, b;
    printf("Ubique los valores marcados con \x1b[35m?\x1B[0m en su imagen y llene.\n");
    printf("\"?x - \x1b[35m?\x1B[0m\": ");
    scanf("%d", &a);
    printf("\"3y - \x1b[35m?\x1B[0m\": ");
    scanf("%d", &b);
    printf("Respuestas:\n");
    printf("  x = \x1B[32m%d\x1B[0m\n", a);
    printf("  y = \x1B[32m%d\x1B[0m\n", 7 + b);

    return 0;
}


int m1_e15() {
    float a;
    printf("Estatura del hombre: ");
    scanf("%f", &a);
    printf("Respuesta: \x1B[32m%.g\x1B[0m\n", 2 * a);

    return 0;
}


int m1_e16() {
    int a;
    printf("Valor del segmento AB: ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", (int)(2.5 * a));

    return 0;
}


int m1_e17() {
    int a;
    printf("Valor del segmento AE: ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 6 * a / 7);

    return 0;
}


int m1_e18() {
    int a;
    printf("Valor de la \x1b[35mprimera velocidad constante\x1B[0m: ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", (int)((a / 40.0) * 100));

    return 0;
}


int m1_e19() {
    int a;
    printf("Distancia en pies del hombre al árbol pequeño: ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%.2f\x1B[0m\n", 15. * (a + 125.) / a + 5.);

    return 0;
}


int m1_e20() {
    int s_ad, p;
    printf("Valor del segmento \x1b[35mAD\x1B[0m: ");
    scanf("%d", &s_ad);
    p = (s_ad - 12) / 2;
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 169 - p * p);

    return 0;
}
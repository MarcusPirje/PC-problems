#include <stdio.h>

//tema : 3.12-> final
// void verif(int s, int indice, int *chest[]) {
//
// }

// int conversie_baze(int b, double n) {

// }

int main(void) {
    // //3.12
    // int n, x, i, a;
    // printf("Dimensiune sir = ");
    // scanf("%d", &n);
    //
    // printf("x = ");
    // scanf("%d", &x);
    //
    // printf("Elemente sir:");
    // for (i = 0; i < n; ++i) {
    //     scanf("%d", &a);
    //     if (x == a) {
    //         printf("%d e in sir", x);
    //         return 0;
    //     }
    // }
    //
    // printf("%d nu e in sir", x);
    //
    // return 0;

    // //3.13
    // int n, v[10000], rt = 0, lt = 0, rtf = 0,ltf = 0;
    // scanf("%d", &n);
    //
    // scanf("%d", &v[1]);
    // for (int i = 2; i <= n; ++i) {
    //     scanf("%d", &v[i]);
    //     if (v[i-1] <= v[i]) {
    //         lt = i - 1; ++i;
    //         scanf("%d", &v[i]);
    //         while (i < n && v[i-1] <= v[i]) {
    //             ++i;
    //             scanf("%d", &v[i]);
    //         }
    //         if (v[i-1] > v[i]) rt = i - 1;
    //         else rt = i;
    //
    //         if (rtf - ltf < rt - lt)
    //             ltf = lt, rtf = rt;
    //     }
    // }
    //
    // for (int i = ltf; i <= rtf; ++i) {
    //     printf("%d ", v[i]);
    // }

    // //3.14
    // int n, puncte[100000], q, a, b;
    // //tb afisate toate chestionarele: nr intrebare + punctaj care sunt intre a si b ca suma
    // scanf("%d", n);
    // for (int i = 1; i <= n; ++i) {
    //     printf("Punctaj intrebarea nr. %d", i);
    //     scanf("%d", &puncte[i]);
    // }
    //
    // printf("q = ");
    // scanf("%d", &q);
    // printf("a = ");
    // scanf("%d", &a);
    // printf("b = ");
    // scanf("%d", &b);
    //
    // int s = 0, nr = 0, j, chestionar[10000], nrchestionare = 0;
    // //tb gasite toate cazurile de q intrebari cu punctaj intre a si b
    // for (int i = 1; i <= n; ++i) {
    //     if (p[i] + s < b) {
    //         s += p[i];
    //         chestionar[nr++] = p[i];
    //         j = i + 1;
    //         while (p[j] + s < b && nr < q) {
    //             s += p[j];
    //             chestionar[nr++] = j;
    //         }
    //         else
    //             if (nr == q && s > a) {
    //                 nrchestionare = 1;
    //                 printf("Chestionarul nr. %d \n", nrchestionare);
    //                 for (int k = 0; k < q; ++k)
    //                     printf("Intrebarea %d cu %d puncte \n", chestionar[k], p[chestionar[k]]);
    //             }
    //             else {
    //                 j++;
    //                 if (p[j] + s < b && nr < q) {
    //                     s += p[j];
    //                     chestionar[nr++] = j;
    //                 }
    //             }
    //
    //     }
    // }

    // //3.15
    // int n, m, a, b, i, j, k, s1[10000], s2[10000], r[10000];
    // printf("Dim. sir 1 si 2 = ");
    // scanf("%d %d", &n, &m);
    //
    // printf("Valori sir 1 = ");
    // for (i = 0; i < n; ++i)
    //     scanf("%d", &s1[i]);
    //
    // printf("Valori sir 2 = ");
    // for (i = 0; i < m; ++i)
    //     scanf("%d", &s2[i]);
    //
    // //ordonam cele 2 siruri
    // int x;
    // for (i = 1; i < n; ++i) {
    //     x = s1[i];
    //     for (j = i-1; j >= 0 && s1[j] > x; --j)
    //         s1[j+1] = s1[j];
    //     s1[j+1] = x;
    // }
    // for (i = 1; i < m; ++i) {
    //     x = s2[i];
    //     for (j = i-1; j >= 0 && s2[j] > x; --j)
    //         s2[j+1] = s2[j];
    //     s2[j+1] = x;
    // }
    //
    // //a
    // i = 0, j = 0, k = 0;
    // while (i < n && j < m) {
    //     if (s1[i] == s2[j]) {
    //         r[k] = s1[i];
    //         while (i < n && s1[i] == r[k]) ++i;
    //         while (j < m && s2[j] == r[k]) ++j;
    //         ++k;
    //     }
    //     else if (s1[i] < s2[j])
    //         while (i < n && s1[i] < s2[j]) ++i;
    //     else
    //         while (j < m && s1[i] > s2[j]) ++j;
    // }
    //
    // printf("Intersectia sirurilor este: ");
    // for (i = 0; i < k; ++i)
    //     printf("%d ", r[i]);
    //
    // //b
    // k = i = j = 0;
    // while (i < n && j < m) { //punem mereu valoarea cea mai mica
    //     if (s1[i] <= s2[j]) {
    //         r[k] = s1[i];
    //         while (i < n && s1[i] == r[k]) ++i;
    //         while (j < m && s2[j] == r[k]) ++j;
    //         ++k;
    //     }
    //     else {
    //         r[k] = s2[j];
    //         while (j < m && s2[j] == r[k]) ++j;
    //         ++k;
    //     }
    //
    // }
    //
    // printf("\nReuniunea sirurilor este: ");
    // for (i = 0; i < k; ++i)
    //     printf("%d ", r[i]);
    //
    // //c
    // i = j = k = 0;
    // while (i < n && j < m) {
    //     if (s1[i] == s2[j]) {
    //         x = s1[i];
    //         while (i < n && s1[i] == x) ++i;
    //         while (j < m && s2[i] == x) ++j;
    //     }
    //     else if (s1[i] < s2[j]) {
    //         r[k] = s1[i];
    //         while (i < n && s1[i] == r[k]) ++i;
    //         ++k;
    //     }
    //     else
    //         while (j < m && s2[j] < s1[i]) ++j;
    // }
    // while (i < n)
    //     r[k++] = s1[i++];
    //
    // printf("\nDiferenta sirurilor este: ");
    // for (i = 0; i < k; ++i)
    //     printf("%d ", r[i]);

    //3.16
    double x;
    int b;
    char r[10] = "";
    printf("Nr = ");
    scanf("%lf", &x);

    rescrie:
    printf("%sBaza = ", r);
    scanf("%d", &b);

    if (b > 16) {
        printf("Baza e prea mare\n");
        sscanf("Rescrie ", "%s", &r);
        goto rescrie;
    }

    int a[100], i = 0, f[15], j = 0, c;
    int parteintreaga = (int)x;
    double fract = x - parteintreaga;
    if (10 > b) {

        while (parteintreaga != 0) {
            a[i++] = parteintreaga % b;
            parteintreaga /= b;
        }
        while (fract != 0 && j < 15) {
            fract *= b;
            f[j] = (int)(fract);
            fract = fract - f[j];
            ++j;
        }

        printf("Numarul in baza %d este: \n", b);
        for (int k = i-1; k >= 0; --k)
            printf("%d", a[k]);
        if (j > 0)
            printf(".");
        for (int k = 0; k < j; ++k)
            printf("%d", f[k]);
    }
    else {
        i = -1;
        int poz = 0, putere = 1;
        while (parteintreaga != 0) {
            putere = 1, poz = 0;
            while (parteintreaga / b >= putere) {
                putere *= b;
                poz++;
            }

            for (j = b-1; j > 0; --j)
                if (parteintreaga / j >= putere) {
                    a[poz] = j;
                    break;
                }

            if (i == -1)
                i = poz;

            parteintreaga -= putere*j;
        }

        //partea fractionara
        for (j = 0; j < 7 ; ++j)
            fract *= b;

        int fractint = (int)(fract);
        j = 0;
        while (fractint != 0) {
            f[j++] = fractint % b;
            fractint /= b;
        }

        printf("Numarul scris in baza %d este: \n", b);
        for (int k = i; k >= 0; --k)
            if (a[k] < 10)
                printf("%d", a[k]);
            else {
                printf("%c", 'A'+(a[k]%10));
            }
        if (j > 0)
            printf(".");
        for (int k = j-1; k >= 0; --k) {
            if (f[k] < 10)
                printf("%d", f[k]);
            else {
                printf("%c", 'A'+(f[k]%10));
            }
        }
    }

    return 0;
}

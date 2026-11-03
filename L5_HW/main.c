#include <stdio.h>
#include <math.h>
//Intrebari:
//la 3.3 -> Se poate face si fara a salva perechile?
//faci cate o functie pt fiecare problema
int e_radacina(int r, int p[], int s, int j) {
    if (j == 0) {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    else
        return e_radacina(r, p, r*s+p[--j], j);
}

int adauga_x(int M[], int *marime, int x) {
    for (int i = 0; i < *marime; ++i)
        if (M[i] == x)
            return 0;
    M[*marime] = x;
    *marime += 1;
    return 1;
}

int simetrie(int xy[], yx[]) {
    return (xy[0]==yx[1] & xy[1]==yx[0]);
}

int reflexie(int x, xy[]) {
    return (x==xy[0] & x==xy[1]);
}
int in_relatie(int y, int yz[]) {
    return y == yz[0]; //daca ar fi echivalenta sigur exista si y,z nu doar z,y
}
int rel_egala(int x, int z, int p2[]) {
    return (x==p2[0] & z==p2[1]);
}


int simetrica(int p[][], n) {
    int v[n] = {0}, i, j;
    for (i = 1; i <= n; ++i) { //mergem pana la n ca poate ultima e de forma (x, x)
        if (v[i] == 1)
            continue;
        else
            for (j = i+1; j <= n; ++j) {
                if (v[j] == 1)
                    continue;
                if (simetrie(p[i], p[j]))
                    v[i] = v[j] = 1;
        }
        if (v[i] == 0) //daca nu gasim nicio simetrica a unei perechi atunci rel. nu e simetrica
            return 0;
    }
    return 1;
}

int reflexiva(int p[][], int n, int M[], int k) {
    int i, j, r;
    for (i = 0; i < k; ++i) {
        r = 0;
        for (j = 1; j <= n; ++j) {
            if (reflexie(i, p[j]))
                r = 1;
        }
        if (r == 0)
            return 0;
    }
    return 1;
}

int tranzitiva(int p[][], int n) {
    //(x,y) si (y,z) => (x,z)
    int i, j, k, t = 1;
    for (i = 1; i < n; ++i) {
        for (j = i+1; j <= n; ++j) { //verificam cu cine e a doua comp. a perechii in relatie
            //mergem de la i+1 pt ca nu ne intereseaza daca relatia e de forma (y, y)
            if (in_relatie(p[i][1], p[j])) {
                t = 0;
                for (k = i+1; k <= n; ++k)
                    if (rel_(p[i][0], p[j][1], p[k]))
                        t = 1;
            }
            if (t == 0)
                return 0;
        }
    }
    return 1;
}

int R_echivalenta(int p[][], int n, int M[], int k) {
    return reflexiva(p, n, M, k)&simetrica(p, n)&tranzitiva(p, n);
}

int main(void) {
    // //3.2
    // int grad, p[1000], radacini[1000], k = 0;
    // char s[100]="Grad";
    // alt_polinom:
    //     printf("%s polinom: ", s);
    //     scanf("%d", &grad);
    //
    // if (grad > 1000) {
    //     printf("Prea mare!\n");
    //     sprintf(s, "%s", "Rescrie grad ");
    //     goto alt_polinom;
    // }
    //
    // printf("Coeficienti de la termenul liber la coeficientul lui x^n: \n");
    // for (int i = 0; i <= grad; ++i)
    //     scanf("%d", p[i]);
    //
    // //cautam radacini printre divizorii lui p0 -> 0 nu poate fi caci p0 != 0, tb sa fie toate printre ei.
    // for (int i = 1; i <= abs(p[0]); ++i) {
    //     if (p[0] % i == 0) {
    //         if (e_radacina(i, p, p[grad], grad))//i - radacina -> mai complex ar putea fi cu schema lui horner daca ar avea radacini multiple
    //             //dar cum are simple e deajuns doar sa parcurgem divizorii.
    //             radacini[k++] = i;
    //
    //     }
    // }
    //
    // printf("Radacinile polinomului sunt: \n");
    // for (int i = 0; i < grad; ++i) //afisam doar n radacini, n = grad
    //     printf("%d ", radacini[i]);

    //3.3 -> Trebuie salvate
    int n, x, y, M[10000], perechi[5000][2], k = 0;
    printf("Cate perechi de numere vrei sa citesti?");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        printf("Perechea %d: (x,y)= ", i);
        scanf(" (%d,%d)", &perechi[i][0], &perechi[i][1]); //aici oricum e vector, deci nu tb &
    //aici (%d) - ia in considerare spatiul de dupa &n
        //implementeaza o functie ce adauga un elem. x la M daca nu e in M
        adauga_x(M, &k, perechi[i][0]);
        adauga_x(M, &k, perechi[i][1]);
    }

    char a = ',';
    printf("M = {");
    for (int i = 0; i < k; ++i) {
        if (i == k-1) a='}';
        printf("%d%c ", M[i], a);
    }

    //verificare daca e relatie de echivalenta
    if (R_echivalenta(p, n, M, k))
        printf("E relatie de echivalenta!");
    else
        printf("Nu e relatie de echivalenta!");

    //3.4


    return 0;
}

#include <stdio.h>


int main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nelem = 10;
    int i, j;
    int tmp;

    for (i = 0; i < nelem - 1; i++) {
        for (j = i+1; j < nelem; j++) {
            if (val(values[i]) < val(values[j])) {
                tmp = values[i];
                values[i] = values[j];
                values[j];
            }
        }
    }
}


//  Arquitetura do programa:
//  r1 -> add(nelem), val(nelem)
//  r2 -> add(values[i])
//  r3 -> val(i)
//  r4 -> val(values[i])
//  r5 -> val(j)
//  r6 -> add(values[j])
//  r7 -> val(values[j])
//  r8 -> nelem - 1
//  r9 -> tmp, (val(values[i]) < val(values[j])), (i < nelem - 1), (j < nelem)
#include <stdio.h>

double media(double n1, double n2) { 
    return (n1 + n2) / 2; 
}

double average_vetor(double v[], int n) {
    double sum = 0;
    for(int i=0; i<n; i++) {
        sum+= v[i];
    }
    return (double)sum/(double)n;
}
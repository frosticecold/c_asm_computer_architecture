#include <stdio.h>

int g_n = 6;
double g_v[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

double media(double n1, double n2) { 
    return (n1 + n2) / 2; 
}

double average_vetor(double v[], int n) {
    double sum = 0;
    for(int i=0; i<n; i++) {
        sum+= v[i];
    }
    return sum/n;
}

double media_vetor_g () {
    double sum = 0;
    int i;
    for(i=0; i<g_n; i++) {
        sum+=g_v[i];
    }
    return sum/g_n;
}
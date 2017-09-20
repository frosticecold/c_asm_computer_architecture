#include <stdio.h>
int g_n;
double g_v[100];

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

double media_vetor_g () {
    double sum = 0;
    int i;
    for(i=0; i<g_n; i++) {
        sum+=g_v[i];
    }
    return (double)sum/(double)g_n;
}
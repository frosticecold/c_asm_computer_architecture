int verify_condition(int *str, int n) {
    int i,count = 0;
    for(i = 0; i<n-2; i++) {
        if(str[i+1] > str[i] && str[i+2] > str[i+1]) {
            count++;
        }
    }
    return count;
}
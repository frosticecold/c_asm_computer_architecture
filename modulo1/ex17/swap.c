void swap(int* vec1, int* vec2, int size) {
    int i, *temp;
    
    for(i=0; i<size; i++) {
        temp[i] = vec1[i];
    }
    for(i=0; i<size; i++) {
        vec1[i] = vec2[i];
        vec2[i] = temp[i];
    }
}
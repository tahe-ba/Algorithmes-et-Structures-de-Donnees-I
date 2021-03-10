void minmax(int t[],int n,int *min,int *max){
    if (n>0) {
        if (t[n] > max) 
            max = t[n];
        if (t[n] < min) 
            min = t[n];
        minMax(t, n-1, min, max);
    }
}
int digitSum(int n){
    int _sum = 0;
    
    while (n){
        _sum += (n%10);
        n = n/10;
    }
    
    return _sum;
}

int comfortableNumbers(int L, int R) {
    int total_pairs = 0;
    
    for(int i=L; i<=R; i++){
        for(int j=i+1; j<=R; j++){
            int s_a = digitSum(i);
            int s_b = digitSum(j);
            if (j>= (i-s_a) and j<= (i+s_a) and 
                  i>= (j-s_b) and i<= (j+s_b)
               ) {
                total_pairs++;
            }
        }
    }
    return total_pairs;
}

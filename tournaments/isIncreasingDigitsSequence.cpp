bool isIncreasingDigitsSequence(int n) {
    int res = n % 10;
    if(n < 10)
        return true;
    n /= 10;
    while(n)
    {
        if(res <= n % 10)
            return false;
        res = n % 10;
        n /= 10;
    }
    return true;
}

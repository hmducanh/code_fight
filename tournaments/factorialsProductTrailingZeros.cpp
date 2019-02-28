int factorialsProductTrailingZeros(int l, int r) {
    int two = 0, five = 0, ans = 0;
    for(int i=1;i<=r;i++)
    {
        int k = i;
        while(k % 2 == 0)
        {
            two++;
            k /= 2;
        }
        k = i;
        while(k % 5 == 0)
        {
            five++;
            k /= 5;
        }
        if(i >= l)
        ans += min(two, five);
    }
    return ans;
}

int maximizeNumberRoundness(int n) {
    string t;
    int ans = 0, cnt = 0;
    while(n)
    {
        t += ('0' + n % 10);
        if(n % 10 == 0)
            cnt++;
        n /= 10;
    }
    //cout << t.size() << endl;
    reverse(t.begin(), t.end());
    for(int i=t.size()-1;i>=0;i--)
        if(t.size() - i <= cnt && t[i] != '0')
        {
            ++ans;
            cout << i << endl;
        }
    return ans;
}

int countzeros(int n,int k)
{
    int zeros = 0;
    while (n)
    {
        int l = n % k;
        if (l == 0)
          zeros++;
        n /= k;
    }
    return zeros;
}

int maxZeros(int n) {
    int maxzeros = 0;
    int deadline = 0;
for (int i=2;i<=1000;i++)
{
    if (countzeros(n,i) > maxzeros)
    {
        maxzeros = countzeros(n,i);
        deadline = i;
    }
}
    return deadline;
}

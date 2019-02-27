int arrayMinimumAboveBound(std::vector<int> a, int b) {
    for(int i=b+1;;i++)
    {
        for(int j=0;j<a.size();j++)
            if(i == a[j])
                return i;
    }
}

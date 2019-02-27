bool isIdentityMatrix(std::vector<std::vector<int>> a) {
    for(int i=0;i<a.size();i++)
        for(int j=0;j<a[0].size();j++)
        {
            if(!((a[i][j] == 1 && i == j) || (a[i][j] == 0 && i != j))) 
                return false;
        }
    return true;
}

bool isInformationConsistent(std::vector<std::vector<int>> a) {
    for(int i=0;i<a[0].size();i++)
    {
        bool kt = false, ck = false;
        for(int j=0; j<a.size();j++)
        {
            switch(a[j][i])
            {
                case -1:
                    kt = true;
                    break;
                case 1:
                        ck = true;
                    break;
            }
        }
        if(kt && ck)
            return false;
    }
    return true;
}

std::string longestWord(std::string s) {
    string t = "", r = "";
    for(int i=0;i<s.size();i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            r += s[i];
        else
        {
            if(r.size() > t.size())
                t = r;
            r.clear();
        }
    }
    return t;
}

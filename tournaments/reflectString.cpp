std::string reflectString(std::string s) {
    for(int i=0;i<s.size();i++)
        s[i] = (25 - (s[i] - 'a') + 'a');
    return s;
}

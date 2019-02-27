std::vector<int> mixedFractionToImproper(std::vector<int> s) {
    vector < int > a;
    a.push_back(s[0] * s[2] + s[1]);
    a.push_back(s[2]);
    return a;
}

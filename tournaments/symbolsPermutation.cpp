bool symbolsPermutation(std::string a, std::string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return (a == b);
}

std::vector<int> zFunctionNaive(std::string s) {

  std::vector<int> result;

  for (int i = 0; i < s.size(); i++) {
    result.push_back(0);
    for (int j = i; j < s.size(); j++) {
      if (s[j] == s[result[i]]) {
        result[i]++;
      }
      else {
        break;
      }
    }
  }

  return result;
}

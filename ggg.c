std::string
longestCommonPrefix(const std::vector<std::string> & input)
{
    std::string result;
    if(input.empty() ) return result;
    result = input.at(0);
    auto lambda = [](const std::string& a, const std::string& b)
                              {
                                  const auto pr = std::mismatch(a.begin(), a.end(), b.begin(), b.end());
                                  const std::string res {a.begin(), pr.first};
				  return res;
                              };
    result = std::accumulate(input.begin(), input.end(), result, lambda);
    return result;
}

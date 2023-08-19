string generateNextTerm(const string &currentTerm) {
    string nextTerm;
    int count = 1;
    
    for (size_t i = 1; i <= currentTerm.size(); ++i) {
        if (i == currentTerm.size() || currentTerm[i] != currentTerm[i - 1]) {
            nextTerm += to_string(count) + currentTerm[i - 1];
            count = 1;
        } else {
            ++count;
        }
    }
    
    return nextTerm;
}


string lookAndSaySequence(int n) 
{
    // Write your code here.
        if (n <= 0) {
        return "";
    }
    
    std::string term = "1"; // Starting with the seed term "1"
    
    for (int i = 1; i < n; ++i) {
        term = generateNextTerm(term);
    }
    
    return term;
}

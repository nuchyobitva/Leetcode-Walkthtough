bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x % 10 == x) return true;
    vector<int> a;
    while (x > 0) {
        int tmp = x % 10;
        a.push_back(tmp);
        x /= 10;
    }
    int tmp = a.size();
    for (int i = 0; i < (tmp+1)/2; i++) {
        if (a[i] != a[tmp - i - 1]) return false;
    }
    return true;
}
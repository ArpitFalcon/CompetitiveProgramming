string countAndSay (int n) {
	string ans = "1";
	if (n == 1)
		return ans;

	for (int i = 2; i <= n; i++)
		ans = countAndSayHelper(ans);

	return ans;
}


string countAndSayHelper (string s) {
	char curr = s[0];
	int count = 1;
	string ans = "";

	for (int i = 1; i < s.size(); i++) {
		if (curr == s[i])
			count++;
		else {
			ans += (count + '0');
			ans += curr;
			curr = s[i];
			count = 1;
		}
	}

	ans += (count + '0');
	ans += curr;
	return ans;
}
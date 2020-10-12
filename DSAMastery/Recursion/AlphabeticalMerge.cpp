#include <bits/stdc++.h>
using namespace std;

string alphabeticMerge(string one, string two) {
	if (one[0] == '\0') {
		if (two[0] == '\0')
			reutrn one;

		return two;
	}

	else if (two[0] == '\0')
		return one;


	// Recursive Case
	if (one[0] > two[0])
		return two[0] + alphabeticMerge(one, two.substr(1));
	else
		return one[0] + alphabeticMerge(one.substr(1), two);
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool knows(vector<vector<int> >& M, int a, int b) {
        return M[a][b];
    }

    int celebrity(vector<vector<int> >& M, int n) {

        stack<int> s;

        // Celebrity.
        int C;

        // Push into the stack
        for (int i = 0; i < n; i++)
            s.push(i);

        // Extract top 2
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();

        while (s.size() > 1) {
            if (knows(M, A, B)) {
                A = s.top();
                s.pop();
            }

            else {
                B = s.top();
                s.pop();
            }
        }

        // If there are only two ppl and there is no
        // potential candidate
        if (s.empty()) {
            if (knows(M, A, B) and !knows(M, B, A))
                return B;
            else if (knows(M, B, A) and !knows(M, A, B))
                return A;
            else
                return -1;
        }


        C = s.top();
        s.pop();


        if (knows(M, C, B))
            C = B;

        if (knows(M, C, A))
            C = A;


        // Check for C
        for (int i = 0; i < n; i++) {
            if ((i != C) && (knows(M, C, i) || !knows(M, i, C)))
                return -1;
        }

        return C;
    }
};


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M, n) << endl;

    }
}
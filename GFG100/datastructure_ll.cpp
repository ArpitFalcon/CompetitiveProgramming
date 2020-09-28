#include <bits/stdc++.h>

using namespace std;

class CustomLL
{
private:
    list<int> data;

public:
    void insert(int n)
    {
        data.push_back(n);
    }

    void print()
    {
        for (auto num : data)
            cout << num << " ";
    }

    void replace(int target, vector<int> seq)
    {
        auto it = find(data.begin(), data.end(), target);
        if (it == data.end())
            return;

        it = data.erase(it);
        data.insert(it, seq.begin(), seq.end());
    }
};

int main()
{

    CustomLL data_x = CustomLL();
    data_x.insert(10);
    data_x.insert(12);
    data_x.insert(22);
    data_x.print();
    cout << endl;
    data_x.replace(22, {34, 66, 56});
    data_x.print();

    return 0;
}
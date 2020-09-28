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

    // void replace(int target, int seq[]){
    //     for(auto it = data.begin(); it!=data.end(); it++){
    //         if(*it == target)
    //             data.insert_after(it, seq);
    //     }
    // }
};

int main()
{

    CustomLL data_x = CustomLL();
    data_x.insert(10);
    data_x.insert(12);
    data_x.insert(22);
    data_x.print();

    return 0;
}
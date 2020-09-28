#include <bits/stdc++.h>

using namespace std;

class MinMaxOperationDS
{
private:
    deque<int> dq;

public:
    void insertMin(int minNum)
    {
        dq.push_front(minNum);
    }

    void insertMax(int maxNum)
    {
        dq.push_back(maxNum);
    }

    void getMin()
    {
        cout << dq.front();
    }

    void getMax()
    {
        cout << dq.back();
    }

    void extractMin()
    {
        dq.pop_front();
    }

    void extractMax()
    {
        dq.pop_back();
    }
};

int main()
{
    MinMaxOperationDS obj = MinMaxOperationDS();
    obj.insertMin(10);
    obj.insertMax(15);
    obj.insertMin(5);
    obj.extractMin();
    obj.extractMax();
    obj.insertMin(1);
    obj.getMin();
}
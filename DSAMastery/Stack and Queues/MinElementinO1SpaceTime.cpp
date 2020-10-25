#include<iostream>
#include<stack>
using namespace std;

void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();

stack<int> s;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n;
        while (!isEmpty()) {
            pop();
        }
        while (!isFull(n)) {
            cin >> a;
            push(a);
        }
        cout << getMin() << endl;
    }
}


int minEle = -1;
void push(int a)
{
    //add code here.
    if (s.empty()) {
        minEle = a;
        s.push(a);
    }
    else {
        if (a >= minEle)
            s.push(a);
        else {
            minEle = a;
            s.push(2 * a - minEle);
        }
    }
}

bool isFull(int n)
{
    //add code here.
    if (s.size() == n)
        return true;
    return false;
}

bool isEmpty()
{
    //add code here.
    if (s.size() == 0)
        return true;
    return false;
}

int pop()
{
    //add code here.
    if (s.empty())
        return -1;
    int item = s.top();
    if (s.top() >= minEle) {
        s.pop();
        return item;
    }
    else {
        minEle = (2 * s.top() - item);
        s.pop();
        return item;
    }
}

int getMin()
{
    //add code here.
    return minEle;
}
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    int nums[5] = { 2, 3, 40, 5, 1 };
    int maxValue;

    for (int i = 0; i < 5; i++) {
        myStack.push(nums[i]);
    }
    maxValue = myStack.top();
    myStack.pop();
    int stackSize = myStack.size();
    for (int i = 0; i < stackSize; i++) {
        if (myStack.top() >= maxValue) {
            maxValue = myStack.top();
        }
        myStack.pop();
    }
    cout << "Max Value: " << maxValue;
}

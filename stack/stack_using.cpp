
// using array;
#include <iostream>
using namespace std;

class ArrayStack {
private:
    int arr[100];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }

    void push(int x) {
        arr[++topIndex] = x;
    }

    int pop() {
        return arr[topIndex--];
    }

    int top() {
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    ArrayStack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;  // 30
    cout << st.pop() << endl;  // 30
    cout << st.pop() << endl;  // 20

    cout << st.isEmpty() << endl; // 0 (false)
}



                                // using queue;
// class QueueStack {
// public:
// queue<int>q;
//     QueueStack() {
//     }
    
//     void push(int x) {
//     q.push(x);

//     int n = q.size();

//     for(int i = 0; i < n - 1; i++) {
//         q.push(q.front());
//         q.pop();
//     }
// }
    
//     int pop() {
//         int t=q.front();
//         q.pop();
//         return t;
//     }
    
//     int top() {
//         return q.front();
//     }
    
//     bool isEmpty() {
//         return q.empty();
//     }
// };
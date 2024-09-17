class MyQueue {
    stack<int> s1, s2;
public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        // Get the top element from s2
        int ans = s2.top();
        s2.pop();
        // Move all elements back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    int peek() {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        // Get the top element from s2
        int ans = s2.top();
        // Move all elements back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }

    bool empty() {
        return s1.empty();
    }
};

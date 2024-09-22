class Solution {
public:
    bool isValid(string s) {
       
        stack<char> ans;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                ans.push(ch);
            } else {
                if (ans.empty()) {
                    return false;
                }
                char top = ans.top();
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    ans.pop();
                } else {
                    return false;
                }
            }
        }
        if(ans.empty()){
            return true;
        }else {
            return false;
        }
        

   

    }
};
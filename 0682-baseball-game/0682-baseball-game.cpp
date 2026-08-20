class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int> st;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == "+") {
            int top = st.top();
            st.pop();
            int newTop = top + st.top();
            st.push(top);
            st.push(newTop);
        }
        else if (arr[i] == "D") {
            st.push(2 * st.top());
        }
        else if (arr[i] == "C") {
            st.pop();
        }
        else {
            st.push(stoi(arr[i]));
        }
    }
    int sum = 0;
    while (!st.empty()) {
        sum += st.top();
        st.pop();
    }
    return sum;
    }
};
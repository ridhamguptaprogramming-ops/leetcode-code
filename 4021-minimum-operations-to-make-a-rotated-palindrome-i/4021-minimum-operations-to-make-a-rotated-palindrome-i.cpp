class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        string dorivexalu = s;
        int answer = INT_MAX;

        for(int k = 0; k < n; k++){
            int operations = k;

        for(int i = 0; i < n / 2; i++){
            int left = (k + i) % n;
            int right = (k + n - 1 - i) % n;

            int a = dorivexalu[left] - 'a';
            int b = dorivexalu[right] - 'a';

            int diff = abs(a-b);
            int cost = min(diff, 26 - diff);

            operations += cost;
         }
            answer = min(answer, operations);
        }
        return answer;
    }
};
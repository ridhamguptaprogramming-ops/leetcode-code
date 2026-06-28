// class Solution {
//     public boolean isPerfectSquare(int num) {
//        int oddNumber = 1;
//        int sum = 1;
//        while(sum <= num){
//         if(sum == num){
//             return true;
//         }
//         oddNumber += 2;
//         sum += oddNumber;
//        } 
//        return false;
//     }
// }

class Solution {
    public boolean isPerfectSquare(int num) {
        int odd = 1;

        while (num > 0) {
            num -= odd;
            odd += 2;
        }

        return num == 0;
    }
}
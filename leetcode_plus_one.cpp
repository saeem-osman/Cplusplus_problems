class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> myVec;
        int sum = 0;
        int s = digits.size();
        int carry = 0;
        int flag = 1;
        while(s>0){
            int k = digits[s-1];
            k = k + flag + carry;
            flag = 0;
            sum = k%10;
            carry = k/10;
            myVec.push_back(sum);
            s--;
            
        }
        if(carry == 1) myVec.push_back(carry);
        vector<int> h;
        int w = myVec.size();
        while(w>0){
            h.push_back(myVec[w-1]);
            w--;
        }
        
        return h;
    }
};
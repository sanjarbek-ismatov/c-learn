class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       short int size = (short int)nums.size();
       for(short int i = 0; i < size; i++){
         nums.push_back(nums[i]);
       } 
       size = NULL;
       return nums;
    }
};
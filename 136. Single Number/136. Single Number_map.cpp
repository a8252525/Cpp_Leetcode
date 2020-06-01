class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> tmp;
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if(!tmp[nums[i]])tmp[nums[i]] = 1;
            else{
                tmp[nums[i]] = 2;
            }
        }
        for (auto i = tmp.begin(); i != tmp.end(); ++i){
            if (i->second == 1){
                return i->first;
            }
        }
        return 0;
    }
};

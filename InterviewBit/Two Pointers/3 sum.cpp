int Solution::threeSumClosest(vector<int> &num, int target) {
    sort (num.begin(),num.end());
    int bestSum = 1000000000;
    
    for(int i=0;i<num.size()-2;i++) {
        int ptr1 = i+1; 
        int ptr2 = num.size()-1;
        while (ptr1 < ptr2){
            long long int sum = (long long int)num[i] + (long long int)num[ptr1] + (long long int)num[ptr2];
            if (abs(target-sum) < abs(target-bestSum)) {
                bestSum = sum;
            }
            if (sum > target) {
                ptr2--;
            }
            else {
                ptr1++;
            }
        }
    }
    return bestSum;
}

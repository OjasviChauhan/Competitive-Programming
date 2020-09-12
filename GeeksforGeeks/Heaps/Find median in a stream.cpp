#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
 
int32_t main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    
    int first;
    cin>>first;
    cout<<first<<endl;
    maxHeap.push(first);
    while(t-- > 1)
    {
        int n;
        cin>>n;
        
        // Pushing values in heaps according to upper half and lower half
        if(n>maxHeap.top()){
            minHeap.push(n);
        }
        else{
            maxHeap.push(n);
        }

        // Balancing both Heaps
        if(maxHeap.size()-minHeap.size()==2){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        if(minHeap.size()-maxHeap.size()==2){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        
        // Extracting Median
        if(maxHeap.size() == minHeap.size()){
            cout<<(maxHeap.top()+minHeap.top())/2<<endl;
        }
        else if(maxHeap.size()>minHeap.size()){
            cout<<maxHeap.top()<<endl;
        }
        else{
            cout<<minHeap.top()<<endl;
        }
    }
	return 0;
}

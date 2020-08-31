// Using TWO POINTERS
// Time Complexity: O(n^2)
// Space Complexity: O(1)

bool findTriplets(int arr[], int n)
{ 
    int i,j,k,s;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        j=i+1;
        k=n-1;
        while(j<k){
            s = arr[i]+arr[j]+arr[k];
            if(s==0)
                return 1;
            else if(s>0)
                k--;
            else
                j++;
        }
    }
    return 0;
}

// Using Sets
// Time Complexity: O(n^2)
// Space Complexity: O(n)

bool findTriplets(int A[], int n)
{ 
    unordered_set<int> s;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s.find(-A[i]-A[j])!=s.end())
                return 1;
            s.insert(A[j]);
        }
        s.clear();
    }
    return 0;
}

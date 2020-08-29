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

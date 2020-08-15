#include <iostream>
using namespace std;

void buildTree(int a[],int s,int e,int tree[],int index){
    if(s==e){
        tree[index] = a[s];
        return;
    }
    
    int mid = (s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index+1);
    
    tree[index] = min(tree[2*index],tree[2*index+1]);

    return;
}

int main(){
    int a[] = {1,3,2,-5,6,4};
    int n = sizeof(a)/sizeof(int);
    int l = 4*n+1;   // max possible size of segment tree
    int tree[l];
    buildTree(a,0,n-1,tree,1);
    for(int i=0;i<=13;i++){
        cout<<tree[i]<<" ";
    }
}

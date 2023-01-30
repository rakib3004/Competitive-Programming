#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}


int main()
{

int n,k;
cin>>n>>k;

int a[n+1]={0};

int i;

for(i=1;i<=n;i++){
    cin>>a[i];
}


for(i=1;i<=n;i++){
   if(a[i]>a[i+1]&&a[i+k]<a[i+1+k]){

    int t;
    t=a[i];
    a[i]=a[i+k];
    a[i+k]=t;
   }
}

if (isSorted(a, n)){
    cout<<"Yes";
}
else{
    cout<<"No";
}



return 0;

}

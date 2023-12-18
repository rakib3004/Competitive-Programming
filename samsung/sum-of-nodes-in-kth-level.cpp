#include<iostream>
#include<string>

using namespace std;

int main(){


string tree;

int k;

cin>>k>>tree;
int result =0;

int n = tree.length();

int i;

int level = 0;
for(i=0;i<n;i++){

if(tree[i]=='('){
    level++;
   }
   else if(tree[i]==')'){
    level--;
   }
   else if(k==level-1){
    int number = 0;

    while(tree[i]>='0'&&tree[i]<='9'){
        number = number * 10 + (tree[i]-'0');
        i++;
    }
    i--;
    result= result+ number;

   }
}

cout<<result<<endl;
return 0;
}

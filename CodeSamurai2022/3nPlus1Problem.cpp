#include<bits/stdc++.h>
using namespace std;



int main()
{


long firstNumber,secondNumber;
int firstNumberIterationCounter=0;
int secondNumberIterationCounter=0;


cout<<"Enter two number : ";

cin>>firstNumber>>secondNumber;

long first = firstNumber;
long second = secondNumber;
while(firstNumber!=1){
    firstNumberIterationCounter++;

    if(firstNumber&1){
        firstNumber=firstNumber*3+1;
    }
    else{
        firstNumber=firstNumber>>1;
    }
}



while(secondNumber!=1){
    secondNumberIterationCounter++;

    if(secondNumber&1){
        secondNumber=secondNumber*3+1;
    }
    else{
        secondNumber=secondNumber>>1;
    }
}

if(firstNumberIterationCounter>secondNumberIterationCounter){
    cout<<first<<"'s iteration is "<<firstNumberIterationCounter
    <<"\nwhich is greater than "<<second<<"'s iteration is "<<secondNumberIterationCounter<<endl;
}

    return 0;

}

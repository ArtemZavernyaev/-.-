#include<iostream>
#include<cstdlib>

using namespace std;

const int leng = 4;

bool find_pairs(int indexDiff, int valueDiff);

int nums[leng];
int indexDiff;
int valueDiff;

int main(){

for(int i = 0; i<leng; i++) cin>>nums[i];

cout<<"Enter IndexDiff: ";
cin>>indexDiff;
cout<<"Enter ValueDiff: ";
cin>>valueDiff;

cout<<find_pairs(indexDiff, valueDiff);
}

bool find_pairs(int indexDiff, int valueDiff){
for (int i = 0; i<leng; i++)
    for (int j = 0; j<leng; j++)
    if ((abs(i - j)<= indexDiff) && (abs(nums[i] - nums[j])<= valueDiff)){
    return true;}
    else return false;
}

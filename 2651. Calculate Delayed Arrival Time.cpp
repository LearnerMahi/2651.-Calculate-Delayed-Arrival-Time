#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        if(arrivalTime+delayedTime<24){
            return arrivalTime+delayedTime;
        }
        if(arrivalTime+delayedTime>=24){
            return (arrivalTime+delayedTime)%24;
        }
    }
};
int main()
{
    Solution s;
    int a,b;
    while(cin>>a>>b){

    cout<<s.findDelayedArrivalTime(a,b)<<endl;
    }

}

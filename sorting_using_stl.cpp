#include<bits/stdc++.h>
#include<utility>
using namespace std;
struct Interval{
    int st;
    int et;
};
bool compare(Interval i1,Interval i2){
    return i1.st<i2.st;
}
int main(){
    // Interval arr[]={{6,4},{3,4},{4,6},{8,13}};
    // sort(arr,arr+4,compare);

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<arr[i].st<<":"<<arr[i].et<<endl;
    // }

    int arr[]={1,2,3,3,5,6,7};
    // cout<<binary_search(arr,arr+6,2);

    // cout<<lower_bound(arr,arr+6,3)-arr<<endl;

    // cout<<upper_bound(arr,arr+6,3)-arr<<endl;

    // cout<<__gcd(10,11)<<endl;
    int x=5;
    int y=10;
    swap(x,y);
    cout<<x<<" "<<y;

    cout<<max(5,8)<<endl;
    cout<<min(14,18)<<endl;
}
#include <iostream>
#include <vector>
#include<string>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    /* vector */
    vector<int>v(5);
    vector<int>::iterator it;
    for (int  i = 0; i < v.size(); i++)
    {
        v.push_back(i+1);
    }
    //iterator
    for (it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    
    string s="hello";
    string s1(s);
    if(s.compare(s1)==0){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }

    /* pair */

    pair<int,char>p;
    p=make_pair(2,'b');
    pair<int,char>p2(1,'a');
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    /* Set */

    set<int>s;
    int arr[]={1,2,3,4,5,6};

    for (int i = 0; i < 7; i++)
    {
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    for (it =s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    if(s.find(6)==s.end()){
        cout<<"not found"<<endl;
    }else{
        cout<<"elment found"<<endl;
    }

    //Map

    int arr[]={1,2,3,4,5,6,5};

    map<int,int>m;
    for (int i = 0; i < 7; i++)
    {
        m[arr[i]]=m[arr[i]]+1;
    }

    map<int,int>::iterator it;

    for (it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" :"<<it->second<<endl;
    }
    
    // unordered map
    int arr[]={1,2,3,4,5,6,5};

    unordered_map<int,int>m;
    for (int i = 0; i < 7; i++)
    {
        m[arr[i]]=m[arr[i]]+1;
    }

    unordered_map<int,int>::iterator it;

    for (it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" :"<<it->second<<endl;
    }

    return 0;
}

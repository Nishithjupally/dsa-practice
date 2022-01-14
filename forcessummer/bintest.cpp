#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &V)
{
  for(auto x : V)
    cout<<x<<" ";
  cout<<endl;
}
int main() {
  int n;
  cin>>n;
  vector<int>V1,V2;
  V1.push_back(0);
  V2.push_back(1);
  stack<vector<int>>S;
  S.push(V1);
  S.push(V2);
  while(1)
  {
    vector<int>ff= S.top();
    vector<int>fs= S.top();
    S.pop();
    ff.push_back(0);
    if(ff.size()<n)
       S.push(ff);
    else if(ff.size()==n)
      display(ff);
    fs.push_back(1);
    if(fs.size()<n)
       S.push(fs);
    else if(fs.size()==n)
      display(fs);
    if(S.empty())
      break;
  }

}
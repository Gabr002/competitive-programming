#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  ll sum = 0;
  cin >> s;
  
  for(int i = 0, e = s.size()-1; i < s.size(); i++, e--) sum += s[i]*26;
  
  cout << sum << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s, t ; 
	while(T--){
        cin>>s>>t; 
        int len = s.length()  ;
        vector<pair<int , int> > gap ;

        int  j  = 0 ;
        int i = 0 ;
        for(i = 0 ; i < len ; i++){
            if(i == j && s[i] == t[i])
                 j++ ;
            else if(s[i] == t[i]){
                gap.push_back(make_pair(j , i));
                j = i + 1;
            }
        }

        if(i != j) 
            gap.push_back(make_pair(j ,i));

        int k = gap.size() ;
        vector<pair<int , int> > dgap(k);
        int l = 0 ;

        for(int i = 0 ; i < k - 1;i++){
            int temp = gap[i].second - gap[i].first ;
            dgap[i] = make_pair(gap[i+1].second - gap[i].first , temp);
            l += temp;
        }

        dgap[k-1] = make_pair(0 ,  gap[k-1].second - gap[k -1].first);
        l +=  gap[k-1].second - gap[k - 1].first ;

        sort(dgap.begin() , dgap.end());

        int ans = l*k ;

        for(i = 0 ; i < k - 1 ; i++){
            int temp = (ans - dgap[i].second - dgap[i+1].second + dgap[i].first)*k-i;
            ans = min(ans , temp);
        }
        cout<<ans<<endl;
    }
}

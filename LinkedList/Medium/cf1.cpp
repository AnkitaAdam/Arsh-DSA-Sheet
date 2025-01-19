#include<bits/stdc++.h>

using namespace std;

int main(){
    int d, sumTime;
    vector<pair<int, int>>v;
    cin >> d >> sumTime;

    for(int i=0; i<d;i++){
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    
    
    int maxTime=0;
    
    for(int i=0;i<d;i++){
    	maxTime+=v[i].second;
	}

	if(maxTime<sumTime){
		cout<<"NO";
		
	}else{
		int studiedTime=0;
    	int remainingTime=v[0].second;
    	cout<<"YES\n";
		for(int i=0;i<d;i++){
			int studied=0;
    		if(remainingTime>=v[i].first && remainingTime<=v[i].second){
    			studiedTime+=remainingTime;
    			studied=remainingTime;
    			remainingTime=sumTime-studiedTime;
			}
			cout<<studied<<" ";
		
		}
	}
    
}

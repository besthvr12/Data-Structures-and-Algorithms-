#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,v,i=0,min=0,min1=0,count=0;
		cin>>n;
		  vector<int> s;
		  for(int i=0;i<n;i++){
           cin >>v;
          s.emplace_back(v);}
          int count=0,flag=0;
          for(int i=0;i<n;i++){
          	flag=0;
          	if(i<5){
          		for(int j=0;j<i;j++){
          			if(arr[i]>=arr[j]){
          				flag=1;
          				break;
					  }
				  }
			  }
			else{
				for(int j=i-5;j<i;j++){
			if(arr[i]>=arr[j]){
          				flag=1;
          				break;
					  }
					
				}
			}if(flag==0)count++
		  }
		  cout<<count;}
		  return 0;}

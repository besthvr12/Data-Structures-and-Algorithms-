#include <iostream>
using namespace std;

int main() {
int t,n;
  cin>>t;
  while(t--){
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
	  cin>>a[i];
	  }
      
      int min=0;
      int max=a[0];
      for(int i=0;i<n;i++){
          min=min+a[i];
    if(max<min){
        max=min;
    }
    if(min<0){
        min=0;
    }
      }
      
      
 cout<<max;     
  }
	return 0;
}

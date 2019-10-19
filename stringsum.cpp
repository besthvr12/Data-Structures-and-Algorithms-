#include <iostream>
using namespace std;
int findsum(string str){
	string temp="";
	int sum=0;
	for(char ch:str){
	   if(isdigit(ch)){
	   	temp=temp+ch;
	   }
	   else{
	   	sum=sum+atoi(temp.c_str());
	   	temp="";
	   }
	   	
	   	
	   }
	return sum+atoi(temp.c_str());
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<findsum(str);
		cout<<endl;
	}
	return 0;
}

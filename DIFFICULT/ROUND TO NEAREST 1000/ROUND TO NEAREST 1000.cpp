#include<bits/stdc++.h>
using namespace std;

void str(string s){
  bool pcount=0;
  int l = s.length()-1;

  if(s[l]=='1' || s[l]=='2' || s[l] == '3' ||s[l] == '4' || s[l] == '5' )
  	s[l] = '0';

  else if((s[l]=='6' || s[l]=='7' || s[l] == '8' ||s[l] == '9') && s[l-1]!='9'){
  	s[l] = '0';
  	string sl = "";
  	sl = sl+s[l-1];
  	int x = stoi(sl);
  	++x;
  	sl = to_string(x);
  	s.replace(l-1,1,sl);
  }
  else{
  	int ncount=0;
  	for(int i=l;i>=0;i--){
  		if(s[i]=='9')
  			ncount++;
  	}
  	if(ncount==l+1){
  		cout<<1;
  		for(int i=0;i<ncount;i++){
  			cout<<0; 
  		}
  		cout<<endl;
  		pcount=1;
  	}
  	else{
  		string sl = "";
  		sl = sl+s[l-ncount];
  		int x = stoi(sl);
  		++x;
  		sl = to_string(x);
  		s.replace(l-ncount,1,sl);
  		
  		for(int i =l-ncount+1;i<=l;i++){
  			s[i] = '0';
  		}
  	}
  }
  if(pcount==0)
  		cout<<s<<endl;
}

int main(){

// string s = "99999999999999999";
// str(s);


  int t;
  string s;
  cin >> t;
  for(int i=0; i<t; i++)
  {
      cin >> s;
      str(s);
  }
  return 0;

}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        string returnVal = "Yes";
	int len;
	cin >> len;
	string str;
	cin >> str;
	int lpt = 0;
	int rpt = 1;
	while(lpt < len-1){
	    if((int)str[lpt] != 42 && (int)str[rpt] != 42 && (int)str[lpt] == (int)str[rpt]){
	        str[lpt] = '*';
		str[rpt] = '*';
		lpt = 0;
	    } else if((int)str[lpt] != 42 && (int)str[rpt] != 42 && (int)str[lpt] != (int)str[rpt])lpt++;
	    while((int)str[lpt] == 42 && lpt < len-1) lpt++;
	    rpt = lpt+1;
	    while((int)str[rpt] == 42 && rpt < len) rpt++;
	}
	for(int m = 0; m < len; m++){
	    if((int)str[m]!= 42){
  	        returnVal = "No";
		break;
	    }
	}
	cout << returnVal << endl;
    }
    return 0;
}

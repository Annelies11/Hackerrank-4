#include <iostream>

using namespace std;

int main() {
	int arr[100][100], a, b, c, d = 0, e, f;
	cin>>a>>b;
	while(d<a){
		cin>>c;
		for(int i = 0; i < c; i++) {
			cin>>arr[d][i];
		}
		d++;
	}
	d=0;
	while(d<b){
		cin>>e>>f;
		cout<<arr[e][f]<<endl;
		d++;
	}
}

/*
for(int i = 0; i < c; i++) {
		for(int j = 0; j < c; j++) {
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
*/

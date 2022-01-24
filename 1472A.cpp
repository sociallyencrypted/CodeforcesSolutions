#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count =1;
		int w,h,n;
		cin >> w >> h>> n;
		while (true) {
			if (w%2==0) {
				w/=2;
				count*=2;
			}
			else if (h%2==0) {
				h/=2;
				count*=2;
			}
			else {
				break;
			}
		}
		if (count>=n) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}	
	}
}
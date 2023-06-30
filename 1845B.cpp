#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int checkQuadrantRelationship(int ax, int ay, int bx, int by, int cx, int cy){
    int abx = ax - bx;
    int acx = ax - cx;
    int aby = ay - by;
    int acy = ay - cy;
    bool u, d, l, r;
    u = d = l = r = false;
    int final = 0;
    if (abx > 0 && acx > 0){
        l = true;
    }
    else if (abx < 0 && acx < 0){
        r = true;
    }
    if (aby > 0 && acy > 0){
        d = true;
    }
    else if (aby < 0 && acy < 0){
        u = true;
    }
    if (d){
        final+=min(aby,acy);
    }
    else if (u){
        final-=max(aby,acy);
    }
    if (l){
        final+=min(abx, acx);
    }
    else if (r){
        final-=max(abx,acx);
    }
    return final+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        int ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        cout << checkQuadrantRelationship(ax, ay, bx, by, cx, cy) << endl;
    }
}

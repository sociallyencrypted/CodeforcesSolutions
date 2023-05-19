#include <iostream>
#include <vector>
using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u, adj, visited);
        }
    }
}

bool checkForCycle(int n, int par, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &inStack) {
    visited[n] = true;
    inStack[n] = true;

    for (int u : adj[n]) {
        if (!visited[u]) {
            if (checkForCycle(u, n, adj, visited, inStack)) {
                return true;
            }
        } else if (u != par && inStack[u]) {
            return true;
        }
    }

    inStack[n] = false;
    return false;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<vector<int>> adj(n+1);
        for (int i=1; i<n+1; i++){
            int x;
            cin >> x;
            adj[i].push_back(x);
            adj[x].push_back(i);
        }
        vector<bool> visited(n+1, false);
        vector<bool> visited2(n+1, false);
        int ans = 0;
        int ans2 = 0;
        for (int i=1; i<n+1; i++){
            if (!visited[i]){
                vector<bool> inStack(n+1, false);
                bool cycleFound = false;
                dfs(i, adj, visited);
                ans++;
            }
        }
        vector<bool> inStack(n+1, false);
        for (int i=1; i<n+1; i++){
            if (!visited2[i]){
                if (checkForCycle(i, -1, adj, visited2, inStack)){
                    ans2++;
                }
            }
        } 
        if (ans2<ans){
            ans2++;
        }
        cout << ans2 << " " << ans << endl;
    }
}
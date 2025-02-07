#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm> // For std::min

using namespace std;

int distributeCandies(vector<int>& candyType) {
        unordered_set<int>k;
        for(int it:candyType){
            k.insert(it);
        }
        return min(k.size(),candyType.size()/2);
}
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n); // Initialize the vector with size n

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans=distributeCandies(arr);
    cout<<ans;
    
    return 0;
}

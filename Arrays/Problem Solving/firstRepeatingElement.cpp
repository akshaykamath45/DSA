class Solution {
  public:
    // Function to return the position of the first repeating element.
    // int firstRepeated(int arr[], int n) {
    //     for(int i=0;i<n;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(arr[i]==arr[j]){
    //                 return i+1;
    //             }

    //         }
    //     }
    //     return -1;
    // }
    int firstRepeated(int a[], int n) {
    unordered_map<int,int>hash;//it maps the item at each index,and the number of occurences
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
  }
};
class Solution {
public:
    void mergeSort(vector<int>& arr1 , vector<int>& arr2, vector<int> &mg){
        int p =arr1.size();
        int q = arr2.size();
        int i=0,j=0,k=0;
        while(i<p && j<q){
            if(arr1[i]<= arr2[j]){
                mg.push_back(arr1[i++]);
            }else{
                mg.push_back(arr2[j++]);;
            }
        }
        if(i==p){
            while(j<q){
                mg.push_back(arr2[j++]);
            }
        }else{
            while(i<p){
                mg.push_back(arr1[i++]);
            }
        }
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArr;
        mergeSort(nums1,nums2,mergedArr);

        int n = mergedArr.size();
        if(n%2==0){
            return double(mergedArr[(n/2)-1] + mergedArr[n/2])/2;
        }
        return double(mergedArr[n/2]);
    }
};
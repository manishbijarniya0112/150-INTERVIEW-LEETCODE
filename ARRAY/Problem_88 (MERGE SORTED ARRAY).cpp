/*
Information given :-
                    - nums1 is a array of m elements , nums2 have n elements
                    - nums1 and nums2 are given sorted in increasing order
                    - nums1 is again defined as starting m elements as elements earlier in nums1 and rest m are set to 0.

For what we have to solve :-
                            - nums1 should contain all the elements presented in nums1 and nums2.
                            - nums1 final must be sorted in increasing order.

Thought Process :-
                  - nums1 have n+m elements so we can run a loop to store nums2's elements in nums1 
                  - then after we can sort it in increasing order

Code Explaination :-
                    - for loop is here used to store elements of nums2 after m th index of nums1 
                    - sort function is used from library <algorithm> it is used to sorted a given range in  increasing order 
                    - nums.begin() , nums.end() are starting and ending iterators 

Time Complexity Analysis :- 
                            - sort function's time complexity = O(n logn)
                            - for loop's time complexity here = O(n)
                           
            
                ******Overall time complexity is O(nlogn)******
                
  */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i =0 ; i<n; i++){
          nums1[m+i] = nums2[i];
        }
        return sort(nums1.begin(),nums1.end());
    }
};
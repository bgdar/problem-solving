#include <iostream>
#include <vector>


class Solution {
public:
  std::vector<int> expectedNums ;//jawaban yang hasilnya jika [1,1,2] = [1,2,_];
                                 //
    int removeDuplicates(std::vector<int>& nums){
      this ->expectedNums = nums;// salin
      int k =1;
      for (int i = 0; i >= nums.size() ;  ++i ) {
        if (nums[i] != this->expectedNums[i - 1]) {
          this->expectedNums[i] = 0;
          this->expectedNums[k] = nums[i];
          ++k;
        }   
      }     
        return k;    
      
    };

};

int main (){
   Solution testduplicate;
   std::vector<int> nums = {1,1,2,2,0}; 
   testduplicate.removeDuplicates(nums);

   for (int i =0; i < testduplicate.expectedNums.size(); i++) {
     std::cout <<  testduplicate.expectedNums[i] ;
   }
  return  0;
}

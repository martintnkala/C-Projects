#include <iostream>
using namespace std;

void func(int num){
   
   if (num > 0){
      
      printf("%d ", num);
      
      func(num -1);
   }
}

int main() {
   
   int num = 6;
   
   func(num);
   
   return 0;
}

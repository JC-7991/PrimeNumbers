#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
  
  int T;
  std::cin >> T;

  for(int t = 0; t < T; t++){

    int n;
    std::cin >> n;

    if(n == 1){
      std::cout << "Not prime\n";
      continue;
    }
    
    if(n <= 3){
      std::cout << "Prime\n";
      continue;
    }

    if(n % 2 == 0 || n % 3 == 0){
      std::cout << "Not prime\n";
      continue;
    }
        
    bool prime = true;
    int sqRoot = sqrt(n);

    for(int i = 3; i <= sqRoot; i += 2){

      if(n % i == 0){
          prime = false;
          break;
      }

    }
    
    if(prime){
      std::cout << "Prime\n";
    }
    else{
      std::cout << "Not prime\n";
    }
        
  }
  
  return 0; 
  
}
#include <iostream>
#include <string>


template<typename... Args>
auto adder(Args... args) {
  //return (... + args);
  // or (args + ...)
  
  
}

int main(){
  long sum = adder(1, 2, 3, 8, 7);
  std::cout << sum << std::endl; // 21

  std::string s1 = "x", s2 = "aa", s3 = "bb", s4 = "yy";
  std::string ssum = adder(s1, s2, s3, s4);

  std::cout << ssum << std::endl; //xaabbyy
}

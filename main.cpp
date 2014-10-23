#include <iostream>

int sum(int a, int b,int c) {
  return a+b+c;
}

int main() {
  std::cout<<"123abc\n";
  
  int a = 1;
  int b = 2;
  int c = 3;
  std::cout << "It's me. Man" << std::endl;
  int s = sum(a,b,c);
  std::cout << "The sum is "<< s << std::endl;
  
  return 0;
}

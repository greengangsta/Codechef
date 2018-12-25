#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<long long int> &a, long long int x) {
  int left = 0, right = (int)a.size(); 
  //write your code here
  //int m = left + (right-left)/2;
  while(left <= right)
  {
	 long long int m =(right+left)/2;
	  if(a[m]==x)
		  return m;
	  else if(a[m]>x)
		  right = m -1;
	  else
	      left = m+1;
		  
  }
	  return -1;
  
}

int linear_search(const vector<long long int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<long long int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, b[i]) << ' ';
  }
}

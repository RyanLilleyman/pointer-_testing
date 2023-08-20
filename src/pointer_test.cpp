#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void update(int *a, int *b) {
  (*a) = *a + *b;
  (*b) = *a - (2*(*b));
  if (*b < 0) {
    *b = -*b;
  }
  printf("%d\n%d",*a,*b);
}

int main(){
  int a, b;
  scanf("%d %d",&a,&b);
  update(&a,&b);
  return 0;
}

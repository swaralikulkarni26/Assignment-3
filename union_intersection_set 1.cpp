#include <iostream>
#include <set>

using namespace std;

void getSetData(set<int>& A) {
  int n = 0;
  cout << "enter cardinality set :";
  cin >> n;
  cout << "enter " << n << " elements" << endl;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    A.insert(num);
  }
}

void display(const set<int>& S) {
  cout << "[";
  for (auto iter : S) {
    cout << iter << ",";
  }
  cout << "]" << endl;
}

void  unionOfSet(const set<int>& A, const set<int>& B, set<int>& C) {
  for (auto iter : A) {
    C.insert(iter);
  }
  for (auto iter : B) {
    C.insert(iter);
  }
}

void intersectionOfSet(const set<int>& A, const set<int>& B, set<int>& D) {
  for (auto iter : A) {
    if (B.find(iter) != B.end()) {
      D.insert(iter);
    }
  }
}

int main() {
  set<int> A;
  set<int> B;
  set<int> C;
  set<int> D;

  cout << "set A" << endl;
  getSetData(A);
  cout << "set B" << endl;
  getSetData(B);

  cout << "Set A: ";
  display(A);
  cout << "Set B: ";
  display(B);

  cout << "union of set A & B: ";
  unionOfSet(A, B, C);
  display(C);

  cout << "intersection of set A & B: ";
  intersectionOfSet(A, B, D);
  display(D);

  return 0;
}
/*set A
enter cardinality set :5
enter 5 elements
1
2
5
4
6
set B
enter cardinality set :3
enter 3 elements
5
7
8
Set A: [1,2,4,5,6,]
Set B: [5,7,8,]
union of set A & B: [1,2,4,5,6,7,8,]
intersection of set A & B: [5,]
*/
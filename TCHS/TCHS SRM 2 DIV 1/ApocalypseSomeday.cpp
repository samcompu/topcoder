// BEGIN CUT HERE  
  
// END CUT HERE  
#line 5 "ApocalypseSomeday.cpp"  
#include <cstdlib>  
#include <cctype>  
#include <cstring>  
#include <cstdio>  
#include <cmath>  
#include <algorithm>  
#include <vector>  
#include <string>  
#include <iostream>  
#include <sstream>  
#include <map>  
#include <set>  
#include <queue>  
#include <stack>  
#include <fstream>  
#include <numeric>  
#include <iomanip>  
#include <bitset>  
#include <list>  
#include <stdexcept>  
#include <functional>  
#include <utility>  
#include <ctime>  
using namespace std;  

class ApocalypseSomeday {  
    public:  
        int getNth(int n) {
			int t = 1;
			while (t++) {
				bool ok = false;
				int have = 0;
				int x = t;
				while (x) {
					if ((x % 10) == 6) have++;
					else have = 0;
					if (have == 3) {
						ok = true;
						break;
					}
					x /= 10;
				}
				if (ok) n--;
				if (!n) return t;
			}
			return 0;
        }  
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2; int Arg1 = 1666; verify_case(0, Arg1, getNth(Arg0)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 2666; verify_case(1, Arg1, getNth(Arg0)); }
	void test_case_2() { int Arg0 = 6; int Arg1 = 5666; verify_case(2, Arg1, getNth(Arg0)); }
	void test_case_3() { int Arg0 = 187; int Arg1 = 66666; verify_case(3, Arg1, getNth(Arg0)); }
	void test_case_4() { int Arg0 = 500; int Arg1 = 166699; verify_case(4, Arg1, getNth(Arg0)); }

// END CUT HERE
  
};  
  
// BEGIN CUT HERE  
int main() {  
        ApocalypseSomeday ___test;  
        ___test.run_test(-1);  
        return 0;  
}  
// END CUT HERE  

// BEGIN CUT HERE  
  
// END CUT HERE  
#line 5 "FountainOfLife.cpp"  
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

class FountainOfLife {  
    public:  
        double elixirOfDeath(int elixir, int poison, int pool) {  
			if (elixir >= poison) return -1.0;
			double ans = (double) (pool) / (double) (poison - elixir);
			return ans; 
        }  
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 2; int Arg2 = 2; double Arg3 = 2.0; verify_case(0, Arg3, elixirOfDeath(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 200; int Arg1 = 100; int Arg2 = 1; double Arg3 = -1.0; verify_case(1, Arg3, elixirOfDeath(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 9999; int Arg1 = 10000; int Arg2 = 10000; double Arg3 = 10000.0; verify_case(2, Arg3, elixirOfDeath(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 1; int Arg1 = 10000; int Arg2 = 1; double Arg3 = 1.0001000100010001E-4; verify_case(3, Arg3, elixirOfDeath(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 40; int Arg1 = 43; int Arg2 = 41; double Arg3 = 13.666666666666666; verify_case(4, Arg3, elixirOfDeath(Arg0, Arg1, Arg2)); }

// END CUT HERE
  
};  
  
// BEGIN CUT HERE  
int main() {  
        FountainOfLife ___test;  
        ___test.run_test(-1);  
        return 0;  
}  
// END CUT HERE  

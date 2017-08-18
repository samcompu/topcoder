// BEGIN CUT HERE  
  
// END CUT HERE  
#line 5 "SymbolFrequency.cpp"  
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

class SymbolFrequency {  
    public:  
        double language(vector <string> frequencies, vector <string> text) {
			double minDiff = 0x7fffffff;
			int have[27];
			memset(have, 0, sizeof(have));
			int sumSize = 0;
			for (int i = 0; i < text.size(); i++) {
				string s = text.at(i);
				for (int j = 0; j < s.size(); j++) {
					if (s.at(j) != ' ') {
						have[s.at(j) - 'a' + 1]++;
						sumSize++;
					}
				}
			}
			for (int i = 0; i < frequencies.size(); i++) {
				double sDiff = 0;
				bool play[27];
				memset(play, false, sizeof(play));
				string s = frequencies.at(i);
				for (int j = 0; j < s.size(); j += 3) {
					int need = (s.at(j) - 'a' + 1);
					int per = (s.at(j + 1) - '0') * 10 + (s.at(j + 2) - '0');
					double cDiff = (double)(per * sumSize) / 100 - (double)have[need];
					play[need] = true;
					sDiff += cDiff * cDiff;
				}
				for (int i = 1; i <= 26; i++) {
					if (have[i] && !play[i]) sDiff += have[i] * have[i];
				}
				if (sDiff < minDiff) minDiff = sDiff;
			}
			return minDiff;
		}
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"a30b30c40","a20b40c40"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"aa bbbb cccc"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 0.0; verify_case(0, Arg2, language(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"a30b30c40","a20b40c40"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"aaa bbbb ccc"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 2.0; verify_case(1, Arg2, language(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"a10b10c10d10e10f50"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"abcde g"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 10.8; verify_case(2, Arg2, language(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"a09b01c03d05e20g01h01i08l06n08o06r07s09t08u07x01"
,"a14b02c05d06e15g01h01i07l05n07o10r08s09t05u04x01"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"this text is in english" 
,"the letter counts should be close to"
,"that in the table"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 130.6578; verify_case(3, Arg2, language(Arg0, Arg1)); }
	void test_case_4() { string Arr0[] = {"a09b01c03d05e20g01h01i08l06n08o06r07s09t08u07x01"
,"a14b02c05d06e15g01h01i07l05n07o10r08s09t05u04x01"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"en esta es una oracion en castellano"
,"las ocurrencias de cada letra"
,"deberian ser cercanas a las dadas en la tabla"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 114.9472; verify_case(4, Arg2, language(Arg0, Arg1)); }
	void test_case_5() { string Arr0[] = {"z99y01", "z99y01", "z99y01", "z99y01", "z99y01", 
 "z99y01", "z99y01", "z99y01", "z99y01", "z99y01"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
 "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); double Arg2 = 495050.0; verify_case(5, Arg2, language(Arg0, Arg1)); }

// END CUT HERE
  
};  
  
// BEGIN CUT HERE  
int main() {  
        SymbolFrequency ___test;  
        ___test.run_test(-1);  
        return 0;  
}  
// END CUT HERE  

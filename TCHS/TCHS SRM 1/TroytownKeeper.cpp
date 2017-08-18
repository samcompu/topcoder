// BEGIN CUT HERE  
  
// END CUT HERE  
#line 5 "TroytownKeeper.cpp"  
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

struct Node {
	int x;
	int y;
};

class TroytownKeeper {  
    public:  
        int limeLiters(vector <string> maze) {
			int n = maze.size();
			int m = maze.at(0).size();
			bool book[51][51];
			memset(book, false, sizeof(book));
			for (int i = 1; i <= n; i++) {
				string s = maze.at(i - 1);
				for (int j = 1; j <= m; j++) {
					if (s.at(j - 1) == '#') book[i][j] = true;
				}
			}
			Node begin = (Node) {0, 0};
			queue<Node>q;
			q.push(begin);
			bool arived[51][51];
			memset(arived, false, sizeof(arived));
			arived[begin.x][begin.y] = true;
			int ans = 0;
			while (!q.empty()) {
				Node f = q.front();
				q.pop();
				int fx[5][2] = {{0, 0}, {1, 0}, {0, 1}, {-1, 0}, {0, -1}};
				for (int i = 1; i <= 4; i++) {
					Node go = f;
					go.x += fx[i][0];
					go.y += fx[i][1];
					if (go.x < 0 || go.x > n + 1 || go.y < 0 || go.y > m + 1) continue;
					if (book[go.x][go.y]) ans++;
					else {
						if (!arived[go.x][go.y]) {
							arived[go.x][go.y] = true;
							q.push(go);
						}
					}
				}
			}
			return ans;
        }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"##..#"
,"#.#.#"
,"#.#.#"
,"#####"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 24; verify_case(0, Arg1, limeLiters(Arg0)); }
	void test_case_1() { string Arr0[] = {"##",
 "##"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(1, Arg1, limeLiters(Arg0)); }
	void test_case_2() { string Arr0[] = {"######"
,"#....."
,"#.####"
,"#.#..#"
,"#.##.#"
,"#....#"
,"######"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 56; verify_case(2, Arg1, limeLiters(Arg0)); }
	void test_case_3() { string Arr0[] = {"######"
,"#....."
,"#..#.."
,"#....."
,"######"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 36; verify_case(3, Arg1, limeLiters(Arg0)); }
	void test_case_4() { string Arr0[] = {"#.#.#.#"
,".#.#.#."
,"#.#.#.#"
,".#.#.#."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 36; verify_case(4, Arg1, limeLiters(Arg0)); }

// END CUT HERE
  
};  
  
// BEGIN CUT HERE  
int main() {  
        TroytownKeeper ___test;  
        ___test.run_test(-1);  
        return 0;  
}  
// END CUT HERE  

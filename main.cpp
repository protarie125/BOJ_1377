#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vp = vector<pair<ll, ll>>;

ll N;
vp A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  A = vp(N + 1);
  for (auto i = 1; i <= N; ++i) {
    cin >> A[i].first;
    A[i].second = i;
  }

  sort(A.begin(), A.end());

  ll ans = 0;
  for (auto i = 1; i <= N; ++i) {
    ans = max(ans, A[i].second - i);
  }

  cout << ans + 1;

  return 0;
}
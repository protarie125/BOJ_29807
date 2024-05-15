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

ll t;
vl sco;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> t;
  sco = vl(5, 0);
  for (auto i = 0; i < t; ++i) {
    cin >> sco[i];
  }

  auto s1 = 0LL;
  if (sco[2] < sco[0]) {
    s1 = (sco[0] - sco[2]) * 508;
  } else {
    s1 = (sco[2] - sco[0]) * 108;
  }

  auto s2 = 0LL;
  if (sco[3] < sco[1]) {
    s2 = (sco[1] - sco[3]) * 212;
  } else {
    s2 = (sco[3] - sco[1]) * 305;
  }

  const auto& s3 = sco[4] * 707;

  const auto& ans = (s1 + s2 + s3) * 4763;
  cout << ans;

  return 0;
}
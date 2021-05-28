#include <bits/stdc++.h>
using namespace std;
template <class C> constexpr int sz(const C &c) { return int(c.size()); }
constexpr const char nl = '\n', sp = ' '; using uint = unsigned int;
using ll = long long; using ull = unsigned long long; using ld = long double;
#if __SIZEOF_INT128__
  using i128 = __int128_t; using ui128 = __uint128_t;
#endif

namespace StdIO {
  int init() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
  }

  int _ = init();
  std::regex nonWhitespaceToken("\\S+"), nonWhitespaceChar("\\S"), anyLine(".+");

  long long readInt(long long minValid = std::numeric_limits<long long>::min(), long long maxValid = std::numeric_limits<long long>::max()) {
    long long ret;
    assert(std::cin >> ret);
    assert(minValid <= ret && ret <= maxValid);
    return ret;
  }

  long double readFloat(long double minValid = std::numeric_limits<long double>::lowest(), long double maxValid = std::numeric_limits<long double>::max()) {
    long double ret;
    assert(std::cin >> ret);
    assert(minValid <= ret && ret <= maxValid);
    return ret;
  }

  std::string readString(const std::regex &rgx = nonWhitespaceToken) {
    std::string ret = "";
    assert(std::cin >> ret);
    assert(std::regex_match(ret, rgx));
    return ret;
  }

  char readChar(const std::regex &rgx = nonWhitespaceChar) {
    char ret;
    assert(std::cin >> ret);
    assert(std::regex_match(std::string(1, ret), rgx));
    return ret;
  }

  std::string readLine(const std::regex &rgx = anyLine) {
    std::cin >> std::ws;
    std::string ret;
    assert(std::getline(std::cin, ret));
    assert(std::regex_match(ret, rgx));
    return ret;
  }

  void readSpace() {}

  void readNewLine() {}

  void readEOF() {
    char c;
    assert(!(cin >> c));
  }
}

using namespace StdIO;

int main() {
  readEOF();
  return 0;
}

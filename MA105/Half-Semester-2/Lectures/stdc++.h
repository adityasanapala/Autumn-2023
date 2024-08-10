#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <iosfwd>
#include <cstdio>
#include <string>
#include <string_view>
#include <sstream>
#include <cstring>
#if (__has_include (<print>))
#include <print>
#endif
#include <format>
#include <charconv>
#include <cwchar>
#include <cuchar>
#include <stdalign.h>
#include <codecvt>

#include <utility>
#include <cstdlib>
#include <cstddef>
#include <unistd.h>
#include <memory>
#include <new>
#include <memory_resource>
#include <scoped_allocator>
#include <compare>
#include <concepts>
#include <any>
#include <ranges>
#include <algorithm>
#include <span>
#include <execution>
#include <optional>
#include <variant>
#include <version>
#include <source_location>

#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <cctype>
#include <cfloat>
#include <cinttypes>
#include <cstdint>
#include <cfenv>
#include <cerrno>
#include <limits>
#include <climits>
#include <functional>
#include <locale>
#include <clocale>
#include <chrono>
#include <ctime>
#include <stdexcept>
#include <exception>
#include <system_error>

#include <cassert>
#include <csignal>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <csetjmp>
#include <cstdarg>
#include <cmath>
#include <complex>
#include <numbers>
#include <numeric>
#include <ratio>
#include <random>
#include <valarray>
#include <bit>

#include <bitset>
#include <initializer_list>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>

#include <filesystem>
#include <regex>
#include <atomic>
#include <mutex>
#include <shared_mutex>
#include <barrier>
#include <thread>
#include <future>
#include <latch>
#include <condition_variable>
#include <semaphore>
#include <coroutine>
#include <source_location>
#include <stop_token>

#if (__has_include(<mdspan>))
#include <mdspan>
#endif
#if (__has_include(<generator>))
#include <generator>
#endif
#if (__has_include(<flat_map>))
#include <flat_map>
#endif
#if (__has_include(<flat_set>))
#include <flat_set>
#endif
#if (__has_include(<syncstream>))
#include <syncstream>
#endif
#if (__has_include(<spanstream>))
#include <spanstream>
#endif
#if (__has_include(<stacktrace>))
#include <stacktrace>
#endif
#if (__has_include(<expected>))
#include <expected>
#endif
#if (__has_include(<stdfloat>))
#include <stdfloat>
#endif
#if (__has_include(<stdatomic.h>))
#include <stdatomic.h>
#endif
#if (__has_include(<debugging>))
#include <debugging>
#endif
#if (__has_include(<linalg>))
#include <linalg>
#endif
#if (__has_include(<text_encoding>))
#include <text_encoding>
#endif
#include <int128.h>

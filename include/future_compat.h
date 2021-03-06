#pragma once

#if __cplusplus >= 201103L || defined(_MSC_VER) && (_MSC_VER >= 1900)

#if __cplusplus >= 201402L || defined(_MSC_VER) && (_MSC_VER >= 1910) && (_MSVC_LANG >= 201402L)
#define HAS_STD14
#endif

#if __cplusplus >= 201703L  || defined(_MSC_VER) && (_MSC_VER >= 1914) && (_MSVC_LANG >= 201703L)
#define HAS_STD17
#endif

#ifdef HAS_STD17
#define RL_ATTR(name) [[ name ]]
#else
#define RL_ATTR(name)
#endif

#ifdef HAS_STD14
#define RL_STD14_CONSTEXPR constexpr
#define RL_DEPRECATED(message) [[deprecated(message)]]
#else
#define RL_STD14_CONSTEXPR
#define RL_DEPRECATED(message)
#endif

#else
#error "At least C++11 is required."
#endif

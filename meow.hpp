//
// Created by rudyc on 2019/9/6.
//

#pragma once

#define FORMAT meow::format

#define println(...)                \
    do {                            \
        std::cout << FORMAT(__VA_ARGS__) << std::endl;        \
    } while(0)

#define eprintf(...)            \
    do {        \
        std::cerr << FORMAT(__VA_ARGS__); \
    } while(0)

#define eprintln(...)   \
    do {    \
        eprintf(__VA_ARGS__);   \
        eprintf("\n");  \
    } while(0)  \

#define panic(...)                  \
    do {                            \
        eprintf("panic at {}:{} \n", __FILE__, __LINE__);   \
        eprintf("\t");              \
        eprintf(__VA_ARGS__);        \
        eprintf("\n");    \
		throw;	\
        exit(-1);        \
    } while(0)

#ifdef _DEBUG
#define debugln(...)      \
    do {        \
        eprintf("DEBUG[ {}:{} ]\t", __FILE__, __LINE__);  \
        eprintf(__VA_ARGS__);   \
        eprintf("\n");       \
    } while(0)
#else
#define debugln(...)
#endif

#define assert(expr)	\
	if (!(expr)) panic("assert failed {}", #expr)

#include "format.hpp"
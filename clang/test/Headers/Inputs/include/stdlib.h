#pragma once
typedef __SIZE_TYPE__ size_t;

#ifndef __cplusplus
extern int abs(int __x) __attribute__((__const__));
#endif

void free(void* ptr);
void* malloc(size_t size);

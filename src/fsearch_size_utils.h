#pragma once

#include <stdbool.h>
#include <stdint.h>

bool
fsearch_size_parse(const char *str, int64_t *size_out, int64_t *plus_out, char **end_ptr);

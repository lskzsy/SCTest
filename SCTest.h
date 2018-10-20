#ifndef SCTEST__H
#define SCTEST__H

#include <sys/time.h>
#include <inttypes.h>

typedef struct timeval t_time_t;

struct timeval  what_time_is_it();

uint64_t        what_time_pass(struct timeval tv);

#endif
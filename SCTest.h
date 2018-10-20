#ifndef SCTEST__H
#define SCTEST__H

#include <sys/time.h>
#include <inttypes.h>

struct timeval  what_time_is_it();

uint64_t        what_time_pass(struct timeval tv);

#endif
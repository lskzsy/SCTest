#include "../SCTest.h"

struct timeval what_time_is_it()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv;
}

uint64_t what_time_pass(struct timeval tv)
{
    struct timeval now = what_time_is_it();

    uint64_t t_now = now.tv_sec * 1000 + now.tv_usec / 1000;  
    uint64_t t_tv  = tv.tv_sec * 1000 + tv.tv_usec / 1000;
    return t_now - t_tv;
}
#ifndef _LINUX_FUTEX_TYPES_H
#define _LINUX_FUTEX_TYPES_H

#define TASK_CACHE_INCR                 16
/* Cache size must be a multiple of TASK_CACHE_INCR ! */
#define TASK_CACHE_MAX_SIZE             (TASK_CACHE_INCR * 2305)

struct futex_cache {
	unsigned int            cache_size;
	raw_spinlock_t          cache_lock;
	unsigned long           cache_map[BITS_TO_LONGS(TASK_CACHE_MAX_SIZE)];
	struct futex_cache_slot *slots;
};

#endif

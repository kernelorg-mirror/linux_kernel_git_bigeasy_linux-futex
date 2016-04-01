#ifndef _LINUX_FUTEX_TYPES_H
#define _LINUX_FUTEX_TYPES_H
#include <linux/rbtree_latch.h>

struct futex_cache {
	raw_spinlock_t          cache_lock;
	struct latch_tree_root	futex_rb;
};

#endif

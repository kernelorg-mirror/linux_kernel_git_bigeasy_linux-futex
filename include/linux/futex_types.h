#ifndef _LINUX_FUTEX_TYPES_H
#define _LINUX_FUTEX_TYPES_H

struct futex_hash_bucket;

struct futex_hash {
	raw_spinlock_t			lock;
	unsigned int			hash_bits;
	struct futex_hash_bucket	*hash;
};

#endif

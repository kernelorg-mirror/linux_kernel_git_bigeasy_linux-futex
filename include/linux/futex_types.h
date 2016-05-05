#ifndef _LINUX_FUTEX_TYPES_H
#define _LINUX_FUTEX_TYPES_H

struct futex_hash {

	raw_spinlock_t			hash_lock;
	struct list_head		empty_hb_list;
	struct list_head		hash_slots;
};

#endif

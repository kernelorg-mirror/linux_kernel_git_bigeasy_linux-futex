#ifndef _LINUX_FUTEX_TYPES_H
#define _LINUX_FUTEX_TYPES_H

struct futex_hash {

	raw_spinlock_t			hash_lock;
	struct rb_root			hash_tree;
	struct list_head		empty_hb_list;
};

#endif

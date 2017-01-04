/* zfs_config.h.  Generated from zfs_config.h.in by configure.  */
/* zfs_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 to enabled dmu tx validation */
/* #undef DEBUG_DMU_TX */

/* bio_end_io_t wants 1 arg */
/* #undef HAVE_1ARG_BIO_END_IO_T */

/* invalidate_bdev() wants 1 arg */
#define HAVE_1ARG_INVALIDATE_BDEV 1

/* kmap_atomic wants 1 args */
#define HAVE_1ARG_KMAP_ATOMIC 1

/* submit_bio() wants 1 arg */
/* #undef HAVE_1ARG_SUBMIT_BIO */

/* bdi_setup_and_register() wants 2 args */
/* #undef HAVE_2ARGS_BDI_SETUP_AND_REGISTER */

/* bdi_setup_and_register() wants 3 args */
#define HAVE_3ARGS_BDI_SETUP_AND_REGISTER 1

/* blkdev_get() wants 3 args */
#define HAVE_3ARG_BLKDEV_GET 1

/* sget() wants 5 args */
#define HAVE_5ARG_SGET 1

/* security_inode_init_security wants 6 args */
/* #undef HAVE_6ARGS_SECURITY_INODE_INIT_SECURITY */

/* dops->automount() exists */
#define HAVE_AUTOMOUNT 1

/* struct block_device_operations use bdevs */
#define HAVE_BDEV_BLOCK_DEVICE_OPERATIONS 1

/* bdev_logical_block_size() is available */
#define HAVE_BDEV_LOGICAL_BLOCK_SIZE 1

/* bdev_physical_block_size() is available */
#define HAVE_BDEV_PHYSICAL_BLOCK_SIZE 1

/* bio->bi_opf is defined */
/* #undef HAVE_BIO_BI_OPF */

/* bio has bi_iter */
/* #undef HAVE_BIO_BVEC_ITER */

/* BIO_RW_BARRIER is defined */
/* #undef HAVE_BIO_RW_BARRIER */

/* BIO_RW_DISCARD is defined */
/* #undef HAVE_BIO_RW_DISCARD */

/* BIO_RW_FAILFAST_* are defined */
/* #undef HAVE_BIO_RW_FAILFAST_DTD */

/* blkdev_get_by_path() is available */
#define HAVE_BLKDEV_GET_BY_PATH 1

/* blk_queue_flush() is available */
#define HAVE_BLK_QUEUE_FLUSH 1

/* blk_queue_flush() is GPL-only */
#define HAVE_BLK_QUEUE_FLUSH_GPL_ONLY 1

/* blk_queue_max_hw_sectors() is available */
#define HAVE_BLK_QUEUE_MAX_HW_SECTORS 1

/* blk_queue_max_segments() is available */
#define HAVE_BLK_QUEUE_MAX_SEGMENTS 1

/* blk_queue_write_cache() exists */
/* #undef HAVE_BLK_QUEUE_WRITE_CACHE */

/* blk_queue_write_cache() is GPL-only */
/* #undef HAVE_BLK_QUEUE_WRITE_CACHE_GPL_ONLY */

/* struct block_device_operations.release returns void */
#define HAVE_BLOCK_DEVICE_OPERATIONS_RELEASE_VOID 1

/* security_inode_init_security wants callback */
#define HAVE_CALLBACK_SECURITY_INODE_INIT_SECURITY 1

/* iops->check_acl() exists */
/* #undef HAVE_CHECK_ACL */

/* iops->check_acl() wants flags */
/* #undef HAVE_CHECK_ACL_WITH_FLAGS */

/* check_disk_size_change() is available */
#define HAVE_CHECK_DISK_SIZE_CHANGE 1

/* clear_inode() is available */
#define HAVE_CLEAR_INODE 1

/* eops->commit_metadata() exists */
#define HAVE_COMMIT_METADATA 1

/* dentry uses const struct dentry_operations */
#define HAVE_CONST_DENTRY_OPERATIONS 1

/* super_block uses const struct xattr_handler */
#define HAVE_CONST_XATTR_HANDLER 1

/* iops->create() passes nameidata */
/* #undef HAVE_CREATE_NAMEIDATA */

/* current->bio_list exists */
#define HAVE_CURRENT_BIO_LIST 1

/* current->bio_tail exists */
/* #undef HAVE_CURRENT_BIO_TAIL */

/* DECLARE_EVENT_CLASS() is available */
/* #undef HAVE_DECLARE_EVENT_CLASS */

/* sops->dirty_inode() wants flags */
#define HAVE_DIRTY_INODE_WITH_FLAGS 1

/* ql->discard_granularity is available */
#define HAVE_DISCARD_GRANULARITY 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* d_make_root() is available */
#define HAVE_D_MAKE_ROOT 1

/* d_obtain_alias() is available */
#define HAVE_D_OBTAIN_ALIAS 1

/* d_prune_aliases() is available */
#define HAVE_D_PRUNE_ALIASES 1

/* dops->d_revalidate() operation takes nameidata */
/* #undef HAVE_D_REVALIDATE_NAMEIDATA */

/* d_set_d_op() is available */
#define HAVE_D_SET_D_OP 1

/* elevator_change() is available */
#define HAVE_ELEVATOR_CHANGE 1

/* eops->encode_fh() wants child and parent inodes */
#define HAVE_ENCODE_FH_WITH_INODE 1

/* sops->evict_inode() exists */
#define HAVE_EVICT_INODE 1

/* fops->fallocate() exists */
#define HAVE_FILE_FALLOCATE 1

/* file_inode() is available */
#define HAVE_FILE_INODE 1

/* kernel defines fmode_t */
#define HAVE_FMODE_T 1

/* follow_down_one() is available */
#define HAVE_FOLLOW_DOWN_ONE 1

/* iops->follow_link() cookie */
/* #undef HAVE_FOLLOW_LINK_COOKIE */

/* iops->follow_link() nameidata */
#define HAVE_FOLLOW_LINK_NAMEIDATA 1

/* sops->free_cached_objects() exists */
#define HAVE_FREE_CACHED_OBJECTS 1

/* fops->fsync() with range */
#define HAVE_FSYNC_RANGE 1

/* fops->fsync() without dentry */
/* #undef HAVE_FSYNC_WITHOUT_DENTRY */

/* fops->fsync() with dentry */
/* #undef HAVE_FSYNC_WITH_DENTRY */

/* generic_start_io_acct()/generic_end_io_acct() avaliable */
/* #undef HAVE_GENERIC_IO_ACCT */

/* iops->get_acl() exists */
#define HAVE_GET_ACL 1

/* blk_disk_ro() is available */
#define HAVE_GET_DISK_RO 1

/* get_gendisk() is available */
#define HAVE_GET_GENDISK 1

/* iops->get_link() cookie */
/* #undef HAVE_GET_LINK_COOKIE */

/* iops->get_link() delayed */
/* #undef HAVE_GET_LINK_DELAYED */

/* fops->fallocate() exists */
/* #undef HAVE_INODE_FALLOCATE */

/* inode_owner_or_capable() exists */
#define HAVE_INODE_OWNER_OR_CAPABLE 1

/* iops->truncate_range() exists */
/* #undef HAVE_INODE_TRUNCATE_RANGE */

/* insert_inode_locked() is available */
#define HAVE_INSERT_INODE_LOCKED 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* is_owner_or_cap() exists */
/* #undef HAVE_IS_OWNER_OR_CAP */

/* uncached_acl_sentinel() exists */
/* #undef HAVE_KERNEL_GET_ACL_HANDLE_CACHE */

/* kernel defines KOBJ_NAME_LEN */
/* #undef HAVE_KOBJ_NAME_LEN */

/* Define if you have libblkid */
/* #undef HAVE_LIBBLKID */

/* Define if you have libuuid */
/* #undef HAVE_LIBUUID */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* lookup_bdev() is available */
#define HAVE_LOOKUP_BDEV 1

/* iops->lookup() passes nameidata */
/* #undef HAVE_LOOKUP_NAMEIDATA */

/* lseek_execute() is available */
/* #undef HAVE_LSEEK_EXECUTE */

/* Noting that make_request_fn() returns int */
/* #undef HAVE_MAKE_REQUEST_FN_RET_INT */

/* Noting that make_request_fn() returns blk_qc_t */
/* #undef HAVE_MAKE_REQUEST_FN_RET_QC */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* iops->create()/mkdir()/mknod() take umode_t */
#define HAVE_MKDIR_UMODE_T 1

/* Define to 1 if you have the `mlockall' function. */
/* #undef HAVE_MLOCKALL */

/* mount_nodev() is available */
#define HAVE_MOUNT_NODEV 1

/* sops->nr_cached_objects() exists */
#define HAVE_NR_CACHED_OBJECTS 1

/* open_bdev_exclusive() is available */
/* #undef HAVE_OPEN_BDEV_EXCLUSIVE */

/* iops->permission() exists */
#define HAVE_PERMISSION 1

/* iops->permission() with nameidata exists */
/* #undef HAVE_PERMISSION_WITH_NAMEIDATA */

/* posix_acl_chmod() exists */
#define HAVE_POSIX_ACL_CHMOD 1

/* posix_acl_equiv_mode wants umode_t* */
#define HAVE_POSIX_ACL_EQUIV_MODE_UMODE_T 1

/* posix_acl_from_xattr() needs user_ns */
#define HAVE_POSIX_ACL_FROM_XATTR_USERNS 1

/* posix_acl_release() is available */
#define HAVE_POSIX_ACL_RELEASE 1

/* posix_acl_release() is GPL-only */
#define HAVE_POSIX_ACL_RELEASE_GPL_ONLY 1

/* posix_acl_valid() wants user namespace */
/* #undef HAVE_POSIX_ACL_VALID_WITH_NS */

/* iops->put_link() cookie */
/* #undef HAVE_PUT_LINK_COOKIE */

/* iops->put_link() delayed */
/* #undef HAVE_PUT_LINK_DELAYED */

/* iops->put_link() nameidata */
#define HAVE_PUT_LINK_NAMEIDATA 1

/* REQ_FAILFAST_MASK is defined */
#define HAVE_REQ_FAILFAST_MASK 1

/* REQ_OP_DISCARD is defined */
/* #undef HAVE_REQ_OP_DISCARD */

/* REQ_OP_FLUSH is defined */
/* #undef HAVE_REQ_OP_FLUSH */

/* REQ_OP_SECURE_ERASE is defined */
/* #undef HAVE_REQ_OP_SECURE_DISCARD */

/* set_nlink() is available */
#define HAVE_SET_NLINK 1

/* sops->show_options() with dentry */
#define HAVE_SHOW_OPTIONS_WITH_DENTRY 1

/* struct super_block has s_shrink */
#define HAVE_SHRINK 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* struct super_block has s_d_op */
#define HAVE_S_D_OP 1

/* struct super_block has s_instances list_head */
/* #undef HAVE_S_INSTANCES_LIST_HEAD */

/* truncate_setsize() is available */
#define HAVE_TRUNCATE_SETSIZE 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* fops->iterate() is available */
/* #undef HAVE_VFS_ITERATE */

/* fops->iterate_shared() is available */
/* #undef HAVE_VFS_ITERATE_SHARED */

/* fops->readdir() is available */
#define HAVE_VFS_READDIR 1

/* fops->read/write_iter() are available */
/* #undef HAVE_VFS_RW_ITERATE */

/* xattr_handler->get() wants dentry */
#define HAVE_XATTR_GET_DENTRY 1

/* xattr_handler->get() wants both dentry and inode */
/* #undef HAVE_XATTR_GET_DENTRY_INODE */

/* xattr_handler->get() wants xattr_handler */
/* #undef HAVE_XATTR_GET_HANDLER */

/* xattr_handler->get() wants inode */
/* #undef HAVE_XATTR_GET_INODE */

/* xattr_handler has name */
/* #undef HAVE_XATTR_HANDLER_NAME */

/* xattr_handler->list() wants dentry */
#define HAVE_XATTR_LIST_DENTRY 1

/* xattr_handler->list() wants xattr_handler */
/* #undef HAVE_XATTR_LIST_HANDLER */

/* xattr_handler->list() wants inode */
/* #undef HAVE_XATTR_LIST_INODE */

/* xattr_handler->list() wants simple */
/* #undef HAVE_XATTR_LIST_SIMPLE */

/* xattr_handler->set() wants dentry */
#define HAVE_XATTR_SET_DENTRY 1

/* xattr_handler->set() wants both dentry and inode */
/* #undef HAVE_XATTR_SET_DENTRY_INODE */

/* xattr_handler->set() wants xattr_handler */
/* #undef HAVE_XATTR_SET_HANDLER */

/* xattr_handler->set() wants inode */
/* #undef HAVE_XATTR_SET_INODE */

/* Define if you have zlib */
/* #undef HAVE_ZLIB */

/* __posix_acl_chmod() exists */
/* #undef HAVE___POSIX_ACL_CHMOD */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* make_request_fn() returns blk_qc_t */
#define MAKE_REQUEST_FN_RET void

/* struct shrink_control has nid */
/* #undef SHRINK_CONTROL_HAS_NID */

/* zfs debugging enabled */
/* #undef ZFS_DEBUG */

/* Define to 1 if GPL-only symbols can be used */
/* #undef ZFS_IS_GPL_COMPATIBLE */

/* Define the project alias string. */
#define ZFS_META_ALIAS "zfs-0.6.5.8-1"

/* Define the project author. */
#define ZFS_META_AUTHOR "OpenZFS on Linux"

/* Define the project release date. */
/* #undef ZFS_META_DATA */

/* Define the project license. */
#define ZFS_META_LICENSE "CDDL"

/* Define the libtool library 'age' version information. */
/* #undef ZFS_META_LT_AGE */

/* Define the libtool library 'current' version information. */
/* #undef ZFS_META_LT_CURRENT */

/* Define the libtool library 'revision' version information. */
/* #undef ZFS_META_LT_REVISION */

/* Define the project name. */
#define ZFS_META_NAME "zfs"

/* Define the project release. */
#define ZFS_META_RELEASE "1"

/* Define the project version. */
#define ZFS_META_VERSION "0.6.5.8"


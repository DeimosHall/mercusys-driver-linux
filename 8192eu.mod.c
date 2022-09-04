#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x153a2c6f, "usb_register_driver" },
	{ 0x50acaeb4, "__napi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf0f074b8, "eth_type_trans" },
	{ 0xabd3bfb0, "cfg80211_external_auth_request" },
	{ 0x964b176c, "single_release" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd1c63e32, "napi_enable" },
	{ 0x754d539c, "strlen" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x24c67c02, "skb_queue_tail" },
	{ 0xfb573840, "cfg80211_rx_mgmt_khz" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x455f2074, "cfg80211_mgmt_tx_status" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5b1ddb15, "proc_mkdir_data" },
	{ 0xd91a3511, "dev_get_by_name" },
	{ 0x5f427f14, "wiphy_apply_custom_regulatory" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x7c3ccfcc, "napi_disable" },
	{ 0xf95e0fb3, "pv_ops" },
	{ 0xa715db6d, "free_netdev" },
	{ 0x35ae6139, "__cfg80211_alloc_reply_skb" },
	{ 0xafdca1af, "unregister_netdevice_queue" },
	{ 0xd993c62a, "__pskb_copy_fclone" },
	{ 0x2ad31def, "usb_submit_urb" },
	{ 0x62efabca, "netif_receive_skb" },
	{ 0x760a0f4f, "yield" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x9ca14e85, "alloc_etherdev_mqs" },
	{ 0xc7e1e1ce, "usb_free_urb" },
	{ 0x3cf6b789, "cfg80211_new_sta" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x9a1f7f85, "unregister_netdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc23297b7, "flush_signals" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x18f0912c, "cfg80211_inform_bss_frame_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x92997ed8, "_printk" },
	{ 0x26538862, "dev_alloc_name" },
	{ 0x82017c89, "usb_kill_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2acda660, "netif_carrier_on" },
	{ 0xc5ddd7ce, "cfg80211_unlink_bss" },
	{ 0x7bd0a6d1, "__dev_kfree_skb_any" },
	{ 0x508f4fd7, "proc_create_data" },
	{ 0x3f61efe1, "find_vpid" },
	{ 0x359567a7, "usb_alloc_coherent" },
	{ 0x1000e51, "schedule" },
	{ 0xce053976, "skb_push" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xb4c2c266, "kill_pid" },
	{ 0x38f08f3b, "skb_trim" },
	{ 0xb4126c0, "cfg80211_connect_done" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x52673010, "current_task" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd49b403a, "netif_napi_add" },
	{ 0xcf2a6966, "up" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x6c0888f4, "register_netdev" },
	{ 0x7c6111ec, "cfg80211_put_bss" },
	{ 0xd01d03ae, "cfg80211_roamed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xa93bfc46, "remove_proc_entry" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x3fdee4aa, "cfg80211_scan_done" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8a6b53de, "napi_complete_done" },
	{ 0x6b6889b6, "seq_read" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xa2c160fd, "netif_carrier_off" },
	{ 0xd4f125f5, "usb_get_dev" },
	{ 0xe72130a7, "param_ops_uint" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xab6c9cdf, "kthread_create_on_node" },
	{ 0x372f3c1d, "wake_up_process" },
	{ 0x56a92b68, "register_netdevice" },
	{ 0xb79032b, "seq_lseek" },
	{ 0x9928309e, "PDE_DATA" },
	{ 0x18edf861, "skb_copy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xaf8321b8, "param_ops_charp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3f29ca7e, "skb_copy_bits" },
	{ 0x9166fada, "strncpy" },
	{ 0x846bd9ce, "cfg80211_ibss_joined" },
	{ 0x5c73129f, "netif_rx" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x3631d6fa, "usb_deregister" },
	{ 0x5c6c6cdc, "skb_dequeue" },
	{ 0x42734167, "cfg80211_michael_mic_failure" },
	{ 0x5591a871, "netif_tx_wake_queue" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x44304a, "cfg80211_disconnected" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xa5700515, "kthread_stop" },
	{ 0xafcac0fb, "netif_device_attach" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x6e06a909, "init_net" },
	{ 0xde6d3721, "__cfg80211_send_event_skb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x652032cb, "mac_pton" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7a4bdfe, "seq_printf" },
	{ 0xa6257a2f, "complete" },
	{ 0x5d0d8388, "cfg80211_get_bss" },
	{ 0x8e0dcca9, "wiphy_new_nm" },
	{ 0xd27052e9, "param_array_ops" },
	{ 0xce67bc2b, "wiphy_free" },
	{ 0x8e6fd5b0, "device_init_wakeup" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xff125091, "seq_open" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x642f6ab6, "__netif_napi_del" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x1c4b5987, "proc_get_parent_data" },
	{ 0xa916b694, "strnlen" },
	{ 0x6bf2d5e5, "kernel_read" },
	{ 0x4a468d36, "skb_put" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9f984513, "strrchr" },
	{ 0xb4c3bad2, "cfg80211_ready_on_channel" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc9ef0765, "skb_clone" },
	{ 0x5a921311, "strncmp" },
	{ 0x3f972496, "ieee80211_get_channel_khz" },
	{ 0x4f1abab0, "cfg80211_ch_switch_started_notify" },
	{ 0xf9bf9755, "usb_put_dev" },
	{ 0x91a21d9d, "filp_close" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb0e602eb, "memmove" },
	{ 0xce8fddf2, "cfg80211_ch_switch_notify" },
	{ 0xfbec9cee, "usb_control_msg" },
	{ 0x55dc419c, "param_ops_int" },
	{ 0x4dfb0626, "napi_schedule_prep" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1025998, "single_open" },
	{ 0xfb578fc5, "memset" },
	{ 0xa17e177a, "__pskb_pull_tail" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6be7cdbe, "usb_alloc_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x841a3c4f, "usb_reset_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc8d90458, "filp_open" },
	{ 0x5be8d8be, "usb_autopm_get_interface" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4f7760ca, "wiphy_unregister" },
	{ 0xcd380335, "seq_release" },
	{ 0xda13959d, "netif_tx_stop_all_queues" },
	{ 0xb55449c1, "cfg80211_del_sta_sinfo" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x74d24a44, "cfg80211_vendor_cmd_reply" },
	{ 0x9b17a0c5, "usb_autopm_put_interface" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x727db97, "__netdev_alloc_skb" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x11089ac7, "_ctype" },
	{ 0x512afb54, "nla_put_nohdr" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa8b36968, "cfg80211_remain_on_channel_expired" },
	{ 0x93f12561, "nla_put" },
	{ 0xbd932108, "wiphy_register" },
	{ 0x5a9afb3a, "__cfg80211_alloc_event_skb" },
	{ 0x999e8297, "vfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x30d26cc6, "usb_free_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf4993d1b, "skb_pull" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Cd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB33d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "09B149D3307959E0C643120");

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe89b6b83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3f8c832c, __VMLINUX_SYMBOL_STR(RtmpOsTaskWakeUp) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xd865013d, __VMLINUX_SYMBOL_STR(RtmpOSFileSeek) },
	{ 0xa15e3322, __VMLINUX_SYMBOL_STR(RtmpOsVmalloc) },
	{ 0xbebf6a98, __VMLINUX_SYMBOL_STR(RtmpOSFileWrite) },
	{ 0x97b62a09, __VMLINUX_SYMBOL_STR(RTMP_QueryPacketInfo) },
	{ 0xb18adee3, __VMLINUX_SYMBOL_STR(RtmpOSFileClose) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xaa60cae0, __VMLINUX_SYMBOL_STR(rausb_rcvctrlpipe) },
	{ 0x7ed8156d, __VMLINUX_SYMBOL_STR(RtmpOsNetQueueStop) },
	{ 0xbeddb928, __VMLINUX_SYMBOL_STR(RtmpOsTaskletDataAssign) },
	{ 0x8187e82b, __VMLINUX_SYMBOL_STR(RtmpOSFileRead) },
	{ 0xc29bf967, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0xe8c29f63, __VMLINUX_SYMBOL_STR(RtPrivIoctlSetVal) },
	{ 0x534c5aa7, __VMLINUX_SYMBOL_STR(RtmpOsFileIsErr) },
	{ 0x104726dc, __VMLINUX_SYMBOL_STR(RtmpOSTaskKill) },
	{ 0x69262149, __VMLINUX_SYMBOL_STR(RtmpOsUsbUrbStatusGet) },
	{ 0x694b56bf, __VMLINUX_SYMBOL_STR(RtmpOsTickUnitGet) },
	{ 0xe16fa676, __VMLINUX_SYMBOL_STR(RtmpOsSemaInit) },
	{ 0x9c4a4213, __VMLINUX_SYMBOL_STR(RtmpOsUsbInitHTTxDesc) },
	{ 0xa1df5836, __VMLINUX_SYMBOL_STR(RTMPusecDelay) },
	{ 0x87575108, __VMLINUX_SYMBOL_STR(RTMP_OS_Init_Timer) },
	{ 0x2f3f7b95, __VMLINUX_SYMBOL_STR(RTPktOffsetData) },
	{ 0x57be1405, __VMLINUX_SYMBOL_STR(RtmpOsTaskPidInit) },
	{ 0x11f39ccf, __VMLINUX_SYMBOL_STR(RtmpOsSemaDestory) },
	{ 0x71c720bc, __VMLINUX_SYMBOL_STR(RtmpOsTaskIsKilled) },
	{ 0xc8334ac7, __VMLINUX_SYMBOL_STR(RtmpOsSemaWakeUp) },
	{ 0x3a84071e, __VMLINUX_SYMBOL_STR(RtmpOSNetDevFree) },
	{ 0x56fd52df, __VMLINUX_SYMBOL_STR(RtmpOsSendWirelessEvent) },
	{ 0xcfafb3de, __VMLINUX_SYMBOL_STR(rausb_kill_urb) },
	{ 0x8e1ae25b, __VMLINUX_SYMBOL_STR(RTMPL2FrameTxAction) },
	{ 0xb4f6177b, __VMLINUX_SYMBOL_STR(RtmpOSNetDevDetach) },
	{ 0x72c72167, __VMLINUX_SYMBOL_STR(RtmpOsUsbUrbLenGet) },
	{ 0xa1b7c180, __VMLINUX_SYMBOL_STR(RtmpOsStatsAlloc) },
	{ 0x2ce61a90, __VMLINUX_SYMBOL_STR(RTMP_OS_Release_Timer) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x9b993774, __VMLINUX_SYMBOL_STR(RTMPAllocateNdisPacket) },
	{ 0xcc176b2, __VMLINUX_SYMBOL_STR(RtmpOsAtomicRead) },
	{ 0xccf87281, __VMLINUX_SYMBOL_STR(RTMP_GetCurrentSystemTime) },
	{ 0x687a37a4, __VMLINUX_SYMBOL_STR(RtmpOsOpsInit) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8b647a20, __VMLINUX_SYMBOL_STR(RtmpOsTaskletKill) },
	{ 0x5633edb2, __VMLINUX_SYMBOL_STR(RtmpOsNtohs) },
	{ 0x171ac95b, __VMLINUX_SYMBOL_STR(os_alloc_mem_suspend) },
	{ 0xa6542bac, __VMLINUX_SYMBOL_STR(RtmpOsSpinLockBh) },
	{ 0x828ee54f, __VMLINUX_SYMBOL_STR(RtmpOsGetPid) },
	{ 0xa796ed29, __VMLINUX_SYMBOL_STR(RtmpOsSpinUnLockBh) },
	{ 0xd784ff10, __VMLINUX_SYMBOL_STR(RtmpOsUsbDmaMapping) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x210ac9ed, __VMLINUX_SYMBOL_STR(wlan_802_11_to_802_3_packet) },
	{ 0x8037aa8f, __VMLINUX_SYMBOL_STR(RtmpOsNetDevGetPhyAddr) },
	{ 0x6f44fa68, __VMLINUX_SYMBOL_STR(RtmpOsSemaWaitInterruptible) },
	{ 0xf7fdb179, __VMLINUX_SYMBOL_STR(RtmpComplete) },
	{ 0x9d423669, __VMLINUX_SYMBOL_STR(RtmpOsNetQueueStart) },
	{ 0x959689fd, __VMLINUX_SYMBOL_STR(RtmpWaitForCompletionTimeout) },
	{ 0x990439e, __VMLINUX_SYMBOL_STR(RtmpOsPktIappMakeUp) },
	{ 0x8a595f82, __VMLINUX_SYMBOL_STR(rausb_sndctrlpipe) },
	{ 0xa3cdd0cb, __VMLINUX_SYMBOL_STR(RtmpOSFSInfoChange) },
	{ 0xd62a2cb4, __VMLINUX_SYMBOL_STR(RtmpOsIsInInterrupt) },
	{ 0x9c5380f1, __VMLINUX_SYMBOL_STR(RtmpOSWrielessEventSendExt) },
	{ 0xf470bb21, __VMLINUX_SYMBOL_STR(RtmpOsAtomicDestroy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e480d54, __VMLINUX_SYMBOL_STR(RtmpOsUsbUrbDataGet) },
	{ 0x45214922, __VMLINUX_SYMBOL_STR(RtmpOsNtohl) },
	{ 0x4c5ee785, __VMLINUX_SYMBOL_STR(RtmpOsSetNetDevPriv) },
	{ 0x547c5404, __VMLINUX_SYMBOL_STR(RtmpOsCopyFromUser) },
	{ 0x1dccb90d, __VMLINUX_SYMBOL_STR(RtmpDrvMaxRateGet) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd5264d85, __VMLINUX_SYMBOL_STR(RtmpOsUsbInitRxDesc) },
	{ 0x3a929611, __VMLINUX_SYMBOL_STR(RtmpOsGetUnaligned32) },
	{ 0x871a18eb, __VMLINUX_SYMBOL_STR(RtmpOsUsbStatusGet) },
	{ 0x57210bf2, __VMLINUX_SYMBOL_STR(RtmpOSFileOpen) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xef619300, __VMLINUX_SYMBOL_STR(RtmpOsPktTailBufExtend) },
	{ 0xe66efdb6, __VMLINUX_SYMBOL_STR(RtmpOsGetUnaligned) },
	{ 0xfe1098e6, __VMLINUX_SYMBOL_STR(RtmpOsMaxScanDataGet) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb0e75266, __VMLINUX_SYMBOL_STR(hex_dump) },
	{ 0x4eee06a, __VMLINUX_SYMBOL_STR(rausb_free_urb) },
	{ 0xcbd1cb1, __VMLINUX_SYMBOL_STR(RTMP_OS_Del_Timer) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x65fc3e5c, __VMLINUX_SYMBOL_STR(RtmpOsAllocateLock) },
	{ 0xd491a5d5, __VMLINUX_SYMBOL_STR(RtmpOSTaskCustomize) },
	{ 0x42520ac8, __VMLINUX_SYMBOL_STR(DuplicatePacket) },
	{ 0x3ee1d0fe, __VMLINUX_SYMBOL_STR(RtmpOsIntUnLock) },
	{ 0xb52c8c9a, __VMLINUX_SYMBOL_STR(duplicate_pkt_with_VLAN) },
	{ 0x5e532fe9, __VMLINUX_SYMBOL_STR(RtmpOsPktRcvHandle) },
	{ 0xd9f9dacd, __VMLINUX_SYMBOL_STR(RtmpOSNetDevAttach) },
	{ 0xc6ec5ccc, __VMLINUX_SYMBOL_STR(RtmpOsMsDelay) },
	{ 0xca7ae9ce, __VMLINUX_SYMBOL_STR(RtmpOSNetDevAddrSet) },
	{ 0x89b49203, __VMLINUX_SYMBOL_STR(RtmpOsPktBodyCopy) },
	{ 0x1c0bd89d, __VMLINUX_SYMBOL_STR(RtmpOsCopyToUser) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xd9284062, __VMLINUX_SYMBOL_STR(duplicate_pkt_with_TKIP_MIC) },
	{ 0x248b5d, __VMLINUX_SYMBOL_STR(RtmpOsUsbEmptyUrbCheck) },
	{ 0x7d8b7177, __VMLINUX_SYMBOL_STR(rausb_control_msg) },
	{ 0x8acbc66, __VMLINUX_SYMBOL_STR(RtmpOsWlanEventSet) },
	{ 0x3467c600, __VMLINUX_SYMBOL_STR(RtmpOsTaskletSche) },
	{ 0x3d35af3a, __VMLINUX_SYMBOL_STR(RtmpOsTimerAfter) },
	{ 0x9cd55864, __VMLINUX_SYMBOL_STR(os_free_mem) },
	{ 0xfb6208bf, __VMLINUX_SYMBOL_STR(RTMP_OS_Mod_Timer) },
	{ 0x9c5110c, __VMLINUX_SYMBOL_STR(RtmpOsHtons) },
	{ 0xd039db07, __VMLINUX_SYMBOL_STR(VLAN_8023_Header_Copy) },
	{ 0x538744a8, __VMLINUX_SYMBOL_STR(RtmpOsGetUnalignedlong) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xec999329, __VMLINUX_SYMBOL_STR(RtmpMsecsToJiffies) },
	{ 0x6990e408, __VMLINUX_SYMBOL_STR(RtmpOSNetDevProtect) },
	{ 0xecc25871, __VMLINUX_SYMBOL_STR(rausb_alloc_urb) },
	{ 0xb87c21d0, __VMLINUX_SYMBOL_STR(RTMP_AllocateFragPacketBuffer) },
	{ 0xb060b677, __VMLINUX_SYMBOL_STR(RTPktOffsetCB) },
	{ 0xcde2d9e1, __VMLINUX_SYMBOL_STR(RtmpOsCmdUp) },
	{ 0xd082bb60, __VMLINUX_SYMBOL_STR(rausb_submit_urb) },
	{ 0x4767d72a, __VMLINUX_SYMBOL_STR(RtmpOsIntLock) },
	{ 0x3e839d40, __VMLINUX_SYMBOL_STR(RtmpOsSimpleStrtol) },
	{ 0xfbff3a1f, __VMLINUX_SYMBOL_STR(RTMP_OS_Add_Timer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9f901ef6, __VMLINUX_SYMBOL_STR(RtmpOsGetNetDevPriv) },
	{ 0xb286a8e, __VMLINUX_SYMBOL_STR(RtmpOsMlmeUp) },
	{ 0xa1c6fa6a, __VMLINUX_SYMBOL_STR(RtmpInitCompletion) },
	{ 0xccfc0ba, __VMLINUX_SYMBOL_STR(RtmpOsPktProtocolAssign) },
	{ 0xc9a09db8, __VMLINUX_SYMBOL_STR(RtmpOsTaskDataGet) },
	{ 0x91104ada, __VMLINUX_SYMBOL_STR(Sniff2BytesFromNdisBuffer) },
	{ 0xe4680990, __VMLINUX_SYMBOL_STR(RtmpOSTaskWait) },
	{ 0xae4085d7, __VMLINUX_SYMBOL_STR(RtmpOsAtomicDec) },
	{ 0x2300115d, __VMLINUX_SYMBOL_STR(RtmpOsVfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdbc55985, __VMLINUX_SYMBOL_STR(RtmpOSTaskAttach) },
	{ 0x5312eccd, __VMLINUX_SYMBOL_STR(RtmpOsTimerBefore) },
	{ 0x757d9021, __VMLINUX_SYMBOL_STR(RTDebugLevel) },
	{ 0xbfdf03e3, __VMLINUX_SYMBOL_STR(ClonePacket) },
	{ 0x3d898806, __VMLINUX_SYMBOL_STR(RtmpOsCheckTaskLegality) },
	{ 0x1d50a820, __VMLINUX_SYMBOL_STR(RtmpOsGetSystemUpTime) },
	{ 0x39f5da0f, __VMLINUX_SYMBOL_STR(RTDebugFunc) },
	{ 0xf245ad00, __VMLINUX_SYMBOL_STR(RtmpOsUsbContextGet) },
	{ 0x20adc8cd, __VMLINUX_SYMBOL_STR(os_alloc_mem) },
	{ 0x910af8b8, __VMLINUX_SYMBOL_STR(RtmpOSWrielessEventSend) },
	{ 0x2c2669d4, __VMLINUX_SYMBOL_STR(RTPktOffsetLen) },
	{ 0xd3056460, __VMLINUX_SYMBOL_STR(RtmpOSNetDevCreate) },
	{ 0xd9394ad6, __VMLINUX_SYMBOL_STR(RTMP_SetPeriodicTimer) },
	{ 0x48f5cb6f, __VMLINUX_SYMBOL_STR(RtmpOsWait) },
	{ 0x3531a339, __VMLINUX_SYMBOL_STR(AdapterBlockAllocateMemory) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7b793024, __VMLINUX_SYMBOL_STR(RTMPFreeNdisPacket) },
	{ 0xbdfb0047, __VMLINUX_SYMBOL_STR(RtmpOSNetDevIsUp) },
	{ 0x5f41b717, __VMLINUX_SYMBOL_STR(RtmpOsPktInit) },
	{ 0x2953cc82, __VMLINUX_SYMBOL_STR(RtmpThreadPidKill) },
	{ 0x420b255e, __VMLINUX_SYMBOL_STR(rausb_buffer_alloc) },
	{ 0x365c8fe7, __VMLINUX_SYMBOL_STR(RtmpOsTaskletInit) },
	{ 0xdc8c5fa0, __VMLINUX_SYMBOL_STR(RtmpOsAtomicInit) },
	{ 0xd1aef268, __VMLINUX_SYMBOL_STR(RtmpOSTaskInit) },
	{ 0x136d691a, __VMLINUX_SYMBOL_STR(RtmpUtilInit) },
	{ 0xd158cb5e, __VMLINUX_SYMBOL_STR(RtmpOsAtomicInterlockedExchange) },
	{ 0x1ad7b59c, __VMLINUX_SYMBOL_STR(RtmpOsHtonl) },
	{ 0x8b3d0e35, __VMLINUX_SYMBOL_STR(RtmpOsGetNetDevName) },
	{ 0xe902eaec, __VMLINUX_SYMBOL_STR(RtmpOSTaskNotifyToExit) },
	{ 0x42d43552, __VMLINUX_SYMBOL_STR(RtmpOsPktHeadBufExtend) },
	{ 0x9e5a6d2e, __VMLINUX_SYMBOL_STR(RtmpOsFreeSpinLock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x82eff8bb, __VMLINUX_SYMBOL_STR(rausb_buffer_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtutil7601Uap";


MODULE_INFO(srcversion, "E247D21742D6D90D576E790");

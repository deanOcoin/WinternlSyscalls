// Every winternl.h function defined as a syscall(EXCEPT CONVERSION FUNCTIONS)
// winternl.h : https://docs.microsoft.com/en-us/windows/win32/api/winternl/

// FUNCTION DEFINITION

#include "pch.h"
#include <Windows.h>
#include "winternl.h"
#pragma comment(lib, "ntdll")

EXTERN_C NTSTATUS SysNtClose(HANDLE Handle);


EXTERN_C NTSTATUS SysNtCreateFile(
	PHANDLE FileHandle,
	ACCESS_MASK DesiredAccess,
	POBJECT_ATTRIBUTES ObjectAttributes,
	PIO_STATUS_BLOCK IoStatusBlock,
	PLARGE_INTEGER AllocationSize,
	ULONG FileAttributes,
	ULONG ShareAccess,
	ULONG CreateDisposition,
	ULONG CreateOptions,
	PVOID EaBuffer,
	ULONG EaLength);


EXTERN_C NTSTATUS SysNtDeviceIoControlFile(
	HANDLE FileHandle,
	HANDLE Event,
	PIO_APC_ROUTINE ApcRoutine,
	PVOID ApcContext,
	PIO_APC_ROUTINE IoStatusBlock,
	ULONG IoControlCode,
	PVOID InputBuffer,
	ULONG InputBufferLength,
	PVOID OutputBuffer,
	ULONG OutputBufferLength);


EXTERN_C NTSTATUS SysNtNotifyChangeMultipleKeys(
	HANDLE MasterKeyHandle,
	ULONG Count,
	OBJECT_ATTRIBUTES SubordinateObjects, // Pointer to an Array
	HANDLE Event,
	PIO_APC_ROUTINE ApcRoutine,
	PVOID ApcContext,
	PIO_APC_ROUTINE IoStatusBlock,
	ULONG CompletionFilter,
	BOOLEAN WatchTree,
	PVOID Buffer,
	ULONG BufferSize,
	BOOLEAN Asynchronous);


EXTERN_C NTSTATUS SysNtOpenFile(
	PHANDLE FileHandle,
	ACCESS_MASK DesiredAccess,
	POBJECT_ATTRIBUTES ObjectAttributes,
	PIO_STATUS_BLOCK IoStatusBlock,
	ULONG ShareAccess,
	ULONG OpenOptions);

EXTERN_C NTSTATUS SysNtQueryInformationProcess(
	HANDLE ProcessHandle,
	PROCESSINFOCLASS ProcessInformationClass,
	PVOID ProcessInformation,
	ULONG ProcessInformationLength,
	PULONG ReturnLength);


EXTERN_C NTSTATUS SysNtQueryInformationThread(
	HANDLE ThreadHandle,
	PROCESSINFOCLASS ThreadInformationClass,
	PVOID ThreadInformation,
	ULONG ThreadInformationLength,
	PULONG ReturnLength);


EXTERN_C NTSTATUS SysNtQueryMultipleValueKey(
	HANDLE KeyHandle,
	PKEY_VALUE_ENTRY ValueEntries,
	ULONG EntryCount,
	PVOID ValueBuffer,
	PULONG BufferLength,
	PULONG RequiredBufferLength);


EXTERN_C NTSTATUS SysNtQueryObject(
	HANDLE Handle,
	OBJECT_INFORMATION_CLASS ObjectInformationClass,
	PVOID ObjectInformation,
	ULONG ObjectInformationLength,
	PULONG ReturnLength);


EXTERN_C NTSTATUS SysNtQuerySystemInformation(
	SYSTEM_INFORMATION_CLASS SystemInformationClass,
	PVOID SystemInformation,
	ULONG SystemImformationLength,
	PULONG ReturnLength);


EXTERN_C NTSTATUS SysNtQuerySystemTime(PLARGE_INTEGER SystemTime);


EXTERN_C NTSTATUS SysNtRenameKey(
	HANDLE KeyHandle,
	PUNICODE_STRING NewName);


EXTERN_C NTSTATUS SysNtSetInformationKey(
	HANDLE KeyHandle,
	KEY_SET_INFORMATION_CLASS KeySetInformationClass,
	PVOID KeySetInformation,
	ULONG KeySetInformationLength);

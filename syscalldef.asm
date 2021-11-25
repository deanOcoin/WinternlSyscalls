; Every winternl.h function defined as a syscall (EXCEPT CONVERSION FUNCTIONS)
; winternl.h : https://docs.microsoft.com/en-us/windows/win32/api/winternl/

; FUNCTION CODE DEFINITION

.code
	; NtClose
	SysNtClose proc
		mov r10, rcx
		mov eax, 0Fh
		syscall
		ret
	SysNtClose endp


	; NtCreateFile
	SysNtCreateFile proc
		mov r10, rcx
		mov eax, 55h
		syscall
		ret
	SysNtCreateFile endp


	; NtDeviceIoControlFile
	SysNtDeviceIoControlFile proc
		mov r10, rcx
		mov eax, 7
		syscall
		ret
	SysNtDeviceIoControlFile endp


	; NtNotifyChangeMultipleKeys
	SysNtNotifyChangeMultipleKeys proc
		mov r10, rcx
		mov eax, 11Ah
		syscall
		ret
	SysNtNotifyChangeMultipleKeys endp


	; NtOpenFile
	SysNtOpenFile proc
		mov r10, rcx
		mov eax, 33h
		syscall
		ret
	SysNtOpenFil endp


	; NtQueryInformationProcess
	SysNtQueryInformationProcess proc
		mov r10, rcx
		mov eax, 19h
		syscall
		ret
	SysNtQueryInformationProcess endp


	; NtQueryInformationThread
	SysNtQueryInformationThread proc
		mov r10, rcx
		mov eax, 25h
		syscall
		ret
	SysNtQueryInformationThread endp


	; NtQueryMultipleValueKey
	SysNtQueryMultipleValueKey proc
		mov r10, rcx
		mov eax, 154h
		syscall
		ret
	SysNtQueryMultipleValueKey endp


	; NtQueryObject
	SysNtQueryObject proc
		mov r10, rcx
		mov eax, 10h
		syscall
		ret
	SysNtQueryObject endp


	; NtQuerySystemInformation
	SysNtQuerySystemInformation proc
		mov r10, rcx
		mov eax, 36h
		syscall
		ret
	SysNtQuerySystemInformation endp


	; NtQuerySystemTime
	SysNtQuerySystemTime proc
		mov r10, rcx
		mov eax, 58h
		syscall
		ret
	SysNtQuerySystemTime endp


	; NtRenameKey
	SysNtRenameKey proc
		mov r10, rcx
		mov eax, 172h
		syscall
		ret
	SysNtRenameKey endp


	; NtSetInformationKey
	SysNtSetInformationKey proc
		mov r10, rcx
		mov eax, 198h
		syscall
		ret
	SysNtSetInformationKey endp

end










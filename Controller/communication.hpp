#pragma once

#include <Windows.h>

#define IO_GET_CLIENTADRESS CTL_CODE(FILE_DEVICE_UNKNOWN, 0x228, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_READ_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x227, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_WRITE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x229, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_REQUEST_PROCESSID CTL_CODE(FILE_DEVICE_UNKNOWN, 0x230, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

#define IO_INIT_DATA CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1337, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_GET_MODULES CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1338, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_READ_PROCESS_MEMORY CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1488, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define IO_WRITE_PROCESS_MEMORY CTL_CODE(FILE_DEVICE_UNKNOWN, 0x1499, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)


typedef struct _KERNEL_GET_MODULES_REQUEST
{
	DWORD64 bCLIENT;
	NTSTATUS result;
} _KERNEL_GET_MODULES_REQUEST, * PKERNEL_GET_MODULES_REQUEST;

typedef struct _KERNEL_READ_REQUEST
{
	DWORD32	Adress;
	DWORD64 Response;
	SIZE_T Size;
	NTSTATUS Result;
} _KERNEL_READ_REQUEST, *PKERNEL_READ_REQUEST2;

typedef struct _KERNEL_WRITE_REQUEST
{
	DWORD32	Adress;
	DWORD64 Value;
	SIZE_T Size;
	NTSTATUS Result;
}_KERNEL_WRITE_REQUEST, *PKERNEL_WRITE_REQUEST2;

typedef struct _KERNEL_INIT_DATA_REQUEST
{
	DWORD32 gameId;
	DWORD32 cheatId;
	NTSTATUS Result;
}_KERNEL_INIT_DATA_REQUEST, * PKERNEL_INIT_DATA_REQUEST;

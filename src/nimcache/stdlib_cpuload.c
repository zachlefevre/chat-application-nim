/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Users\ZACH\Documents\mingw64\bin\gcc.exe -c  -w  -IC:\Users\ZACH\Documents\nim-0.17.0\lib -o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_cpuload.o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_cpuload.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <windows.h>
#undef linux
#undef near
typedef struct FILETIME_bs4NMleDDVF7xsEK0SGLBw FILETIME_bs4NMleDDVF7xsEK0SGLBw;
typedef struct GcThread_hgJQSlfXDOK3SwSHjeZBXg GcThread_hgJQSlfXDOK3SwSHjeZBXg;
typedef struct ThreadPoolState_jN9benzGjAA9bryIHC1FGnZA ThreadPoolState_jN9benzGjAA9bryIHC1FGnZA;
typedef struct Exception Exception;
typedef struct TY_WF89a8QyKeDCh4DYWTmSiBg TY_WF89a8QyKeDCh4DYWTmSiBg;
typedef struct TGenericSeq TGenericSeq;
typedef struct TSafePoint TSafePoint;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct SharedList_9cWkTIPQvNw7gFHMOEzMCLw SharedList_9cWkTIPQvNw7gFHMOEzMCLw;
typedef struct SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct NimStringDesc NimStringDesc;
struct  FILETIME_bs4NMleDDVF7xsEK0SGLBw  {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef NF TY_SBX73RxxTewX4sqVYGfdEA[1001];
struct  GcThread_hgJQSlfXDOK3SwSHjeZBXg  {
TY_SBX73RxxTewX4sqVYGfdEA tls;
};
typedef NU8 ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig;
typedef N_STDCALL_PTR(NI32, TY_dsGSP5d71RCsLRHTMM4ScA) (FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpIdleTime, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpKernelTime, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpUserTime);
typedef N_STDCALL_PTR(NI32, TY_Rm9bSPgU9bryMLuDkmTLzYBA) (NI hProcess, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpCreationTime, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpExitTime, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpKernelTime, FILETIME_bs4NMleDDVF7xsEK0SGLBw* lpUserTime);
struct  ThreadPoolState_jN9benzGjAA9bryIHC1FGnZA  {
FILETIME_bs4NMleDDVF7xsEK0SGLBw prevSysKernel;
FILETIME_bs4NMleDDVF7xsEK0SGLBw prevSysUser;
FILETIME_bs4NMleDDVF7xsEK0SGLBw prevProcKernel;
FILETIME_bs4NMleDDVF7xsEK0SGLBw prevProcUser;
NI calls;
};
typedef N_NIMCALL_PTR(NIM_BOOL, TY_hgOQFBQi19biNdOUUkFOOxA) (Exception* e);
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} TY_IIomJ6ptE6vfJ5zRbATgkQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  SharedList_9cWkTIPQvNw7gFHMOEzMCLw  {
SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* head;
SharedListNodecolonObjectType__82xHhBDm9bpijSPOyEGz0Hw* tail;
CRITICAL_SECTION lock;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
SharedList_9cWkTIPQvNw7gFHMOEzMCLw toDispose;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct TY_WF89a8QyKeDCh4DYWTmSiBg {
  TGenericSeq Sup;
  TY_IIomJ6ptE6vfJ5zRbATgkQ data[SEQ_DECL_SIZE];
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
typedef struct {TY_hgOQFBQi19biNdOUUkFOOxA localRaiseHook_EIvMhANBvB9cp2Ezvt29cADg;
TY_WF89a8QyKeDCh4DYWTmSiBg* threadDestructionHandlers_8OmU3x0fNdA0DLtOmU3kWw;
TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
Exception* currException_9bVPeDJlYTi9bQApZpfH8wjg;
GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NIM_BOOL envComputed_LLyFo9bsdu1ZXMDvAe8DhrQ;
TY_sM4lkSb7zS6F7OVMvW9cffQ* environment_mlhK49b6YMgc9cgrcYkKq9a3g;
TY_sM4lkSb7zS6F7OVMvW9cffQ* ownArgv_WVJ54JSHy7VxacV39bwBPFA;
NIM_BOOL isSlave_t9a8wsVVRYqGEKhg1vb49b3g;
} NimThreadVars;
N_NIMCALL(NI64, minus__Ds3I7u0HVk9bf1Rb08nyhYQ)(FILETIME_bs4NMleDDVF7xsEK0SGLBw a, FILETIME_bs4NMleDDVF7xsEK0SGLBw b);
N_NIMCALL(NI64, rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ)(FILETIME_bs4NMleDDVF7xsEK0SGLBw f);
static N_INLINE(NI64, subInt64)(NI64 a, NI64 b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void*, GetThreadLocalVars)(void);
N_NIMCALL(void*, threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg)(NI32 dwTlsIndex);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig, advice_9bmaXUZIEfSc9ax0Tn2TlQng)(ThreadPoolState_jN9benzGjAA9bryIHC1FGnZA* s);
static N_INLINE(NI64, addInt64)(NI64 a, NI64 b);
static N_INLINE(NI, addInt)(NI a, NI b);
extern NI32 globalsSlot_ciXDZu9c27pHpCRMoz4RIgw;
extern TY_dsGSP5d71RCsLRHTMM4ScA Dl_139997_;
extern TY_Rm9bSPgU9bryMLuDkmTLzYBA Dl_140003_;

static N_INLINE(NI64, subInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void*, GetThreadLocalVars)(void) {
	void* result;
	void* T1_;
	result = (void*)0;
	T1_ = (void*)0;
	T1_ = threadVarGetValue_RA7AnSIB7ATZq3Th1d9czYg(globalsSlot_ciXDZu9c27pHpCRMoz4RIgw);
	result = ((void*) ((*((GcThread_hgJQSlfXDOK3SwSHjeZBXg*) (T1_))).tls));
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	T1_ = (NI)0;
	{
		if (!(NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	NimThreadVars* NimTV_;
	NimTV_ = (NimThreadVars*) GetThreadLocalVars();
	NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*NimTV_->framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NI64, minus__Ds3I7u0HVk9bf1Rb08nyhYQ)(FILETIME_bs4NMleDDVF7xsEK0SGLBw a, FILETIME_bs4NMleDDVF7xsEK0SGLBw b) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	NI64 TM_CFWzmO8DEHxStvjr8GyqGg_2;
	nimfr_("-", "cpuload.nim")
	result = (NI64)0;
	nimln_(16, "cpuload.nim");
	T1_ = (NI64)0;
	T1_ = rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ(a);
	T2_ = (NI64)0;
	T2_ = rdFileTime_8xfVp1z4bc5fRCRgoEFhIQ(b);
	TM_CFWzmO8DEHxStvjr8GyqGg_2 = subInt64(T1_, T2_);
	result = (NI64)(TM_CFWzmO8DEHxStvjr8GyqGg_2);
	popFrame();
	return result;
}

static N_INLINE(NI64, addInt64)(NI64 a, NI64 b) {
	NI64 result;
{	result = (NI64)0;
	result = (NI64)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig, advice_9bmaXUZIEfSc9ax0Tn2TlQng)(ThreadPoolState_jN9benzGjAA9bryIHC1FGnZA* s) {
	ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig result;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw sysIdle;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw sysKernel;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw sysUser;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw procCreation;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw procExit;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw procKernel;
	FILETIME_bs4NMleDDVF7xsEK0SGLBw procUser;
	NI TM_CFWzmO8DEHxStvjr8GyqGg_5;
	nimfr_("advice", "cpuload.nim")
{	result = (ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig)0;
	memset((void*)(&sysIdle), 0, sizeof(sysIdle));
	memset((void*)(&sysKernel), 0, sizeof(sysKernel));
	memset((void*)(&sysUser), 0, sizeof(sysUser));
	memset((void*)(&procCreation), 0, sizeof(procCreation));
	memset((void*)(&procExit), 0, sizeof(procExit));
	memset((void*)(&procKernel), 0, sizeof(procKernel));
	memset((void*)(&procUser), 0, sizeof(procUser));
	nimln_(36, "cpuload.nim");
	{
		NIM_BOOL T3_;
		NI32 T4_;
		NI32 T6_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NI32)0;
		T4_ = Dl_139997_((&sysIdle), (&sysKernel), (&sysUser));
		T3_ = (T4_ == ((NI32) 0));
		if (T3_) goto LA5_;
		nimln_(37, "cpuload.nim");
		T6_ = (NI32)0;
		T6_ = Dl_140003_(((NI) -1), (&procCreation), (&procExit), (&procKernel), (&procUser));
		T3_ = (T6_ == ((NI32) 0));
		LA5_: ;
		if (!T3_) goto LA7_;
		nimln_(39, "cpuload.nim");
		result = ((ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig) 0);
		goto BeforeRet_;
	}
	LA7_: ;
	nimln_(40, "cpuload.nim");
	{
		NI64 sysKernelDiff;
		NI64 sysUserDiff;
		NI64 procKernelDiff;
		NI64 procUserDiff;
		NI64 sysTotal;
		NI64 TM_CFWzmO8DEHxStvjr8GyqGg_3;
		NI64 procTotal;
		NI64 TM_CFWzmO8DEHxStvjr8GyqGg_4;
		if (!(((NI) 0) < (*s).calls)) goto LA11_;
		nimln_(42, "cpuload.nim");
		sysKernelDiff = minus__Ds3I7u0HVk9bf1Rb08nyhYQ(sysKernel, (*s).prevSysKernel);
		nimln_(43, "cpuload.nim");
		sysUserDiff = minus__Ds3I7u0HVk9bf1Rb08nyhYQ(sysUser, (*s).prevSysUser);
		nimln_(45, "cpuload.nim");
		procKernelDiff = minus__Ds3I7u0HVk9bf1Rb08nyhYQ(procKernel, (*s).prevProcKernel);
		nimln_(46, "cpuload.nim");
		procUserDiff = minus__Ds3I7u0HVk9bf1Rb08nyhYQ(procUser, (*s).prevProcUser);
		nimln_(48, "cpuload.nim");
		TM_CFWzmO8DEHxStvjr8GyqGg_3 = addInt64(sysKernelDiff, sysUserDiff);
		sysTotal = (NI64)(TM_CFWzmO8DEHxStvjr8GyqGg_3);
		nimln_(49, "cpuload.nim");
		TM_CFWzmO8DEHxStvjr8GyqGg_4 = addInt64(procKernelDiff, procUserDiff);
		procTotal = (NI64)(TM_CFWzmO8DEHxStvjr8GyqGg_4);
		nimln_(53, "cpuload.nim");
		{
			NIM_BOOL T15_;
			T15_ = (NIM_BOOL)0;
			T15_ = (sysTotal == IL64(0));
			if (T15_) goto LA16_;
			T15_ = (((NF)(((NF) (procTotal))) / (NF)(((NF) (sysTotal)))) < 8.4999999999999998e-001);
			LA16_: ;
			if (!T15_) goto LA17_;
			nimln_(54, "cpuload.nim");
			result = ((ThreadPoolAdvice_vD9cAMuSmfH29a9al5Q9cUZCig) 1);
		}
		LA17_: ;
	}
	LA11_: ;
	nimln_(55, "cpuload.nim");
	(*s).prevSysKernel = sysKernel;
	nimln_(56, "cpuload.nim");
	(*s).prevSysUser = sysUser;
	nimln_(57, "cpuload.nim");
	(*s).prevProcKernel = procKernel;
	nimln_(58, "cpuload.nim");
	(*s).prevProcUser = procUser;
	nimln_(79, "cpuload.nim");
	TM_CFWzmO8DEHxStvjr8GyqGg_5 = addInt((*s).calls, ((NI) 1));
	(*s).calls = (NI)(TM_CFWzmO8DEHxStvjr8GyqGg_5);
	}BeforeRet_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuloadInit000)(void) {
	nimfr_("cpuload", "cpuload.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuloadDatInit000)(void) {
}


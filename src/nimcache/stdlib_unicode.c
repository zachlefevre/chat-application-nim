/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\Users\ZACH\Documents\mingw64\bin\gcc.exe -c  -w  -IC:\Users\ZACH\Documents\nim-0.17.0\lib -o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_unicode.o C:\Users\ZACH\Documents\nim\chapter3\chatapp\src\nimcache\stdlib_unicode.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
#undef near
typedef struct TY_48JTohSgTy339bRxHzUD8KA TY_48JTohSgTy339bRxHzUD8KA;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_48JTohSgTy339bRxHzUD8KA {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY_48JTohSgTy339bRxHzUD8KA*, newSeq_eYYHkXwVzOzgg15yEr5XtA)(NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
TNimType NTI_sVg18TP9cLifHyygRe9cro9aA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_e1RUVS0Bw7xmj9cnDPXLJMQ_2, "", 0);

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c) {
	NimStringDesc* result;
	NI32 i;
	nimfr_("toUTF8", "unicode.nim")
	result = (NimStringDesc*)0;
	nimln_(213, "unicode.nim");
	result = copyString(((NimStringDesc*) &TM_e1RUVS0Bw7xmj9cnDPXLJMQ_2));
	nimln_(168, "unicode.nim");
	i = c;
	nimln_(214, "unicode.nim");
	{
		nimln_(169, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 127)))) goto LA3_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 1));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(171, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange(i, ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(173, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 2047)))) goto LA6_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 2));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(175, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) | ((NI32) 192)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 1)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(176, "unicode.nim");
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA6_: ;
	{
		nimln_(178, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 65535)))) goto LA9_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 3));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(180, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) | ((NI32) 224)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 1)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(181, "unicode.nim");
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 2)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(182, "unicode.nim");
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA9_: ;
	{
		nimln_(184, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 2097151)))) goto LA12_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 4));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(186, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) | ((NI32) 240)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 1)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(187, "unicode.nim");
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 2)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(188, "unicode.nim");
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 3)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(189, "unicode.nim");
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA12_: ;
	{
		nimln_(191, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 67108863)))) goto LA15_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 5));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(193, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 24))) | ((NI32) 248)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 1)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(194, "unicode.nim");
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 2)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(195, "unicode.nim");
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 3)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(196, "unicode.nim");
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 4)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(197, "unicode.nim");
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA15_: ;
	{
		nimln_(199, "unicode.nim");
		if (!((NU32)(i) <= (NU32)(((NI32) 2147483647)))) goto LA18_;
		nimln_(214, "unicode.nim");
		result = setLengthStr(result, ((NI) 6));
		if ((NU)(((NI) 0)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(201, "unicode.nim");
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI)chckRange((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 30))) | ((NI32) 252)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 1)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(202, "unicode.nim");
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 24))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 2)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(203, "unicode.nim");
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 18))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 3)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(204, "unicode.nim");
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 12))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 4)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(205, "unicode.nim");
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)((NI32)((NU64)(i) >> (NU64)(((NI) 6))) & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
		if ((NU)(((NI) 5)) > (NU)(result->Sup.len)) raiseIndexError();
		nimln_(206, "unicode.nim");
		result->data[((NI) 5)] = ((NIM_CHAR) (((NI)chckRange((NI)(((NI) ((NI32)(i & ((NI32) 63)))) | ((NI) 128)), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA18_: ;
	{
	}
	LA1_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeInit000)(void) {
	nimfr_("unicode", "unicode.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_unicodeDatInit000)(void) {
NTI_sVg18TP9cLifHyygRe9cro9aA_.size = sizeof(NI32);
NTI_sVg18TP9cLifHyygRe9cro9aA_.kind = 34;
NTI_sVg18TP9cLifHyygRe9cro9aA_.base = 0;
NTI_sVg18TP9cLifHyygRe9cro9aA_.flags = 3;
}


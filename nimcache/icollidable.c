/* Generated by Nim Compiler v0.11.2 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, i386, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -IC:\Nim\lib -o c:\users\john\documents\nim\bomberman\nimcache\icollidable.o c:\users\john\documents\nim\bomberman\nimcache\icollidable.c */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>
typedef struct CollidablenormalHEX3Aobjecttype147021 CollidablenormalHEX3Aobjecttype147021;
typedef struct IcollidableHEX3Aobjecttype147018 IcollidableHEX3Aobjecttype147018;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Box140009 Box140009;
typedef struct NotcollidableHEX3Aobjecttype147023 NotcollidableHEX3Aobjecttype147023;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct Box140009 {
NI32 Field0;
NI32 Field1;
NI32 Field2;
NI32 Field3;
};
struct  IcollidableHEX3Aobjecttype147018  {
  TNimObject Sup;
Box140009 box;
};
struct  CollidablenormalHEX3Aobjecttype147021  {
  IcollidableHEX3Aobjecttype147018 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  NotcollidableHEX3Aobjecttype147023  {
  IcollidableHEX3Aobjecttype147018 Sup;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(CollidablenormalHEX3Aobjecttype147021*, newcollidablenormal_147028)(NI32 x, NI32 y, NI32 w, NI32 h);
N_NIMCALL(void, TMP344)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_20001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NotcollidableHEX3Aobjecttype147023*, newnotcollidable_147043)(NI32 x, NI32 y, NI32 w, NI32 h);
N_NIMCALL(void, TMP345)(void* p, NI op);
N_NIMCALL(void, collide_147058)(IcollidableHEX3Aobjecttype147018* impl);
N_NIMCALL(void, collide_147072)(NotcollidableHEX3Aobjecttype147023* impl);
N_NIMCALL(void, move_147083)(IcollidableHEX3Aobjecttype147018* impl, NI32 x, NI32 y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, moveto_147115)(IcollidableHEX3Aobjecttype147018* impl, NI32 x, NI32 y);
N_NIMCALL(void, TMP362)(void* p, NI op);
STRING_LITERAL(TMP346, "icollidable Should be overriden !", 33);
STRING_LITERAL(TMP347, "I\'m a ghost heh!", 16);
extern TNimType NTI3411; /* RootObj */
TNimType NTI147018; /* ICollidable:ObjectType */
extern TNimType NTI140009; /* Box */
TNimType NTI147021; /* CollidableNormal:ObjectType */
TNimType NTI147015; /* CollidableNormal */
extern TFrame* frameptr_17042;
TNimType NTI147023; /* NotCollidable:ObjectType */
TNimType NTI147017; /* NotCollidable */
TNimType NTI147013; /* ICollidable */
N_NIMCALL(void, TMP344)(void* p, NI op) {
	CollidablenormalHEX3Aobjecttype147021* a;
	a = (CollidablenormalHEX3Aobjecttype147021*)p;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_17042 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_17042).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_17042;
	frameptr_17042 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_20001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_17042 = (*frameptr_17042).prev;
}

N_NIMCALL(CollidablenormalHEX3Aobjecttype147021*, newcollidablenormal_147028)(NI32 x, NI32 y, NI32 w, NI32 h) {
	CollidablenormalHEX3Aobjecttype147021* result;
	CollidablenormalHEX3Aobjecttype147021* LOC1;
	nimfr("newCollidableNormal", "icollidable.nim")
	result = 0;
	nimln(14, "icollidable.nim");
	LOC1 = 0;
	LOC1 = (CollidablenormalHEX3Aobjecttype147021*) newObj((&NTI147015), sizeof(CollidablenormalHEX3Aobjecttype147021));
	(*LOC1).Sup.Sup.m_type = (&NTI147021);
	(*LOC1).Sup.box.Field0 = x;
	(*LOC1).Sup.box.Field1 = y;
	(*LOC1).Sup.box.Field2 = w;
	(*LOC1).Sup.box.Field3 = h;
	result = LOC1;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP345)(void* p, NI op) {
	NotcollidableHEX3Aobjecttype147023* a;
	a = (NotcollidableHEX3Aobjecttype147023*)p;
}

N_NIMCALL(NotcollidableHEX3Aobjecttype147023*, newnotcollidable_147043)(NI32 x, NI32 y, NI32 w, NI32 h) {
	NotcollidableHEX3Aobjecttype147023* result;
	NotcollidableHEX3Aobjecttype147023* LOC1;
	nimfr("newNotCollidable", "icollidable.nim")
	result = 0;
	nimln(17, "icollidable.nim");
	LOC1 = 0;
	LOC1 = (NotcollidableHEX3Aobjecttype147023*) newObj((&NTI147017), sizeof(NotcollidableHEX3Aobjecttype147023));
	(*LOC1).Sup.Sup.m_type = (&NTI147023);
	(*LOC1).Sup.box.Field0 = x;
	(*LOC1).Sup.box.Field1 = y;
	(*LOC1).Sup.box.Field2 = w;
	(*LOC1).Sup.box.Field3 = h;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(void, collide_147058)(IcollidableHEX3Aobjecttype147018* impl) {
	nimfr("collide", "icollidable.nim")
	nimln(20, "icollidable.nim");
	printf("%s\015\012", ((NimStringDesc*) &TMP346)? (((NimStringDesc*) &TMP346))->data:"nil");
	popFrame();
}

N_NIMCALL(void, collide_147072)(NotcollidableHEX3Aobjecttype147023* impl) {
	nimfr("collide", "icollidable.nim")
	nimln(71, "icollidable.nim");
	printf("%s\015\012", ((NimStringDesc*) &TMP347)? (((NimStringDesc*) &TMP347))->data:"nil");
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, move_147083)(IcollidableHEX3Aobjecttype147018* impl, NI32 x, NI32 y) {
	int TMP348;
	int TMP349;
	nimfr("move", "icollidable.nim")
	nimln(75, "icollidable.nim");
	TMP348 = addInt((*impl).box.Field0, x);
	(*impl).box.Field0 = (int)(TMP348);
	nimln(76, "icollidable.nim");
	TMP349 = addInt((*impl).box.Field1, y);
	(*impl).box.Field1 = (int)(TMP349);
	popFrame();
}

N_NIMCALL(void, moveto_147115)(IcollidableHEX3Aobjecttype147018* impl, NI32 x, NI32 y) {
	nimfr("moveTo", "icollidable.nim")
	nimln(79, "icollidable.nim");
	(*impl).box.Field0 = x;
	nimln(80, "icollidable.nim");
	(*impl).box.Field1 = y;
	popFrame();
}
N_NIMCALL(void, TMP362)(void* p, NI op) {
	IcollidableHEX3Aobjecttype147018* a;
	a = (IcollidableHEX3Aobjecttype147018*)p;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_icollidableInit)(void) {
	nimfr("icollidable", "icollidable.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_icollidableDatInit)(void) {
static TNimNode TMP342[3];
NTI147018.size = sizeof(IcollidableHEX3Aobjecttype147018);
NTI147018.kind = 17;
NTI147018.base = (&NTI3411);
NTI147018.flags = 1;
TMP342[0].kind = 1;
TMP342[0].offset = offsetof(IcollidableHEX3Aobjecttype147018, box);
TMP342[0].typ = (&NTI140009);
TMP342[0].name = "box";
NTI147018.node = &TMP342[0];
NTI147021.size = sizeof(CollidablenormalHEX3Aobjecttype147021);
NTI147021.kind = 17;
NTI147021.base = (&NTI147018);
NTI147021.flags = 1;
TMP342[1].len = 0; TMP342[1].kind = 2;
NTI147021.node = &TMP342[1];
NTI147015.size = sizeof(CollidablenormalHEX3Aobjecttype147021*);
NTI147015.kind = 22;
NTI147015.base = (&NTI147021);
NTI147015.marker = TMP344;
NTI147023.size = sizeof(NotcollidableHEX3Aobjecttype147023);
NTI147023.kind = 17;
NTI147023.base = (&NTI147018);
NTI147023.flags = 1;
TMP342[2].len = 0; TMP342[2].kind = 2;
NTI147023.node = &TMP342[2];
NTI147017.size = sizeof(NotcollidableHEX3Aobjecttype147023*);
NTI147017.kind = 22;
NTI147017.base = (&NTI147023);
NTI147017.marker = TMP345;
NTI147013.size = sizeof(IcollidableHEX3Aobjecttype147018*);
NTI147013.kind = 22;
NTI147013.base = (&NTI147018);
NTI147013.marker = TMP362;
}


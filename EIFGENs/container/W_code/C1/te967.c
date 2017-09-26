/*
 * Code for class TEST_CONTAINERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F967_7199(EIF_REFERENCE);
extern void EIF_Minit967(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TEST_CONTAINERS}.make */
void F967_7199 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 966, Current, 1, 0, 13456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(966, Current, 13456);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(969, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5050, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5012, dtype))(Current, ur1x);
	RTHOOK(2);
	tr1 = RTLN(eif_new_type(968, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5045, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5012, dtype))(Current, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4995, dtype))(Current);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4993, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
}

void EIF_Minit967 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

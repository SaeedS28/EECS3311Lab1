/*
 * Code for class TEST_ARRAYED_CONTAINER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F969_7227(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7228(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7229(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7230(EIF_REFERENCE);
extern EIF_TYPED_VALUE F969_7231(EIF_REFERENCE);
extern void EIF_Minit969(void);
extern EIF_REFERENCE _A969_78();
extern EIF_REFERENCE _A969_77();
extern EIF_REFERENCE _A969_79();

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

/* {TEST_ARRAYED_CONTAINER}.make */
void F969_7227 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 968, Current, 0, 0, 13484);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13484);
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,185,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,345,0xFF01,0xFFF9,0,185,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A969_77, (EIF_POINTER)(0),5046, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5021, dtype))(Current, ur1x);
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,185,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,345,0xFF01,0xFFF9,0,185,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A969_78, (EIF_POINTER)(0),5047, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5021, dtype))(Current, ur1x);
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,185,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,345,0xFF01,0xFFF9,0,185,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A969_79, (EIF_POINTER)(0),5048, 0, 0, 1, -1, tr1, 0);
	}
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5021, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {TEST_ARRAYED_CONTAINER}.test_count */
EIF_TYPED_VALUE F969_7228 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_count";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 968, Current, 1, 0, 13485);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(968, Current, 13485);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("T1: Test make procedure ",24,701896224);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5026, Dtype(Current)))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003BE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(958, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4940, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("Jim",3,4876653);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("Jemima",6,1981891425);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4946, "count", loc1))(loc1)).it_i4);
	Result = (EIF_BOOLEAN) (ti4_1 == ((EIF_INTEGER_32) 3L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
}

/* {TEST_ARRAYED_CONTAINER}.test_insert_last */
EIF_TYPED_VALUE F969_7229 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_insert_last";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 968, Current, 1, 0, 13486);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13486);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("T2: Test the insert last  procedure ",36,655420704);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5026, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003BE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(958, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4940, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4948, "get_at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(6);
	tr1 = RTMS_EX_H("Jim",3,4876653);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("Jim",3,4876653);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4948, "get_at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	tr1 = RTMS_EX_H("Jemima",6,1981891425);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(10);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("Jemima",6,1981891425);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4948, "get_at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(11);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {TEST_ARRAYED_CONTAINER}.test_insert_at */
EIF_TYPED_VALUE F969_7230 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_insert_at";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 968, Current, 1, 0, 13487);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13487);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("T3: Test the insert at procedure ",33,415344416);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5026, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003BE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(958, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4940, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("Joe",3,4878181);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = RTMS_EX_H("BigLips",7,348418675);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4942, "insert_at", loc1))(loc1, ui4_1x, ur1x);
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("BigLips",7,348418675);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4948, "get_at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

/* {TEST_ARRAYED_CONTAINER}.test_delete_at */
EIF_TYPED_VALUE F969_7231 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_delete_at";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 968, Current, 1, 0, 13488);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(968, Current, 13488);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("T4: Test the delete at procedure ",33,1205200160);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5026, dtype))(Current, ur1x);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF80003BE, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(958, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4940, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("JohnCena",8,1386741857);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("Jimozine",8,1447169893);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("Jimbo",5,1769344623);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4944, "insert_last", loc1))(loc1, ur1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4943, "delete_at", loc1))(loc1, ui4_1x);
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tr1 = RTMS_EX_H("Jimbo",5,1769344623);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4948, "get_at", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT(NULL, EX_CHECK);
		if (Result) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
}

void EIF_Minit969 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

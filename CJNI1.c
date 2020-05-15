//CJNI1.c
#include "jni.h"
#include "stdio.h"


JNIEXPORT void JNICALL Java_JNI1_calcArea(JNIEnv *env, jobject obj, jint a, jint b, jint c, jint d, jint e, jint f){

	int area;
	printf("=====================================================================================\n");
	if( a <100  && a >-100  && b <100  && b >-100  && c <100  && c >-100  && d <100  && d >-100  && e <100  && e >-100  && f <100 && f >-100){
		
	area = (a*(e-f)+b*(f-d)+c*(d-e))/2;
	if(area < 0){
	area = -area;
	}
	printf("The Area of Triangle is: %d",area);
	}else{
		printf("Some input is invalid, please input number less than 100 and more than -100");
	}

}


JNIEXPORT void JNICALL Java_JNI1_calcCentroid(JNIEnv *env, jobject obj, jint a, jint b, jint c, jint d, jint e, jint f){
	
	int cen1, cen2;

	printf("=====================================================================================\n");
	

	if(a <100  && a >-100  && b <100  && b >-100  && c <100  && c >-100  && d <100  && d >-100  && e <100  && e >-100  && f <100 && f >-100){
	
	cen1 = (a+b+c)/3;
	if(cen1 < 0){
	cen1 = -cen1;
	}

	cen2 = (d+e+f)/3;
	if(cen2 < 0){
	cen2 = -cen2;
	}
	printf("The Centroid of Triangle is: (%d,%d)", cen1, cen2);

	}else{
		printf("Some input is invalid, please input number less than 100 and more than -100");
	}

}
//CQues2.c
#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

JNIEXPORT jintArray JNICALL Java_Ques2_randomArr1(JNIEnv *env, jobject obj, jint size1){
   time_t t1;
   srand((unsigned) time(&t1));
   jintArray result1 = (*env)->NewIntArray(env, size1);
   if(result1 == NULL){
	return NULL;
	}

     jint fill1[size1];

      printf("1st array: ");
     for(int i=0; i<size1; i++){
	fill1[i] = rand() % 100 +1;
      
       
	printf("%ld ", fill1[i]);
      }
	(*env)->SetIntArrayRegion(env,result1,0,size1,fill1);
	return result1;
}



JNIEXPORT jintArray JNICALL Java_Ques2_randomArr2(JNIEnv *env, jobject obj, jint size2){

   time_t t2;
   srand((unsigned) time(&t2));
   jintArray result2 = (*env)->NewIntArray(env, size2);
   if(result2 == NULL){
	return NULL;
	}

   jint fill2[size2];

   printf("2nd array: ");
   for(int j=0; j<size2; j++){
	fill2[j] = rand() % 100 +1;
      
        
	printf("%ld ", fill2[j]);
       }
	(*env)->SetIntArrayRegion(env,result2,0,size2,fill2);
	return result2;
}




JNIEXPORT jint JNICALL Java_Ques2_calcSum(JNIEnv *env, jobject obj, jintArray arr1, jintArray arr2){

   jint *inArr1 = (*env)->GetIntArrayElements(env,arr1,NULL);
   jint *inArr2 = (*env)->GetIntArrayElements(env,arr2,NULL);
   jsize size;
   jsize size1 = (*env)->GetArrayLength(env,arr1);
   jsize size2 = (*env)->GetArrayLength(env,arr2);
   if(inArr1 == NULL || inArr2 == NULL){
	return 0;
     }


  if(size1 < size2){
	size = (*env)->GetArrayLength(env,arr1);
 }else{
	size = (*env)->GetArrayLength(env,arr2);
     }
     

  jint sum[size];

   int i =0;
   printf("\n=========================================================================");
   for(i=0; i<size;i++){
	sum[size]= inArr1[i] + inArr2[i];
	printf("\nSum of %ld (1st array) and %ld (2nd array): %ld ",inArr1[i],inArr2[i],sum[size]);
       }
   sum[size]= inArr1[0]*inArr2[0];
   return sum[size];
}

//
// Created by Hannah on 2017-07-05.
//
#include <jni.h>

extern "C"
jint Java_com_example_hannah_ndktest_pibonacci_pibonacci(JNIEnv *env, jobject callingObj, jint input){
    if(input<=1) return input;
    return Java_com_example_hannah_ndktest_pibonacci_pibonacci(env, callingObj, input-1)
            + Java_com_example_hannah_ndktest_pibonacci_pibonacci(env, callingObj, input-2);

}
/*
int pib(int input){
    if(input<=1) return input;

    return pib(input-1) + pib(input-2);
}

extern "C"
jint Java_com_example_hannah_ndktest_pibonacci_pibonacci(JNIEnv *env, jobject callingObj, jint input){
    jint returnVal = pib(input);

    return returnVal;
}
 */
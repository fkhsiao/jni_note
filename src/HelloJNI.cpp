#include "HelloJNI.h"
#include <string.h>


/*
 * Class:     HelloJNI
 * Method:    bolEchoDouble
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_HelloJNI_bolEchoDouble
  (JNIEnv *env, jclass c, jboolean bol){

  return bol + bol;
  }

/*
 * Class:     HelloJNI
 * Method:    intEchoDouble
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_HelloJNI_intEchoDouble
  (JNIEnv *env, jclass c, jint n){

  return n*2;
  }

/*
 * Class:     HelloJNI
 * Method:    strEchoDouble
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_HelloJNI_strEchoDouble
  (JNIEnv *env, jclass c, jstring string){
    const char* str = env->GetStringUTFChars(string, 0);
    char cap[128];
    strcpy(cap, str);
    strcat(cap, str);
    env->ReleaseStringUTFChars(string, str);

    return env->NewStringUTF(cap);
  }
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_androidex_devices_aexddPrinter */

#ifndef _Included_com_androidex_devices_aexddPrinter
#define _Included_com_androidex_devices_aexddPrinter
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL aexddPrinter_JNI_OnLoad(JavaVM* vm, void* reserved);
JNIEXPORT void JNICALL aexddPrinter_JNI_OnUnload(JavaVM* vm, void* reserved);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_close
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    newline
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_newline
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_fontsize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1fontsize
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_linewide
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1linewide
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    initialize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_initialize
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_charDSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1charDSize
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_charNSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1charNSize
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_graph
 * Signature: (CCCLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1graph
  (JNIEnv *, jobject, jchar, jchar, jchar, jstring);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_barcodeHigh
 * Signature: (C)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1barcodeHigh
  (JNIEnv *, jobject, jchar);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_barcodeWide
 * Signature: (C)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1barcodeWide
  (JNIEnv *, jobject, jchar);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    out_barcode
 * Signature: (CCCLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_out_1barcode
  (JNIEnv *, jobject, jchar, jchar, jchar, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    out_en
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_out_1en
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    cmdline
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_cmdline
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    out_2Dimensional
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_out_12Dimensional
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    cut
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_cut
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    stepline
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_stepline
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    out_ch
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_out_1ch
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_charwide
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1charwide
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    getstatus
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_getstatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    getfactory
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_getfactory
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    set_align
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_set_1align
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    test
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_test
  (JNIEnv *, jobject);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    WHE25_getstatus
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_WHE25_1getstatus
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    SGT801_out_2Dimensional
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_SGT801_1out_12Dimensional
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    T_500AP_out_barcode
 * Signature: (CCCLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_T_1500AP_1out_1barcode
  (JNIEnv *, jobject, jchar, jchar, jchar, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    T_500AP_out_2Dimensional
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_T_1500AP_1out_12Dimensional
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    RG_CB532_out_barcode
 * Signature: (CCCLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_RG_1CB532_1out_1barcode
  (JNIEnv *, jobject, jchar, jchar, jchar, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    RG_CB532_out_2Dimensional
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_RG_1CB532_1out_12Dimensional
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    TA_500_out_2Dimensional
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_TA_1500_1out_12Dimensional
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    TA_500_cut
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_TA_1500_1cut
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    out_bitmap
 * Signature: ([BIIIII)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_out_1bitmap
  (JNIEnv *, jobject, jbyteArray, jint, jint, jint, jint, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    serial_read
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_androidex_devices_aexddPrinter_serial_1read
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    serial_write
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_serial_1write
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_androidex_devices_aexddPrinter
 * Method:    serial_select
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddPrinter_serial_1select
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

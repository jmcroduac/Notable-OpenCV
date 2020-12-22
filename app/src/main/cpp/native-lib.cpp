#include <jni.h>
#include <android/log.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#define TAG "NativeLib"

using namespace std;
using namespace cv;

extern "C" {
void JNICALL Java_com_example_opencvtest_MainActivity_otsuThresholdFromJNI
(JNIEnv *env, jobject instance, jlong matAddr) {
        // get Mat from raw address
        Mat &mat = *(Mat *) matAddr;
        cv::threshold(mat, mat, 0, 255, THRESH_OTSU);

    }
}
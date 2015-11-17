#ifndef CVConverters_h
#define CVConverters_h

#import <UIKit/UIKit.h>

/*
 * Since we have C (ffmpeg) and C++ (opencv) dependencies
 * we need to include the C dependencies within an extern block
 */
#import <opencv2/core/core.hpp>

extern "C" {
#import <libavcodec/avcodec.h>
}

@interface CVConverters : NSObject

+ (cv::Mat) cvMatFromAVFrame: (AVFrame *) frame;
+ (cv::Mat) cvMatFromUIImage: (UIImage *) image;
+ (UIImage *) UIImageFromCVMat: (cv::Mat) cvMat;

@end

#endif

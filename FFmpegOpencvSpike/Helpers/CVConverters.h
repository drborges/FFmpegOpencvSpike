#ifndef CVConverters_h
#define CVConverters_h

#import <UIKit/UIKit.h>
#import <opencv2/core/core.hpp>

@interface CVConverters : NSObject

+ (cv::Mat) cvMatFromUIImage: (UIImage *) image;
+ (UIImage *) UIImageFromCVMat: (cv::Mat) cvMat;

@end

#endif

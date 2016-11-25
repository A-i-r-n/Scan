//
//  CIImage+AirExtension.h
//  Scan
//
//  Created by daiqile on 2016/11/25.
//  Copyright © 2016年 com.daiqile.daiqile. All rights reserved.
//

#import <CoreImage/CoreImage.h>
#import <UIKit/UIKit.h>
@interface CIImage (AirExtension)

/** 将CIImage转换成UIImage */
- (UIImage *)SG_createNonInterpolatedWithSize:(CGFloat)size;
@end

//
//  AirScanningCodeView.h
//  Scan
//
//  Created by daiqile on 2016/11/25.
//  Copyright © 2016年 com.daiqile.daiqile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AirScanningCodeView : UIView

- (instancetype)initWithFrame:(CGRect)frame outsideViewLayer:(CALayer *)outsideViewLayer;

+ (instancetype)scanningQRCodeViewWithFrame:(CGRect )frame outsideViewLayer:(CALayer *)outsideViewLayer;

/** 移除定时器(切记：一定要在Controller视图消失的时候，停止定时器) */
- (void)removeTimer;
@end

//
//  AirAlertView.h
//  Scan
//
//  Created by daiqile on 2016/11/25.
//  Copyright © 2016年 com.daiqile.daiqile. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AirAlertView;

typedef enum : NSUInteger {
    AirAlertViewBottomViewTypeOne,
    AirAlertViewBottomViewTypeTwo,
} AirAlertViewBottomViewType;

@protocol AirAlertViewDelegate <NSObject>

@optional
/** right 按钮的点击事件(AirAlertViewBottomViewTypeOne 类型的确定按钮；AirAlertViewBottomViewTypeTwo 类型是right) */
- (void)didSelectedRightButtonClick;
/** left 按钮的点击事件(点击事件针对 AirAlertViewBottomViewTypeTwo 类型起作用) */
- (void)didSelectedLeftButtonClick;

@end
@interface AirAlertView : UIView

@property (nonatomic, weak) id<AirAlertViewDelegate> delegate_SG;

/** 确定(Right)按钮标题(AirAlertViewBottomViewTypeTwo 默认为Right按钮) */
@property (nonatomic, copy) NSString *sure_btnTitle;
/** left 按钮标题 */
@property (nonatomic, copy) NSString *left_btnTitle;
/** 确定(Right)按钮标题颜色(AirAlertViewBottomViewTypeTwo 默认为Right按钮)*/
@property (nonatomic, strong) UIColor *sure_btnTitleColor;
/** left 按钮标题颜色(AirAlertViewBottomViewTypeTwo 样式的Left按钮)*/
@property (nonatomic, strong) UIColor *left_btnTitleColor;
/** 底部按钮样式 */
@property (nonatomic, assign) AirAlertViewBottomViewType alertViewBottomViewType;

/** 对象方法创建 SGAlertView */
- (instancetype)initWithTitle:(NSString *)title delegate:(id<AirAlertViewDelegate>)delegate contentTitle:(NSString *)contentTitle alertViewBottomViewType:(AirAlertViewBottomViewType)alertViewBottomViewType;

/** 类方法创建 SGAlertView */
+ (instancetype)alertViewWithTitle:(NSString *)title delegate:(id<AirAlertViewDelegate>)delegate contentTitle:(NSString *)contentTitle alertViewBottomViewType:(AirAlertViewBottomViewType)alertViewBottomViewType;

- (void)show;



@end

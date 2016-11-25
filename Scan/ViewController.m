//
//  ViewController.m
//  Scan
//
//  Created by daiqile on 2016/11/25.
//  Copyright © 2016年 com.daiqile.daiqile. All rights reserved.
//

#import "ViewController.h"
#import "AirGenerateCodeViewController.h"
#import "AirScanningCodeViewController.h"
#import <AVFoundation/AVFoundation.h>
#import "AirAlertView.h"

@interface ViewController ()
- (IBAction)createCode:(id)sender;
- (IBAction)scanning:(id)sender;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIButton *gBtn = [[UIButton alloc]initWithFrame:CGRectMake(100, 100, 80, 40)];
    gBtn.backgroundColor = [UIColor blueColor];
    [gBtn addTarget:self action:@selector(createCode:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:gBtn];
    
    UIButton *sBtn = [[UIButton alloc]initWithFrame:CGRectMake(100, 200, 80, 40)];
    sBtn.backgroundColor = [UIColor blueColor];
    [sBtn addTarget:self action:@selector(scanning:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:sBtn];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

//生成二维码
- (void)createCode:(id)sender
{
    AirGenerateCodeViewController *generate = [[AirGenerateCodeViewController alloc]init];
    [self.navigationController pushViewController:generate animated:YES];
}

//扫描二维码
- (void)scanning:(id)sender
{
    // 1、 获取摄像设备
    AVCaptureDevice *device = [AVCaptureDevice defaultDeviceWithMediaType:AVMediaTypeVideo];
    if (device) {
        AirScanningCodeViewController *VC = [[AirScanningCodeViewController alloc] init];
        [self.navigationController pushViewController:VC animated:YES];
        
    } else {
        
        AirAlertView *alertView = [AirAlertView alertViewWithTitle:@"⚠️ 警告" delegate:nil contentTitle:@"未检测到您的摄像头, 请在真机上测试" alertViewBottomViewType:(AirAlertViewBottomViewTypeOne)];
        [alertView show];
        
        //        // 1、初始化UIAlertController
        //        UIAlertController *aC = [UIAlertController alertControllerWithTitle:@"⚠️ 警告" message:@"未检测到您的摄像头, 请在真机上测试" preferredStyle:UIAlertControllerStyleAlert];
        //
        //        // 2.设置UIAlertAction样式
        //        UIAlertAction *sureAc = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        //
        //        }];
        //
        //        [aC addAction:sureAc];
        //        // 3.显示alertController:presentViewController
        //        [self presentViewController:aC animated:YES completion:nil];
    }

}
@end

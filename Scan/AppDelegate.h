//
//  AppDelegate.h
//  Scan
//
//  Created by daiqile on 2016/11/25.
//  Copyright © 2016年 com.daiqile.daiqile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


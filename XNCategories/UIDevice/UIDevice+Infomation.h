//
//  UIDevice+Infomation.h
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/10.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (Infomation)
+ (NSString *)xn_platform;
+ (NSString *)xn_platformString;


+ (NSString *)xn_macAddress;

//Return the current device CPU frequency
+ (NSUInteger)xn_cpuFrequency;
// Return the current device BUS frequency
+ (NSUInteger)xn_busFrequency;
//current device RAM size
+ (NSUInteger)xn_ramSize;
//Return the current device CPU number
+ (NSUInteger)xn_cpuNumber;
//Return the current device total memory

/// 获取iOS系统的版本号
+ (NSString *)xn_systemVersion;
/// 判断当前系统是否有摄像头
+ (BOOL)xn_hasCamera;
/// 获取手机内存总量, 返回的是字节数
+ (NSUInteger)xn_totalMemoryBytes;
/// 获取手机可用内存, 返回的是字节数
+ (NSUInteger)xn_freeMemoryBytes;

/// 获取手机硬盘空闲空间, 返回的是字节数
+ (long long)xn_freeDiskSpaceBytes;
/// 获取手机硬盘总空间, 返回的是字节数
+ (long long)xn_totalDiskSpaceBytes;



@end

NS_ASSUME_NONNULL_END

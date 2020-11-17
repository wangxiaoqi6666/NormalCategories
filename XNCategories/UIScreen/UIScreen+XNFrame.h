//
//  UIScreen+XNFrame.h
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/10.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIScreen (XNFrame)
+ (CGSize)size;
+ (CGFloat)width;
+ (CGFloat)height;

+ (CGSize)orientationSize;
+ (CGFloat)orientationWidth;
+ (CGFloat)orientationHeight;
+ (CGSize)DPISize;

@end

NS_ASSUME_NONNULL_END

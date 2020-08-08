//
//  UIColor+Gradient.h
//  XNCategories
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (XNGradient)


/// 渐变颜色
/// @param c1  开始颜色
/// @param c2  结束颜色
/// @param height   渐变高度
+ (UIColor *)gradientFromColor:(UIColor *)c1 toColor:(UIColor *)c2 withHeight:(int)height;


@end

NS_ASSUME_NONNULL_END

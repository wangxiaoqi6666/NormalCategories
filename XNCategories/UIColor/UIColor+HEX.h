//
//  UIColor+HEX.h
//  XNCategories
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (HEX)

+ (UIColor *)colorWithHex:(UInt32)hex;
+ (UIColor *)colorWithHex:(UInt32)hex andAlpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert withAlpha:(CGFloat)alpha;

///值不需要除以255.0
+ (UIColor *)colorWithWholeRed:(CGFloat)red
                         green:(CGFloat)green
                          blue:(CGFloat)blue
                         alpha:(CGFloat)alpha;
///值不需要除以255.0
+ (UIColor *)colorWithWholeRed:(CGFloat)red
                         green:(CGFloat)green
                          blue:(CGFloat)blue;

@end

NS_ASSUME_NONNULL_END

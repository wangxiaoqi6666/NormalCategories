//
//  UIView+Border.h
//  XNCategories
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSUInteger, ExcludePoint) {
    ExcludeStartPoint = 1 << 0,
    ExcludeEndPoint = 1 << 1,
    ExcludeAllPoint = ~0UL
};

NS_ASSUME_NONNULL_BEGIN

@interface UIView (XNBorder)
- (void)setCornerRadius:(CGFloat)radius;
- (void)setCornerRadius:(CGFloat)radius position:(UIRectCorner)position;

- (void)addTopBorder:(UIColor *)color;
- (void)addLeftBorder:(UIColor *)color;
- (void)addBottomBorder:(UIColor *)color;
- (void)addRightBorder:(UIColor *)color;

- (void)addTopBorderWithColor:(UIColor *)color width:(CGFloat) borderWidth;
- (void)addLeftBorderWithColor: (UIColor *) color width:(CGFloat) borderWidth;
- (void)addBottomBorderWithColor:(UIColor *)color width:(CGFloat) borderWidth;
- (void)addRightBorderWithColor:(UIColor *)color width:(CGFloat) borderWidth;

- (void)removeTopBorder;
- (void)removeLeftBorder;
- (void)removeBottomBorder;
- (void)removeRightBorder;

@end

NS_ASSUME_NONNULL_END

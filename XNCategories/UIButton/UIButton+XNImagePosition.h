//
//  UIButton+ImagePosition.h
//  XNCategories
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, XNImagePosition) {
    XNImagePositionLeft = 0,              //图片在左，文字在右，默认
    XNImagePositionRight = 1,             //图片在右，文字在左
    XNImagePositionTop = 2,               //图片在上，文字在下
    XNImagePositionBottom = 3,            //图片在下，文字在上
};


@interface UIButton (XNImagePosition)

/**
 *  利用UIButton的titleEdgeInsets和imageEdgeInsets来实现文字和图片的自由排列
 *  注意：这个方法需要在设置图片和文字之后才可以调用，且button的大小要大于 图片大小+文字大小+spacing
 *
 *  @param spacing 图片和文字的间隔
 */
- (void)setImagePosition:(XNImagePosition)postion spacing:(CGFloat)spacing;


@end

NS_ASSUME_NONNULL_END

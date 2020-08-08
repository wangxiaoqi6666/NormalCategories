//
//  UIImage+Color.h
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Color)


/**
*  @brief  根据颜色生成纯色图片
*
*  @param color  颜色
*
*  @return 颜色
*/
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 *  @brief  取图片某一点的颜色
 *
 *  @param point 某一点
 *
 *  @return 颜色
 */
- (UIColor *)colorAtPoint:(CGPoint )point;


/**
 *  @brief  取某一像素的颜色
 *
 *  @param point 一像素
 *
 *  @return 颜色
 */
- (UIColor *)colorAtPixel:(CGPoint)point;


@end

NS_ASSUME_NONNULL_END

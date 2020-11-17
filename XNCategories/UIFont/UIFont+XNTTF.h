//
//  UIFont+XNTTF.h
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/10.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (XNTTF)

// 本地获取ttf文件
+ (UIFont *)fontWithTTFAtPath:(NSString *)path size:(CGFloat)size;

+ (UIFont *)fontWithTTFAtURL:(NSURL *)URL size:(CGFloat)size;



@end

NS_ASSUME_NONNULL_END

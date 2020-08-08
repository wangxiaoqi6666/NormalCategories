//
//  UIView+Frame.h
//  BookStore
//
//  Created by 龙格 on 2019/7/13.
//  Copyright © 2019 Paul Gao. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (XNFrame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGPoint origin;

@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;

@property (nonatomic, assign) CGFloat right;
@property (nonatomic, assign) CGFloat bottom;


- (CGRect)elargeHitEdge:(UIEdgeInsets)insets;


@end

NS_ASSUME_NONNULL_END

//
//  UIButtonDemoViewController.m
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import "UIButtonDemoViewController.h"

@interface UIButtonDemoViewController ()
@property (nonatomic, strong) UIButton *button;

@end

@implementation UIButtonDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    // UIColor+Gradient
//    UIColor *color = [UIColor gradientFromColor:[UIColor redColor] toColor:[UIColor orangeColor] withHeight:100];
//    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 200, 200, 100)];
//    view.backgroundColor = color;
//    [self.view addSubview:view];

    // UIButton
//    [self.button xn_setBackgroundColor:GlobalThemeColor forState:UIControlStateNormal];
//    [self.button xn_setBackgroundColor:GlobalThemePressedColor forState:UIControlStateHighlighted];
//    [self.button setImagePosition:XNImagePositionTop spacing:10];
    
    // UIImage+Color
//    [self.button setBackgroundImage:[UIImage imageWithColor:[UIColor orangeColor]] forState:UIControlStateNormal];
    
     
    UIImageView *imageV = [[UIImageView alloc] initWithFrame:CGRectMake(0, 100, 200, 50)];
    imageV.image = [UIImage resizableHalfImage:@"bubble copy"];
    [self.view addSubview:imageV];
}

- (UIButton *)button {
    if (!_button) {
        _button = [[UIButton alloc] initWithFrame:CGRectMake(10, 100, 100, 100)];
        [_button setTitle:@"button" forState:UIControlStateNormal];
        [_button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        [_button setImage:[UIImage imageNamed:@"ic_call_gray@3x"] forState:UIControlStateNormal];
        [self.view addSubview:_button];
    }return _button;
}

@end

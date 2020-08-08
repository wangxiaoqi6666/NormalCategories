//
//  AppDelegate.m
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"

@interface AppDelegate ()
@property (strong, nonatomic) ViewController *rootViewController;
@property (strong, nonatomic) UINavigationController *navgationController;
@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    self.rootViewController = [[ViewController alloc] init];
    self.navgationController = [[UINavigationController alloc] initWithRootViewController:self.rootViewController];
    self.window.rootViewController = self.navgationController;
    [self.window makeKeyAndVisible];
    
    return YES;
}



@end

//
//  ViewController.m
//  XNCategories-Demo
//
//  Created by xnhl_iosQ on 2020/8/8.
//  Copyright © 2020 xnhl_iosQ. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSDictionary *items;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self addDatas];
    [self addSubViews];
}

- (void)addSubViews {
    self.title = @"Demo";
    self.view.backgroundColor = [UIColor whiteColor];
    
    [self.view addSubview:self.tableView];
}


#pragma mark -- TableViewDelegate & DataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return [[_items allKeys] count];
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    return [_items allKeys][section];

}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [[_items objectForKey:[_items allKeys][section]] count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Cell" forIndexPath:indexPath];
    
    cell.textLabel.text =  [_items objectForKey:[_items allKeys][indexPath.section]][indexPath.row];
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    NSString *name =  [_items objectForKey:[_items allKeys][indexPath.section]][indexPath.row];
    NSString *className = [name stringByAppendingString:@"DemoViewController"];
    Class class = NSClassFromString(className);
    UIViewController *controller = [[class alloc] init];
    controller.title = name;
    [self.navigationController pushViewController:controller animated:YES];
}


#pragma mark -- Lazy Method

- (UITableView *)tableView {
    if (!_tableView) {
        _tableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT) style:UITableViewStyleGrouped];
        _tableView.delegate = self;
        _tableView.dataSource = self;
        _tableView.bounces = NO;
        _tableView.backgroundColor = [UIColor whiteColor];
        [_tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"Cell"];
    }
    return _tableView;
}

- (void)addDatas {
    _items = @{
            @"UIKit":@[
                        @"UIView",
                        @"UIButton",
                        @"UIColor",
                       ],
               };
    
}

@end

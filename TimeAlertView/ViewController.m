//
//  ViewController.m
//  TimeAlertView
//
//  Created by 纵昂 on 2019/5/11.
//  Copyright © 2019 GitHub:https://github.com/ZongAng123. All rights reserved.
//

#import "ViewController.h"
#import "TimeAlertView.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    UIButton * btn =[[UIButton alloc]initWithFrame:CGRectMake(90, 100, 200, 50)];
    btn.backgroundColor=[UIColor redColor];
    [btn setTitle:@"弹窗" forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(popView:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
}
// 
-(void)popView:(id)sender{
    TimeAlertView *cjxView = [[TimeAlertView alloc]initWithTitle:@"提示" messages:@"支付正在处理"cancelButtonTitle:@"取消"];
    [cjxView show];
    
}
@end

//
//  ViewController.m
//  Force Touch Demo
//
//  Created by Henrique Galo on 5/1/15.
//  Copyright (c) 2015 Henrique Galo. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    HGForceTouchRecognizer *recognizer = [[HGForceTouchRecognizer alloc] initWithTarget:self action:nil];
    [recognizer setForceTouchDelegate:self];
    [self.view addGestureRecognizer:recognizer];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidForceTouched:(HGForceTouchRecognizer*)forceTouchView {
    
    for (UIView *views in self.view.subviews) {
        [views removeFromSuperview];
    }
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 44)];
    [label setText:@"FORCE TOUCHED!"];
    [label setTextAlignment:NSTextAlignmentCenter];
    [label setCenter:CGPointMake(self.view.frame.size.width/2, self.view.frame.size.height/2)];
    [self.view addSubview:label];
    [self performSelector:@selector(removeFrom) withObject:nil afterDelay:1];
}

- (void)removeFrom {
    for (UIView *views in self.view.subviews) {
        [views removeFromSuperview];
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

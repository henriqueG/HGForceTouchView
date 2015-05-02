//
//  HGForceTouchRecognizer.h
//  Force Touch Demo
//
//  Created by Henrique Galo on 5/1/15.
//  Copyright (c) 2015 Henrique Galo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>
#import <UIKit/UIGestureRecognizerSubclass.h>

@class HGForceTouchRecognizer;

@protocol HGForceTouchRecognizerDelegate <NSObject>
- (void)viewDidForceTouched:(HGForceTouchRecognizer*)recognizer;
@end

@interface HGForceTouchRecognizer : UIGestureRecognizer
{
    BOOL countPressing;
    NSTimer *mainTimer;
}

@property (strong, nonatomic) CMMotionManager *motionManager;

//@property (nonatomic, retain) UIView *containerView;

@property(nonatomic, assign) id<HGForceTouchRecognizerDelegate> forceTouchDelegate;

@property CGFloat lastX, lastY, lastZ, timePressing;

@end

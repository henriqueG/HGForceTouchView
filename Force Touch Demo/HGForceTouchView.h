//
//  ForceTouchSurface.h
//  Force Touch Demo
//
//  Created by Henrique Galo on 5/1/15.
//  Copyright (c) 2015 Henrique Galo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>

@class HGForceTouchView;

@protocol HGForceTouchViewDelegate <NSObject>
- (void)viewDidForceTouched:(HGForceTouchView*)forceTouchView;
@end

@interface HGForceTouchView : UIScrollView <UIGestureRecognizerDelegate>
{
    BOOL countPressing;
    NSTimer *mainTimer;
}

@property (strong, nonatomic) CMMotionManager *motionManager;

//@property (nonatomic, retain) UIView *containerView;

@property(nonatomic, assign) id<HGForceTouchViewDelegate> forceTouchDelegate;

@property CGFloat lastX, lastY, lastZ, timePressing;

@end



//
//  GTAppDelegate.h
//  GitTest
//
//  Created by Dave Henson on 12/8/11.
//  Copyright (c) 2011 Certified Networks, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GTViewController;

@interface GTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) GTViewController *viewController;

@end

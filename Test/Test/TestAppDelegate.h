//
//  TestAppDelegate.h
//  Test
//
//  Created by AetherWorks LLC on 10/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestViewController;

@interface TestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestViewController *viewController;

@end

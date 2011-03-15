//
//  Hospitals_of_KazakhstanAppDelegate.h
//  Hospitals of Kazakhstan
//
//  Created by dnakupov on 15.03.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Hospitals_of_KazakhstanViewController;

@interface Hospitals_of_KazakhstanAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Hospitals_of_KazakhstanViewController *viewController;

@end

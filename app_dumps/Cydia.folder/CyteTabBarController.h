/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITabBarController.h>
#import "Cydia-Structs.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface CyteTabBarController : UITabBarController {
	UIViewController* transient_;
	MenesObjectHandle<UIViewController, 0> remembered_;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(unsigned)supportedInterfaceOrientations;
-(void)unloadData;
-(id)unselectedViewController;
-(void)setUnselectedViewController:(id)controller;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(void)didReceiveMemoryWarning;
@end

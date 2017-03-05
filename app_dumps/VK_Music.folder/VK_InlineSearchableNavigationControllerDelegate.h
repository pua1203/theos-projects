/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_NavigationControllerDelegate.h"

@class VK_InlineSearchAnimationManager;

__attribute__((visibility("hidden")))
@interface VK_InlineSearchableNavigationControllerDelegate : VK_NavigationControllerDelegate {
	VK_InlineSearchAnimationManager* _inlineSearchAnimationManager;
}
@property(assign, nonatomic) __weak VK_InlineSearchAnimationManager* inlineSearchAnimationManager;
-(void).cxx_destruct;
-(id)navigationController:(id)controller animationControllerForOperation:(int)operation fromViewController:(id)viewController toViewController:(id)viewController4;
-(void)configureWithAnimationManager:(id)animationManager;
-(id)initWithAnimationManager:(id)animationManager;
@end

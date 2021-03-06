/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIViewControllerTransitioningDelegate.h"

@class StoryFromFullscreenDismissTransitionAnimationController, NSString, UIPanGestureRecognizer, UIViewController;
@protocol PanGestureDrivenDismissableTransitionViewController;

__attribute__((visibility("hidden")))
@interface StoryFullscreenTransitionManager : XXUnknownSuperclass <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
	UIViewController<PanGestureDrivenDismissableTransitionViewController>* _panGestureDismissableViewController;
	UIPanGestureRecognizer* _dismissTransitionPanGestureRecognizer;
	StoryFromFullscreenDismissTransitionAnimationController* _dismissTransitionAnimationController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) StoryFromFullscreenDismissTransitionAnimationController* dismissTransitionAnimationController;
@property(retain, nonatomic) UIPanGestureRecognizer* dismissTransitionPanGestureRecognizer;
@property(assign, nonatomic) __weak UIViewController<PanGestureDrivenDismissableTransitionViewController>* panGestureDismissableViewController;
-(void).cxx_destruct;
-(void)cleanUpDismissTransitionPanGestureRecognizer;
-(void)cleanUpAfterInteractiveDismissTransitionCompletedFinished:(BOOL)finished;
-(void)finishInteractiveDismissTransition;
-(void)cancelInteractiveDismissTransition;
-(void)beginInteractiveDismissTransition;
-(float)dismissInteractiveTransitionProgressFromPanGestureRecognizer:(id)panGestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)handleDismissTransitionPanGesture:(id)gesture;
-(void)setupInteractiveDismissTransitionForStoryFullscreenViewController:(id)storyFullscreenViewController;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)interactionControllerForDismissal:(id)dismissal;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
-(id)init;
@end


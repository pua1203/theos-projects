/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "VKClient-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AutopagingScrollViewDelegate : XXUnknownSuperclass <UIScrollViewDelegate> {
	id<UIScrollViewDelegate> _underlyingDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) id<UIScrollViewDelegate> underlyingDelegate;
-(void).cxx_destruct;
-(void)resumeAutopagingIfEnabledWithScrollView:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(id)initWithUnderlyingDelegate:(id)underlyingDelegate;
@end

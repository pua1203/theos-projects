/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Action.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UserActionRouteLink : Action {
	NSString* _linkTitle;
}
@property(retain, nonatomic) NSString* linkTitle;
@property(retain, nonatomic) NSString* target;
-(void)runInContext:(id)context;
-(id)title;
-(id)withLinkTitle:(id)linkTitle;
-(void)dealloc;
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation;

@interface BKInvocationGrabber : XXUnknownSuperclass {
	id _target;
	NSInvocation* _invocation;
}
@property(retain, nonatomic) NSInvocation* invocation;
@property(retain, nonatomic) id target;
+(id)grabberWithTarget:(id)target;
-(void).cxx_destruct;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
@end

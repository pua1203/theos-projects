/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TapableComponentHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TapableComponentRouteHandler : XXUnknownSuperclass <TapableComponentHandler> {
	id _routeObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) id routeObject;
+(id)route:(id)route;
-(void).cxx_destruct;
-(void)handleTapWithContext:(id)context;
-(id)initWithRouteObject:(id)routeObject;
@end


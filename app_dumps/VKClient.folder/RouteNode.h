/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface RouteNode : XXUnknownSuperclass {
	NSArray* _subnodes;
	id _blockResult;
	id _blockMatch;
}
@property(copy, nonatomic) id blockMatch;
@property(copy, nonatomic) id blockResult;
@property(retain, nonatomic) NSArray* subnodes;
+(id)node;
-(void).cxx_destruct;
-(id)nodes:(id)nodes;
-(id)result:(id)result;
-(id)match:(id)match;
-(id)apply:(id)apply;
@end


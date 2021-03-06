/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RouteNode.h"

@class NSRegularExpression;

__attribute__((visibility("hidden")))
@interface RENode : RouteNode {
	NSRegularExpression* _regexp;
	id _blockRange;
}
@property(copy, nonatomic) id blockRange;
@property(retain, nonatomic) NSRegularExpression* regexp;
-(void).cxx_destruct;
-(id)rangeIdKey:(id)key;
-(id)range:(id)range;
-(id)regexp:(id)regexp parameter:(id)parameter;
@end


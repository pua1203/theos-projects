/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VKNotificationGroup : VKRenderable {
	int _type;
	NSNumber* _sourceId;
	NSMutableArray* _items;
}
@property(retain, nonatomic) NSMutableArray* items;
@property(retain, nonatomic) NSNumber* sourceId;
@property(assign, nonatomic) int type;
-(void).cxx_destruct;
-(Class)cellClass;
@end


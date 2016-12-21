/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface StatsRef : XXUnknownSuperclass <NSCopying> {
	NSString* _name;
	NSString* _context;
	int _audioContext;
	NSString* _source;
}
@property(readonly, assign, nonatomic) NSString* source;
@property(readonly, assign, nonatomic) int audioContext;
@property(retain, nonatomic) NSString* context;
@property(readonly, assign, nonatomic) NSString* name;
+(id)videoAlbum:(id)album;
+(id)post:(id)post;
+(id)product:(id)product;
+(id)photo:(id)photo;
+(id)video:(id)video;
+(id)identity:(id)identity;
+(id)topic:(id)topic;
+(id)feedSearch:(id)search;
+(id)feedList:(id)list;
+(id)feedPhoto;
+(id)feedRecommended;
+(id)feedFriends;
+(id)feedRecent;
+(id)feedTop;
+(id)feed;
+(id)group:(id)group;
+(id)profile:(id)profile;
+(id)message;
+(id)dialog:(id)dialog;
+(id)name:(id)name;
+(id)name:(id)name context:(id)context source:(int)source;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)initWithName:(id)name;
-(id)initWithName:(id)name context:(id)context source:(int)source;
-(void)dealloc;
@end

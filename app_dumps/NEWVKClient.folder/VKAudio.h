/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSString, VKAudioPlaylistAlbum, NSNumber;

__attribute__((visibility("hidden")))
@interface VKAudio : VKDomain {
	BOOL _hq;
	BOOL _added;
	NSString* _performer;
	NSString* _title;
	int _duration;
	NSString* _url;
	NSNumber* _lyrics_id;
	unsigned _content_restricted_reason;
	NSString* _content_restricted_message;
	NSString* _content_restricted_url;
	NSNumber* _track_genre_id;
	VKAudioPlaylistAlbum* _album;
}
@property(assign, nonatomic) BOOL added;
@property(assign, nonatomic, getter=isHQ) BOOL hq;
@property(retain, nonatomic) VKAudioPlaylistAlbum* album;
@property(retain, nonatomic) NSNumber* track_genre_id;
@property(retain, nonatomic) NSString* content_restricted_url;
@property(retain, nonatomic) NSString* content_restricted_message;
@property(assign, nonatomic) unsigned content_restricted_reason;
@property(retain, nonatomic) NSNumber* lyrics_id;
@property(retain, nonatomic) NSString* url;
@property(assign, nonatomic) int duration;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* performer;
-(void).cxx_destruct;
-(BOOL)canAdd:(id)add;
-(void)updateUrl:(id)url;
-(BOOL)isEqual:(id)equal;
-(BOOL)process:(id)process context:(id)context;
-(Class)cellClass;
-(id)description;
@end


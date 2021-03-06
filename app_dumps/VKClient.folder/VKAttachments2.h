/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKPhotosListAttach, VKIdentity, NSArray;
@protocol SnippetStats, PhotoStats, VKSource, AudioStats;

__attribute__((visibility("hidden")))
@interface VKAttachments2 : XXUnknownSuperclass {
	BOOL _displayDetailedPolls;
	VKIdentity* _host;
	NSArray* _allImages;
	NSArray* _videoSnippets;
	NSArray* _videoAutoplayedSnippets;
	NSArray* _links;
	NSArray* _linkSnippets;
	NSArray* _polls;
	NSArray* _geoObjects;
	NSArray* _allDocuments;
	NSArray* _gifsDocuments;
	NSArray* _imageDocuments;
	NSArray* _generalDocuments;
	NSArray* _stickers;
	NSArray* _allAudios;
	NSArray* _playlists;
	NSArray* _photoAlbums;
	NSArray* _marketCollections;
	VKPhotosListAttach* _photosList;
	id<VKSource> _signer;
	id<AudioStats> _audioStats;
	id<PhotoStats> _photoStats;
	id<SnippetStats> _snippetStats;
}
@property(retain, nonatomic) id<SnippetStats> snippetStats;
@property(retain, nonatomic) id<PhotoStats> photoStats;
@property(retain, nonatomic) id<AudioStats> audioStats;
@property(assign, nonatomic) BOOL displayDetailedPolls;
@property(retain, nonatomic) id<VKSource> signer;
@property(retain, nonatomic) VKPhotosListAttach* photosList;
@property(copy, nonatomic) NSArray* marketCollections;
@property(retain, nonatomic) NSArray* photoAlbums;
@property(retain, nonatomic) NSArray* playlists;
@property(retain, nonatomic) NSArray* allAudios;
@property(retain, nonatomic) NSArray* stickers;
@property(retain, nonatomic) NSArray* generalDocuments;
@property(retain, nonatomic) NSArray* imageDocuments;
@property(retain, nonatomic) NSArray* gifsDocuments;
@property(retain, nonatomic) NSArray* allDocuments;
@property(retain, nonatomic) NSArray* geoObjects;
@property(retain, nonatomic) NSArray* polls;
@property(retain, nonatomic) NSArray* linkSnippets;
@property(retain, nonatomic) NSArray* links;
@property(retain, nonatomic) NSArray* videoAutoplayedSnippets;
@property(retain, nonatomic) NSArray* videoSnippets;
@property(retain, nonatomic) NSArray* allImages;
@property(retain, nonatomic) VKIdentity* host;
-(void).cxx_destruct;
-(BOOL)largeGifPreview;
-(BOOL)lastAttachmentIsBordered;
-(BOOL)canDisplayDetailedPolls;
-(unsigned)count;
@end


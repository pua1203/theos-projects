/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FeedPostInteractionStats.h"

@class ExternalAdsStatsManager, VKPost, NSString;

__attribute__((visibility("hidden")))
@interface ExternalPostInteractionStats : XXUnknownSuperclass <FeedPostInteractionStats> {
	VKPost* _post;
	ExternalAdsStatsManager* _statsManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) ExternalAdsStatsManager* statsManager;
@property(readonly, assign, nonatomic) VKPost* post;
+(id)post:(id)post statsManager:(id)manager;
-(void)openImage:(id)image ref:(id)ref;
-(void)playAudio:(id)audio preview:(BOOL)preview ref:(id)ref;
-(void)transitionFromPost;
-(void)action:(int)action ref:(id)ref;
-(void)tapSnippetButton:(id)button;
-(void)tapSnippet:(id)snippet;
-(id)initWithPost:(id)post statsManager:(id)manager;
-(void)dealloc;
@end

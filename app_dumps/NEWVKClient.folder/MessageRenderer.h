/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TextKitLabelInteractiveDefaultBehaviorDelegate.h"
#import "SnapperViewDelegate.h"
#import "AudioMessageAttachmentDelegate.h"
#import "AudioAttachmentDelegate.h"
#import "ThumbnailViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MessageRendererDelegate.h"

@class UIView, ImageAttachmentView, UsersModel, NSString, NSMutableArray, UITextView, VKMessage, TextKitLabelInteractiveDefaultBehavior, UIButton, TextKitLabelInteractive, SnapperView, ThumbnailView, NSNumber;

__attribute__((visibility("hidden")))
@interface MessageRenderer : XXUnknownSuperclass <TextKitLabelInteractiveDefaultBehaviorDelegate, MessageRendererDelegate, ThumbnailViewDelegate, AudioAttachmentDelegate, AudioMessageAttachmentDelegate, SnapperViewDelegate> {
	BOOL _detail;
	BOOL _disableGeo;
	UsersModel* _model;
	int _level;
	VKMessage* _message;
	NSNumber* _uid;
	id<MessageRendererDelegate> _delegate;
	ImageAttachmentView* _author;
	UIView* _stripe;
	TextKitLabelInteractive* _textKitLabel;
	UITextView* _textView;
	NSMutableArray* _images;
	NSMutableArray* _audios;
	NSMutableArray* _audioMessages;
	NSMutableArray* _links;
	NSMutableArray* _money;
	NSMutableArray* _playlists;
	NSMutableArray* _stories;
	NSMutableArray* _masks;
	NSMutableArray* _gift_panels;
	ThumbnailView* _map;
	NSMutableArray* _fwd;
	SnapperView* _snapperView;
	UIButton* _openStickersButton;
	TextKitLabelInteractiveDefaultBehavior* _labelDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* openStickersButton;
@property(retain, nonatomic) SnapperView* snapperView;
@property(retain, nonatomic) NSMutableArray* fwd;
@property(retain, nonatomic) ThumbnailView* map;
@property(retain, nonatomic) NSMutableArray* gift_panels;
@property(retain, nonatomic) NSMutableArray* masks;
@property(retain, nonatomic) NSMutableArray* stories;
@property(retain, nonatomic) NSMutableArray* playlists;
@property(retain, nonatomic) NSMutableArray* money;
@property(retain, nonatomic) NSMutableArray* links;
@property(retain, nonatomic) NSMutableArray* audioMessages;
@property(retain, nonatomic) NSMutableArray* audios;
@property(retain, nonatomic) NSMutableArray* images;
@property(retain, nonatomic) UITextView* textView;
@property(retain, nonatomic) TextKitLabelInteractive* textKitLabel;
@property(retain, nonatomic) UIView* stripe;
@property(retain, nonatomic) ImageAttachmentView* author;
@property(assign, nonatomic) __weak id<MessageRendererDelegate> delegate;
@property(retain) NSNumber* uid;
@property(retain, nonatomic) VKMessage* message;
@property(assign, nonatomic) BOOL disableGeo;
@property(assign, nonatomic) BOOL detail;
@property(assign, nonatomic) int level;
@property(retain, nonatomic) UsersModel* model;
@property(retain, nonatomic) TextKitLabelInteractiveDefaultBehavior* labelDelegate;
+(void)prerender:(id)prerender level:(int)level width:(float)width detailView:(id)view;
+(void)prerenderGift:(id)gift level:(int)level width:(float)width detailView:(id)view layout:(id)layout startIndex:(inout unsigned*)index;
+(void)prerenderDefaultMessage:(id)message level:(int)level width:(float)width detailView:(id)view layout:(id)layout startIndex:(inout unsigned*)index justBody:(inout BOOL*)body skipText:(BOOL)text;
+(id)preparedBodyForMessage:(id)message;
+(void)initialize;
-(void).cxx_destruct;
-(id)currentNavDelegate;
-(void)snapperView:(id)view shouldOpenAttach:(id)attach;
-(void)audioMessageView:(id)view selectedAudioMessage:(id)message;
-(void)audioView:(id)view selectedAudio:(id)audio;
-(id)thumbnailViewNavDelegate;
-(void)thumbnailView:(id)view selected:(id)selected;
-(void)actionOpenPack:(id)pack;
-(void)actionAudioMessage:(id)message;
-(void)actionAudio:(id)audio;
-(void)actionAuthor:(id)author;
-(void)actionPlaylist:(id)playlist;
-(void)actionMoney:(id)money;
-(void)actionMask:(id)mask;
-(void)actionStory:(id)story;
-(void)actionLink:(id)link;
-(void)playAudioMessage:(id)message toggle:(BOOL)toggle;
-(void)playAudio:(id)audio toggle:(BOOL)toggle;
-(id)messageNavigation;
-(void)render:(id)render width:(float)width reuse:(double)reuse;
-(void)clear;
-(void)reuse;
-(void)renderUser:(double)user;
-(void)notificationUserUpdated:(id)updated;
-(id)initWithDelegate:(id)delegate level:(int)level detail:(BOOL)detail;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "VKTextPage.h"
#import "VKAttachment.h"
#import "VKChildDomain.h"

@class NSString, VKIdentity;

__attribute__((visibility("hidden")))
@interface VKWikiPage : VKDomain <VKTextPage, VKAttachment, VKChildDomain> {
	NSString* _title;
	NSString* _view_url;
	VKIdentity* _parentIden;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VKIdentity* parentIden;
@property(retain, nonatomic) NSString* view_url;
@property(retain, nonatomic) NSString* title;
+(id)ownerId:(id)anId pageId:(id)anId2;
+(id)title:(id)title ownerId:(id)anId;
-(id)attachmentIco;
-(id)attachmentImage;
-(id)attachmentStatus:(BOOL)status;
-(id)attachmentTitle;
-(id)attachmentPlaceholder;
-(id)URLForTextPage;
-(BOOL)process:(id)process context:(id)context;
-(Class)rendererClass;
-(void)dealloc;
@end

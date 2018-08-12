/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DomainEditAttachment.h"

@class NSString, VKLink;

__attribute__((visibility("hidden")))
@interface LinkEditAttachment : DomainEditAttachment {
	NSString* _originUrl;
}
@property(retain, nonatomic) NSString* originUrl;
@property(retain, nonatomic) VKLink* domain;
-(void).cxx_destruct;
-(void)renderView:(id)view;
-(id)createViewForStyle:(id)style;
@end

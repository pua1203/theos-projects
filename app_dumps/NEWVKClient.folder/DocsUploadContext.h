/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UploadContext.h"
#import "DomainEvent.h"

@class NSString, VKDoc, NSNumber;

__attribute__((visibility("hidden")))
@interface DocsUploadContext : UploadContext <DomainEvent> {
	NSNumber* _gid;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSNumber* gid;
@property(retain, nonatomic) VKDoc* result;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)handleResultServerData:(id)data uploadData:(id)data2 saveData:(id)data3;
-(id)requestForSaving:(id)saving;
-(id)uploadBodyFieldName;
-(id)requestForUploadServer;
-(id)withGid:(id)gid;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKIdentity, NSNumber;

__attribute__((visibility("hidden")))
@interface ModelActionDeleteAppRequest : ModelAction {
	BOOL _app_installed;
	NSNumber* _appID;
	int _type;
	id _requests;
}
@property(retain, nonatomic) id requests;
@property(assign, nonatomic) BOOL app_installed;
@property(retain, nonatomic) VKIdentity* target;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSNumber* appID;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
-(BOOL)disableHUD;
-(BOOL)actionShowsSuccessConfirmation;
@end

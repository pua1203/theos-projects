/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelAction.h"

@class VKFeedAdsItem;

__attribute__((visibility("hidden")))
@interface ModelActionHideAds : ModelAction {
	int _mode;
}
@property(readonly, assign, nonatomic) int mode;
@property(retain, nonatomic) VKFeedAdsItem* target;
+(int)domainType;
+(id)target:(id)target mode:(int)mode;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end

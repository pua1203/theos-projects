/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "VKMLiveController.h"

@class FriendsRequestsModel;

__attribute__((visibility("hidden")))
@interface FriendsRequestsController : VKMLiveController {
}
@property(retain, nonatomic) FriendsRequestsModel* model;
-(void)actionDeleteAll:(id)all;
-(id)VKMScrollViewBackgroundColor;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)viewDidLoad;
-(int)VKMTableStyle;
-(void)VKMTableUpdatedIndex;
@end
